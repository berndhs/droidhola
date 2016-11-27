/*
** Copyright (c) 2011 - 10^10^10, Alexis Megas.
** All rights reserved.
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions
** are met:
** 1. Redistributions of source code must retain the above copyright
**    notice, this list of conditions and the following disclaimer.
** 2. Redistributions in binary form must reproduce the above copyright
**    notice, this list of conditions and the following disclaimer in the
**    documentation and/or other materials provided with the distribution.
** 3. The name of the author may not be used to endorse or promote products
**    derived from Spot-On without specific prior written permission.
**
** SPOT-ON IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
** IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
** OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
** IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
** INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
** NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
** SPOT-ON, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <QDataStream>
#include <QDir>
#include <QSqlQuery>
#if QT_VERSION >= 0x050000
#include <QtConcurrent>
#endif
#include <QtCore>

#include "Common/spot-on-crypt.h"
#include "Common/spot-on-misc.h"
#include "spot-on-kernel.h"
#include "spot-on-starbeam-reader.h"

spoton_starbeam_reader::spoton_starbeam_reader
(const qint64 id, const double readInterval, QObject *parent):QObject(parent)
{
  m_fragmented = false;
  m_id = id;
  m_missingLinksIterator = 0;
  m_neighborIndex = 0;
  m_position = 0;
  m_readInterval = qBound(0.100, readInterval, 60.000);
  connect(&m_timer,
	  SIGNAL(timeout(void)),
	  this,
	  SLOT(slotTimeout(void)));
  m_timer.start(static_cast<int> (1000 * m_readInterval));
}

spoton_starbeam_reader::~spoton_starbeam_reader()
{
  m_readFuture.cancel();
  m_readFuture.waitForFinished();
  m_timer.stop();

  QString connectionName("");

  {
    QSqlDatabase db = spoton_misc::database(connectionName);

    db.setDatabaseName
      (spoton_misc::homePath() + QDir::separator() + "starbeam.db");

    if(db.open())
      {
	QSqlQuery query(db);

	query.exec("PRAGMA secure_delete = ON");
	query.prepare("DELETE FROM transmitted WHERE OID = ? AND "
		      "status_control = 'deleted'");
	query.bindValue(0, m_id);
	query.exec();
	query.exec("DELETE FROM transmitted_magnets WHERE "
		   "transmitted_oid NOT IN "
		   "(SELECT OID FROM transmitted)");
	query.exec("DELETE FROM transmitted_scheduled_pulses WHERE "
		   "transmitted_oid NOT IN "
		   "(SELECT OID FROM transmitted)");
      }

    db.close();
  }

  QSqlDatabase::removeDatabase(connectionName);
  delete m_missingLinksIterator;
  m_missingLinksIterator = 0;
}

void spoton_starbeam_reader::slotTimeout(void)
{
  spoton_crypt *s_crypt = spoton_kernel::s_crypts.value("chat", 0);

  if(!s_crypt)
    {
      spoton_misc::logError
	(QString("spoton_starbeam_reader::slotTimeout(): s_crypt is "
		 "malformed for starbeam reader %1. Aborting.").
	 arg(m_id));
      deleteLater();
      return;
    }

  QString connectionName("");
  QString status("");
  bool shouldDelete = false;

  {
    QSqlDatabase db = spoton_misc::database(connectionName);

    db.setDatabaseName
      (spoton_misc::homePath() + QDir::separator() + "starbeam.db");

    if(db.open())
      {
	populateMagnets(db);

	if(!m_magnets.isEmpty())
	  {
	    QSqlQuery query(db);

	    query.setForwardOnly(true);
	    query.prepare
	      ("SELECT file, fragmented, hash, missing_links, nova, "
	       "position, pulse_size, read_interval, status_control, "
	       "total_size FROM transmitted WHERE OID = ?");
	    query.bindValue(0, m_id);

	    if(query.exec())
	      if(query.next())
		{
		  m_fragmented = query.value(1).toBool();
		  m_readInterval = qBound(0.100, query.value(7).toDouble(),
					  60.000);
		  status = query.value(8).toString().toLower();

		  if(status == "completed")
		    m_timer.stop();
		  else if(status == "deleted")
		    shouldDelete = true;
		  else if(m_position >= 0 && status == "transmitting")
		    {
		      QByteArray bytes;
		      QByteArray hash;
		      QByteArray nova;
		      QString fileName("");
		      QString fileSize("");
		      QString pulseSize("");
		      bool ok = true;

		      bytes = s_crypt->
			decryptedAfterAuthenticated(QByteArray::
						    fromBase64(query.
							       value(0).
							       toByteArray()),
						    &ok);

		      if(ok)
			fileName = QString::fromUtf8
			  (bytes.constData(), bytes.length());

		      if(ok)
			hash = s_crypt->
			  decryptedAfterAuthenticated
			  (QByteArray::
			   fromBase64(query.value(2).toByteArray()),
			   &ok);

		      if(ok)
			if(!m_missingLinksIterator)
			  {
			    QByteArray bytes
			      (s_crypt->
			       decryptedAfterAuthenticated
			       (QByteArray::
				fromBase64(query.value(3).toByteArray()),
				&ok));

			    if(ok)
			      {
				if(!bytes.isEmpty())
				  m_missingLinks = bytes.split(',');

				if(!m_missingLinks.isEmpty())
				  {
				    try
				      {
					m_missingLinksIterator = new
					  QListIterator<QByteArray>
					  (m_missingLinks);
				      }
				    catch(const std::bad_alloc &exception)
				      {
					m_missingLinksIterator = 0;
				      }
				    catch(...)
				      {
					if(m_missingLinksIterator)
					  delete m_missingLinksIterator;

					m_missingLinksIterator = 0;
					spoton_misc::logError
					  ("spoton_starbeam_reader::"
					   "slotTimeout(): critical "
					   "failure.");
				      }

				    if(m_missingLinksIterator)
				      m_missingLinksIterator->toFront();
				    else
				      spoton_misc::logError
					("spoton_starbeam_reader::"
					 "slotTimeout(): memory "
					 "failure.");
				  }
			      }
			  }

		      if(ok)
			nova = s_crypt->
			  decryptedAfterAuthenticated
			  (QByteArray::
			   fromBase64(query.value(4).toByteArray()),
			   &ok);

		      if(ok)
			if(!m_missingLinksIterator)
			  m_position = s_crypt->
			    decryptedAfterAuthenticated
			    (QByteArray::
			     fromBase64(query.value(5).toByteArray()),
			     &ok).toLongLong();

		      if(ok)
			pulseSize = s_crypt->
			  decryptedAfterAuthenticated
			  (QByteArray::
			   fromBase64(query.value(6).toByteArray()),
			   &ok).
			  constData();

		      if(ok)
			fileSize = s_crypt->
			  decryptedAfterAuthenticated
			  (QByteArray::
			   fromBase64(query.value(9).toByteArray()),
			   &ok).
			  constData();

		      if(ok)
			{
			  /*
			  ** Read some portion of the file within
			  ** a thread. After the thread has completed,
			  ** process the read data.
			  */

			  if(m_readFuture.isFinished() &&
			     m_readFuture.resultCount() > 0)
			    {
			      QPair<QByteArray, qint64> pair
				(m_readFuture.result());

			      if(!pair.first.isEmpty())
				pulsate
				  (pair.first, fileName, pulseSize, fileSize,
				   m_magnets.value(qrand() %
						   m_magnets.count()),
				   nova, hash, db, pair.second, s_crypt);

			      m_readFuture =
				QFuture<QPair<QByteArray, qint64> > ();
			    }
			  else if(m_readFuture.isFinished())
			    {
			      if(m_missingLinksIterator &&
				 m_missingLinksIterator->hasNext())
				{
				  QByteArray bytes
				    (m_missingLinksIterator->next());

				  if(!bytes.isEmpty())
				    m_position = qAbs(bytes.toLongLong());
				}

			      m_readFuture = QtConcurrent::run
				(this, &spoton_starbeam_reader::read,
				 fileName, pulseSize, m_position);
			    }
			}
		    }
		}
	    }
      }

    db.close();
  }

  QSqlDatabase::removeDatabase(connectionName);

  if(shouldDelete)
    {
      spoton_misc::logError
	(QString("spoton_starbeam_reader::slotTimeout(): instructed "
		 "to delete starbeam reader %1.").
	 arg(m_id));
      deleteLater();
      return;
    }

  if(status != "completed")
    setReadInterval(m_readInterval);
}

void spoton_starbeam_reader::populateMagnets(const QSqlDatabase &db)
{
  if(!db.isOpen())
    {
      spoton_misc::logError("spoton_starbeam_reader::populateMagnets(): "
			    "db is closed.");
      return;
    }
  else if(!m_magnets.isEmpty())
    return;

  QSqlQuery query(db);

  query.setForwardOnly(true);
  query.prepare("SELECT magnet FROM transmitted_magnets WHERE "
		"transmitted_oid = ?");
  query.bindValue(0, m_id);

  if(query.exec())
    while(query.next())
      m_magnets.append(QByteArray::fromBase64(query.value(0).toByteArray()));
}

QHash<QString, QByteArray> spoton_starbeam_reader::elementsFromMagnet
(const QByteArray &magnet, spoton_crypt *s_crypt)
{
  QByteArray data;
  QHash<QString, QByteArray> elements;
  QList<QByteArray> list;
  bool ok = true;

  if(!s_crypt)
    goto done_label;

  data = s_crypt->decryptedAfterAuthenticated(magnet, &ok);

  if(!ok)
    goto done_label;

  list = data.remove
    (0, static_cast<int> (qstrlen("magnet:?"))).split('&');

  while(!list.isEmpty())
    {
      QByteArray bytes(list.takeFirst());

      if(bytes.startsWith("ct=")) // Cipher Type
	{
	  bytes.remove(0, 3);
	  elements.insert("ct", bytes);
	}
      else if(bytes.startsWith("ek=")) // Encryption Key
	{
	  bytes.remove(0, 3);
	  elements.insert("ek", bytes);
	}
      else if(bytes.startsWith("ht=")) // Hash Type
	{
	  bytes.remove(0, 3);
	  elements.insert("ht", bytes);
	}
      else if(bytes.startsWith("mk=")) // MAC Key
	{
	  bytes.remove(0, 3);
	  elements.insert("mk", bytes);
	}
      else if(bytes.startsWith("xt="))
	{
	  bytes.remove(0, 3);

	  if(bytes == "urn:starbeam")
	    elements.insert("xt", bytes);
	}
    }

  if(!elements.contains("xt"))
    {
      elements.clear();
      goto done_label;
    }

 done_label:
  return elements;
}

void spoton_starbeam_reader::pulsate(const QByteArray &buffer,
				     const QString &fileName,
				     const QString &pulseSize,
				     const QString &fileSize,
				     const QByteArray &magnet,
				     const QByteArray &nova,
				     const QByteArray &hash,
				     const QSqlDatabase &db,
				     const qint64 rc,
				     spoton_crypt *s_crypt)
{
  if(m_position < 0)
    {
      spoton_misc::logError("spoton_starbeam_reader::pulsate(): "
			    "m_position is negative.");
      return;
    }

  QHash<QString, QByteArray> elements(elementsFromMagnet(magnet, s_crypt));

  if(elements.isEmpty())
    {
      spoton_misc::logError("spoton_starbeam_reader::pulsate(): "
			    "elements is empty.");
      return;
    }

  QByteArray bytes;
  QByteArray data(buffer.mid(0, static_cast<int> (rc)));
  QByteArray messageCode;
  QDataStream stream(&bytes, QIODevice::WriteOnly);
  QString status("completed");
  bool ok = true;
  int size = 0;
  spoton_crypt crypt(elements.value("ct").constData(),
		     elements.value("ht").constData(),
		     QByteArray(),
		     elements.value("ek"),
		     elements.value("mk"),
		     0,
		     0,
		     "");

  data = qCompress(data, 9);
  size = data.length();
  stream << QByteArray("0060")
	 << QFileInfo(fileName).fileName().toUtf8()
	 << QByteArray::number(m_position)
	 << QByteArray::number(size)
	 << fileSize.toLatin1()
	 << data
	 << pulseSize.toLatin1()
	 << hash;

  if(stream.status() != QDataStream::Ok)
    ok = false;
  else
    ok = true;

  if(nova.isEmpty())
    {
      if(ok)
	data = crypt.encrypted(bytes, &ok);
    }
  else
    {
      QPair<QByteArray, QByteArray> pair;

      pair.first = nova.mid
	(0, static_cast<int> (spoton_crypt::
			      cipherKeyLength("aes256")));
      pair.second = nova.mid(pair.first.length());

      {
	spoton_crypt crypt("aes256",
			   "sha512",
			   QByteArray(),
			   pair.first,
			   pair.second,
			   0,
			   0,
			   "");

	if(ok)
	  data = crypt.encrypted(bytes, &ok);

	if(ok)
	  data = data + crypt.keyedHash(data, &ok);
      }

      if(ok)
	data = crypt.encrypted(data, &ok);
    }

  if(ok)
    messageCode = crypt.keyedHash(data, &ok);

  if(ok)
    data = data.toBase64() + "\n" + messageCode.toBase64();

  if(ok)
    {
      if(spoton_kernel::instance())
	spoton_kernel::instance()->writeMessage0060
	  (data, m_fragmented ? &m_neighborIndex : 0, &ok);
      else
	ok = false;
    }

  if(ok)
    {
      if(m_missingLinksIterator)
	{
	  if(!m_missingLinksIterator->hasNext())
	    m_position = QFileInfo(fileName).size();
	}
      else
	m_position = qAbs(m_position + rc); // +=
    }

  if(m_position < QFileInfo(fileName).size())
    status = "transmitting";

  if(ok)
    savePositionAndStatus(status, db);
}

void spoton_starbeam_reader::savePositionAndStatus(const QString &status,
						   const QSqlDatabase &db)
{
  if(!db.isOpen())
    {
      spoton_misc::logError
	("spoton_starbeam_reader::savePositionAndStatus(): "
	 "db is closed.");
      return;
    }

  spoton_crypt *s_crypt = spoton_kernel::s_crypts.value("chat", 0);

  if(!s_crypt)
    {
      spoton_misc::logError
	("spoton_starbeam_reader::savePositionAndStatus(): "
	 "s_crypt is zero.");
      return;
    }

  QSqlQuery query(db);
  bool ok = true;

  query.exec("PRAGMA synchronous = NORMAL");
  query.prepare("UPDATE transmitted "
		"SET position = ?, "
		"status_control = CASE WHEN status_control = 'deleted' "
		"THEN 'deleted' ELSE ? END "
		"WHERE OID = ?");
  query.bindValue
    (0, s_crypt->encryptedThenHashed(QByteArray::number(m_position),
				     &ok).toBase64());
  query.bindValue(1, status);
  query.bindValue(2, m_id);

  if(ok)
    query.exec();
}

void spoton_starbeam_reader::setReadInterval(const double readInterval)
{
  m_readInterval = qBound(0.100, readInterval, 60.000);

  if(static_cast<int> (1000 * m_readInterval) != m_timer.interval())
    if(m_timer.isActive())
      m_timer.start(static_cast<int> (1000 * m_readInterval));
}

QPair<QByteArray, qint64> spoton_starbeam_reader::read
(const QString &fileName, const QString &pulseSize, const qint64 position)
{
  if(position < 0)
    {
      spoton_misc::logError("spoton_starbeam_reader::read(): "
			    "position is negative.");
      return QPair<QByteArray, qint64> (QByteArray(), 0);
    }

  QFile file(fileName);
  QPair<QByteArray, qint64> pair(QByteArray(), 0);

  if(file.open(QIODevice::ReadOnly))
    {
      if(file.seek(position))
	{
	  if(!file.atEnd())
	    {
	      QByteArray buffer
		(qBound(spoton_common::MINIMUM_STARBEAM_PULSE_SIZE,
			pulseSize.toInt(),
			static_cast<int> (spoton_common::
					  MAXIMUM_STARBEAM_PULSE_SIZE)), 0);
	      qint64 rc = file.read(buffer.data(), buffer.length());

	      if(rc < 0)
		spoton_misc::logError("spoton_starbeam_reader::read(): "
				      "read() failure.");
	      else if(rc > 0)
		{
		  pair.first = buffer;
		  pair.second = rc;
		}
	    }
	}
      else
	spoton_misc::logError("spoton_starbeam_reader::read(): "
			      "seek() failure.");
    }
  else
    spoton_misc::logError("spoton_starbeam_reader::read(): "
			  "open() failure.");

  file.close();
  return pair;
}
