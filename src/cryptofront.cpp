#include "cryptofront.h"
#include <QDebug>
#include <QHostAddress>
#include <QTimer>
#include <QMutex>
#include <QDateTime>
#include <QtGlobal>

CryptoFront::CryptoFront(QObject *parent) : QObject(parent)
{
  qsrand(QDateTime::currentDateTime().toTime_t());
  connecTimer = new QTimer(this);
  connect (connecTimer,SIGNAL(timeout()),this,SLOT(pokeThread()));
  connecTimer->setInterval(5);
  connecTimer->start();
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
