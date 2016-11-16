#include "customengine.h"
#include <QDebug>
#include <QStringList>
#include <QString>


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


CustomEngine::CustomEngine()
{

}

void
CustomEngine::reportIn(QString name, QObject *fellow)
{
  m_fellows[name] = fellow;
  qDebug() << Q_FUNC_INFO << "\n\tfellow " << fellow << name
           << " on " << fellow->thread();
}

void
CustomEngine::reportState()
{
  qDebug() << Q_FUNC_INFO;
  qDebug() << "\tpluginpath " << pluginPathList();
  qDebug() << "\tbase Url" << baseUrl();
  qDebug() << "\t" << m_fellows.count() << "fellows";

  auto kk = m_fellows.keys();
  qDebug() << "\nthere are " << kk.count() << " fellows";
  for (int i=0; i<kk.count(); ++i) {
    qDebug() << "\t\t" << "fellow" << kk[i] << m_fellows[kk[i]];
  }
}
