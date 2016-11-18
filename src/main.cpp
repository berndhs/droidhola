#include <QGuiApplication>
#include <QThread>
#include <QQmlContext>
#include <QStringList>

#include "customengine.h"
#include "threadbody.h"
#include "cryptofront.h"
#include "spotkernel.h"
#include "copyright.h"

#include <iostream>
#include <exception>


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

QStringList args;

void
getArgs (int argc, char *argv[])
{
  args.clear();
  for (int i=0; i<argc; i++) {
    args << argv[i];
  }
}

bool
wantcopyright()
{
  return args.contains("--help") || args.contains("--copyright");
}

int main(int argc, char *argv[])
{

  getArgs(argc,argv);
  if (wantcopyright()) {
    Copyright cpr;
    std::cout << cpr.print().toStdString() << std::endl;
    exit(0);
  }

  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
  QGuiApplication app(argc, argv);

  CryptoFront cfront("chatchat");
  CustomEngine engine;
  qDebug() << "cfront is called " << cfront.name();
  cfront.dumpInfo();
  try {
    engine.rootContext()->setContextProperty(cfront.name(),&cfront);
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));



    engine.reportState();
    return app.exec();
  } catch (exception e)
  {
    std::cout << "what went wrong? " << e.what();
    return 1;
  }

  qDebug() << "done with " << Q_FUNC_INFO;
}
