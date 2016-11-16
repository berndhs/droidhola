#ifndef CRYPTOFRONT_H
#define CRYPTOFRONT_H


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


#include <QTimer>
#include <QMap>

#include "threadbody.h"
#include "spotkernel.h"

#include <QObject>
#include <QTimer>

class CryptoFront : public QObject
{
  Q_OBJECT

  Q_PROPERTY(QString input READ getInput WRITE setInput NOTIFY inputChanged)
  Q_PROPERTY(QString output READ getOutput NOTIFY outputChanged)
  Q_PROPERTY(QString name READ name)


public:
  explicit CryptoFront(QString daName, QObject *parent = 0);

  Q_INVOKABLE void sendMessage (QString msg);
  void setThread (ThreadBody & thread);
  void addPoolThread (ThreadBody * tb);
  void backsetInput(QString & input);
  void reportEncrypted (QString crypto);

  void addKernel (SpotKernel & kern);


  QString name() const
  {
    return objectName();
  }

signals:

  void inputChanged(QString & input);
  void outputChanged(QString & output);

  void sentData();

public slots:

  void pokeThread();

private:

  void setInput (QString & input);
  QString getInput ();

  QString getOutput();


  QString m_input;
  QString m_output;

  QTimer *connecTimer;

  ThreadBody *m_thread;

  SpotKernel *m_kernel;

  QMap <int,ThreadBody*> threadPool;

};

#endif // CRYPTOFRONT_H
