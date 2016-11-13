#include "cryptofront.h"
#include <QDebug>
#include <QHostAddress>
#include <QTimer>

CryptoFront::CryptoFront(QObject *parent) : QObject(parent)
{
}

void
CryptoFront::setThread(ThreadBody &thread)
{
  m_thread = &thread;
}

void CryptoFront::foundTheHost()
{
  qDebug() << Q_FUNC_INFO;
}

void
CryptoFront::setInput(QString &input)
{
  m_input = input;
  QTimer::singleShot(100,Qt::PreciseTimer,m_thread,SLOT(testTimer()));
  QTimer::singleShot(1000,Qt::PreciseTimer,m_thread,SLOT(waitCon()));
  qDebug() << Q_FUNC_INFO << "input is " << m_input;
  if (!(sockToThread.state() == QTcpSocket::ConnectedState)) {
    connect(&sockToThread,SIGNAL(connected()),this,SLOT(connectSock()));
    QHostAddress host = QHostAddress(QHostAddress::LocalHost);
    sockToThread.connectToHost(host,12345);
  }
}

void
CryptoFront::connectSock()
{
  qDebug() << Q_FUNC_INFO;
  if (m_input.length() > 0) {
    int inputBytes = m_input.toUtf8().length();
    int bytesSent = sockToThread.write(m_input.toUtf8());
    qDebug() << "\tsock status" << sockToThread.state();
    qDebug() << "\tsent " << bytesSent << " of " << inputBytes;
  }
}

QString
CryptoFront::getInput()
{
  return m_input;
}

QString
CryptoFront::getOutput()
{
  return m_output;
}
