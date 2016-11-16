#include "cryptofront.h"
#include <QDebug>
#include <QHostAddress>
#include <QTimer>
#include <QMutex>
#include <QDateTime>
#include <QtGlobal>
#include <unistd.h>
#include "spotkernel.h"


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


CryptoFront::CryptoFront(QString daName, QObject *parent)
  : QObject(parent),
    m_input("?"),
    m_output("!"),
    connecTimer(nullptr),
    m_kernel(nullptr)
{
  qDebug() << Q_FUNC_INFO;
  qDebug() << "\ton thread" << thread();
  setObjectName(daName);
  QThread * newTh = new QThread(this);
  m_kernel = new SpotKernel(this);
  m_kernel->moveToThread(newTh);
  m_kernel->setCrypto(this);
  qsrand(QDateTime::currentDateTime().toTime_t());
  connecTimer = nullptr;
  connect(m_kernel,SIGNAL(reportCrypt(QString)),this,SLOT(reportEncrypted(QString)));
  dumpInfo();
  //  connecTimer = new QTimer(this);
}

void CryptoFront::sendMessage(QString msg)
{
  qDebug() << Q_FUNC_INFO;
  qDebug() << Q_FUNC_INFO << msg;
  m_input = msg;
  qDebug() << Q_FUNC_INFO << "input is " << m_input;
  sleep(1);
  qDebug() << "\tkernel is at " << m_kernel;
  sleep(1);
  m_kernel->sendMsg (m_input.toUtf8());
}

//void
//CryptoFront::setThread(ThreadBody &thread)
//{
//  qDebug() << Q_FUNC_INFO;
//  m_thread = &thread;
//  (&thread)->setFront(this);
//}

//void
//CryptoFront::addPoolThread(ThreadBody *tb)
//{
//  qDebug() << Q_FUNC_INFO;
////  tb->setFront(this);
////  int tpNext = threadPool.size();
////  threadPool[tpNext] = tb;
//}

void
CryptoFront::backsetInput(QString &input)
{
  qDebug() << Q_FUNC_INFO;
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

void CryptoFront::reportEncrypted(QString crypto)
{
  qDebug() << Q_FUNC_INFO << "tread" << thread();
  qDebug() << Q_FUNC_INFO << "going to emit for " << crypto;
  m_output = crypto;
  emit outputChanged(crypto);
}

void
CryptoFront::addKernel(SpotKernel &kern)
{
  qDebug() << Q_FUNC_INFO;
  m_kernel = &kern;
}

void
CryptoFront::pokeThread()
{
  qDebug() << Q_FUNC_INFO;
//  int threadNum = qrand() % threadPool.size();
//  qDebug() << "calling thread " << threadNum;
//  threadPool[threadNum]->makeData();
}

void
CryptoFront::setInput(QString &input)
{
  qDebug() << Q_FUNC_INFO << "tread" << thread();
  m_input = input;
  qDebug() << Q_FUNC_INFO << "input is " << m_input;
  m_kernel->sendMsg (m_input.toUtf8());
}


QString
CryptoFront::getInput()
{
  qDebug() << Q_FUNC_INFO;
  qDebug() << Q_FUNC_INFO << "tread" << thread();
  return m_input;
}

QString
CryptoFront::getOutput()
{
  qDebug() << Q_FUNC_INFO;
  qDebug() << Q_FUNC_INFO << "tread" << thread();
  return m_output;
}

void
CryptoFront::dumpInfo()
{
  qDebug() << Q_FUNC_INFO << "tread" << thread();
  qDebug() << Q_FUNC_INFO;
  qDebug() << "m_input" << m_input;
  qDebug() << "m_output" << m_output;
  qDebug() << "connectTimer ptr " << connecTimer;
  qDebug() << "m_kernel" << m_kernel;
}
