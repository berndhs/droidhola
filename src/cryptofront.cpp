#include "cryptofront.h"
#include <QDebug>
#include <QHostAddress>
#include <QTimer>
#include <QMutex>
#include <QDateTime>
#include <QtGlobal>

CryptoFront::CryptoFront(QObject *parent) : QObject(parent)
{
  setObjectName("GoldenEye");
  qsrand(QDateTime::currentDateTime().toTime_t());
  connecTimer = new QTimer(this);
}

void
CryptoFront::setThread(ThreadBody &thread)
{
  m_thread = &thread;
  (&thread)->setFront(this);
}

void CryptoFront::addPoolThread(ThreadBody *tb)
{
  tb->setFront(this);
  int tpNext = threadPool.size();
  threadPool[tpNext] = tb;
}

void CryptoFront::backsetInput(QString &input)
{
  m_input = input;
  QString shouldBe (input.size(),input[0]);
  if (input != shouldBe) {
    qDebug() << "bad input " << input;
    exit(1);
  } else {
    qDebug() << "ok";
  }
  emit inputChanged(input);
}

void CryptoFront::addKernel(SpotKernel &kern)
{
  m_kernel = &kern;
}

void CryptoFront::pokeThread()
{
  int threadNum = qrand() % threadPool.size();
  qDebug() << "calling thread " << threadNum;
  threadPool[threadNum]->makeData();
}

void
CryptoFront::setInput(QString &input)
{
  m_input = input;
  qDebug() << Q_FUNC_INFO << "input is " << m_input;
  m_kernel->sendMsg (m_input.toUtf8());
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
