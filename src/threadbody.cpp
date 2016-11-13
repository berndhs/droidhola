#include <QDebug>
#include "threadbody.h"

ThreadBody::ThreadBody(QString name, CustomEngine *p)
    :m_parentObj(0),
      sock(0)
{
  qDebug() << Q_FUNC_INFO << name;
  m_name = name;
  m_parentObj = p;
  doReport();
  qDebug() << Q_FUNC_INFO << "have connection" << sock;
  connect (&serv,SIGNAL(newConnection()),this,SLOT(waitCon()));
}

void
ThreadBody::doReport()
{
  if (m_parentObj) {
    m_parentObj->reportIn (m_name,this);
  }
}

void ThreadBody::waitCon()
{
  qDebug() << Q_FUNC_INFO ;
  if (!(sock)) {
    bool gotit = serv.waitForNewConnection(10000);
    while (!gotit) {
      gotit = serv.waitForNewConnection(10000);
      qDebug() << "waiting" << gotit;
    }

    sock = serv.nextPendingConnection();
    qDebug() << Q_FUNC_INFO << "now have connection" << sock;
  }
  if (sock) {
    connect (sock,SIGNAL(readyRead()),this,SLOT(getData()));
  }
  qDebug() << Q_FUNC_INFO << "have connection" << sock;
}

void ThreadBody::testTimer()
{
  qDebug() << Q_FUNC_INFO;
}

void ThreadBody::getData()
{
  qDebug() << Q_FUNC_INFO;
  if (sock) {
    bool dontGotIt(true);
    while (dontGotIt) {
      dontGotIt = sock->waitForReadyRead(10000);
      if (dontGotIt) {
          qDebug() << "no data";
      }
    }
    QByteArray data = sock->readAll();
    qDebug() << Q_FUNC_INFO << data;
  }
}
