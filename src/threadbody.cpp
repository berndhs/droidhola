#include <QDebug>
#include <QMutex>
#include <QtGlobal>
#include <QDateTime>
#include "cryptofront.h"
#include <unistd.h>
#include "threadbody.h"


/****************************************************************/

/*
** Copyright (c) 2016 - present, Bernd Stramm.
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
**    derived from chatchat without specific prior written permission.
**
** chatchat IS PROVIDED BY THE AUTHORS ``AS IS'' AND ANY EXPRESS OR
** IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
** OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
** IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
** INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
** NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
** chatchat, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


 /****************************************************************/


ThreadBody::ThreadBody(QString name, CustomEngine *p)
    :m_parentObj(p)
{
  qDebug() << Q_FUNC_INFO << name << thread();
  m_name = name;
  qsrand(QDateTime::currentDateTime().toTime_t());
  doReport();
}

void
ThreadBody::doReport()
{
  qDebug() << Q_FUNC_INFO << thread();
  if (m_parentObj) {
    m_parentObj->reportIn (m_name,this);
  }
}

void
ThreadBody::goToThread(QThread *t)
{
  qDebug() << Q_FUNC_INFO << thread() << t;
  moveToThread(t);
}

void
ThreadBody::setFront(CryptoFront *ft)
{
  m_front = ft;
}

void ThreadBody::makeData()
{
  qDebug() << "make data for" << thread();
  QMutex lock;
  lock.lock();
  QByteArray bytes;
  int size = qrand() / (RAND_MAX/1000.0);
  char daChar = 'a' + qrand() % 26;
  qDebug() << "size is" << size;
  bytes.fill (daChar,size);
  qDebug () << "\t" << size << " of " << daChar;
  QString strData (bytes);
  m_front->backsetInput(strData);
  lock.unlock();
}

