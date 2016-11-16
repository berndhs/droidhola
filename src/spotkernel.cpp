#include <QDebug>
#include "spotkernel.h"
#include "cryptofront.h"
#include <QChar>


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


SpotKernel::SpotKernel(QObject *parent)
  :QObject (parent),
    m_front(nullptr)
{
  qDebug() << Q_FUNC_INFO << "front at " << m_front;
  m_Msg.reserve(256*1014);
  m_Msg.fill ('?',12);
  qDebug() << Q_FUNC_INFO << "m_Msg has space for " << m_Msg.capacity();

  qDebug() << Q_FUNC_INFO << "m_Msg at " << &(m_Msg);
  qDebug() << Q_FUNC_INFO << "front" << m_front;
}

QByteArray
SpotKernel::msg () const
{
  return m_Msg;
}

void SpotKernel::setCrypto(CryptoFront *front)
{
  qDebug() << Q_FUNC_INFO << front;
  m_front = front;
  m_front -> reportEncrypted(QString("we're not sure"));
}

void
SpotKernel::sendMsg(QByteArray msg)
{
  qDebug() << Q_FUNC_INFO << "tread" << thread();
  qDebug() << Q_FUNC_INFO << msg;
  qDebug() << "\non thread" << thread();
  qDebug() << Q_FUNC_INFO << "front" << m_front;
  QByteArray data;
  data.reserve(msg.length()*2+2);
//  m_Msg.resize(msg.length()+10);
  for (int i=0;i<msg.length();++i) {
    unsigned char c = msg.at(i);
    c = ((c & 0x0F) << 4) | ((c & 0xF0) >> 4);
    qDebug() << "\t\t" << c;
    data.append( c);
  }
  m_Msg = data.toHex();
  qDebug() << "\t " << m_Msg;
  qDebug() << "\t" << __LINE__;

  emit reportCrypt (QString(m_Msg));

}
