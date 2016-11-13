#include <QDebug>
#include <QMutex>
#include <QtGlobal>
#include <QDateTime>
#include "cryptofront.h"
#include <unistd.h>
#include "threadbody.h"

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

