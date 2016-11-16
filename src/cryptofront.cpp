#include "cryptofront.h"
#include <QDebug>
#include <QHostAddress>
#include <QTimer>
#include <QMutex>
#include <QDateTime>
#include <QtGlobal>
#include <unistd.h>


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


CryptoFront::CryptoFront(QString daName, QObject *parent) : QObject(parent)
{
  setObjectName(daName);
  qsrand(QDateTime::currentDateTime().toTime_t());
  connecTimer = nullptr;
  //  connecTimer = new QTimer(this);
}

void CryptoFront::sendMessage(QString msg)
{
  qDebug() << Q_FUNC_INFO << msg;
  m_input = msg;
  qDebug() << Q_FUNC_INFO << "input is " << m_input;
  sleep(1);
  qDebug() << "\tkernel is at " << m_kernel;
  sleep(1);
  m_kernel->sendMsg (m_input.toUtf8());
}

void
CryptoFront::setThread(ThreadBody &thread)
{
  m_thread = &thread;
  (&thread)->setFront(this);
}

void
CryptoFront::addPoolThread(ThreadBody *tb)
{
  tb->setFront(this);
  int tpNext = threadPool.size();
  threadPool[tpNext] = tb;
}

void
CryptoFront::backsetInput(QString &input)
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

void CryptoFront::reportEncrypted(QString crypto)
{
  QString daWhole ("maybe");
  qDebug() << Q_FUNC_INFO << "going to emit for " << daWhole;
  emit outputChanged(daWhole);
}

void
CryptoFront::addKernel(SpotKernel &kern)
{
  m_kernel = &kern;
}

void
CryptoFront::pokeThread()
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
