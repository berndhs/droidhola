#include <QDebug>
#include "spotkernel.h"
#include "cryptofront.h"
#include <QChar>

QByteArray SpotKernel::m_Msg;

SpotKernel::SpotKernel(QObject *parent)
  :QObject (parent),
    m_front(nullptr)
{
  m_Msg.reserve(256*1014);
  m_Msg.fill ('?',12);
  qDebug() << Q_FUNC_INFO << "m_Msg has space for " << m_Msg.capacity();

  qDebug() << Q_FUNC_INFO << "m_Msg at " << &(m_Msg);
}

QByteArray
SpotKernel::msg () const
{
  return m_Msg;
}

void SpotKernel::setCrypto(CryptoFront *front)
{
  m_front = front;
}

void
SpotKernel::sendMsg(QByteArray msg)
{
  qDebug() << Q_FUNC_INFO << msg;
  qDebug() << "we are here " << __LINE__ << "buffer is " << m_Msg;
  qDebug () << __LINE__<< "_ \t" << &(m_Msg);
  qDebug () << __LINE__<< "_ \t" << m_Msg;
  m_Msg.fill ('?',msg.length());
  for (int i=0;i<msg.length();++i) {
    QChar c = ((msg[i] + 13)%255);
    qDebug() << "i" << i << " is " << c;
    m_Msg[i] = c.toLatin1();;
  }
  qDebug() << "at " << &(m_Msg);
  qDebug() << "front at " << m_front;

  if (m_front) {
      m_front->reportEncrypted (QString(m_Msg));
    }
//  emit MsgChanged(m_Msg);
}
