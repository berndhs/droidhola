#include <QApplication>
#include <QThread>
#include <QQmlContext>
#include <QStringList>

#include "chatapplication.h"
#include "customengine.h"
#include "threadbody.h"
#include "cryptofront.h"
#include "spotkernel.h"
#include "copyright.h"
#include "programversion.h"

#include <iostream>
#include <exception>

#include "droidhola.h"
//#include "spotonlib.h"


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
#include <QMessageBox>

QStringList
getArgs (int argc, char *argv[])
{
  QStringList args;
  args.clear();
  for (int i=0; i<argc; i++) {
    args << argv[i];
  }
  return args;
}

bool
wantSpecial (QStringList &args, QStringList choices)
{
  bool isInThere(false);
  foreach (QString str, choices) {
    if (args.contains(str)) {
      isInThere = true;
      break;
    }
  }
  return isInThere;
}

int
main(int argc, char *argv[])
{

  QStringList args;
  args = getArgs(argc,argv);
  if (wantSpecial(args,{"--help","-H","--copyright"})) {
    CopyRight cpr;
    std::cout << cpr.print().toStdString() << std::endl;
    exit(0);
  }
//  ChatApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
  ChatApplication app(argc, argv);
  deliberate::ProgramVersion version(app,"chatchat");
  if (wantSpecial(args,{"--version","-V"})) {
    std::cout << version.Version(). toStdString() << std::endl;
    exit(0);
  }
  CryptoFront cfront(app,version, version.MyName());

  CustomEngine engine;
  qDebug() << "cfront is called " << cfront.name();
  cfront.dumpInfo();
  engine.rootContext()->setContextProperty(cfront.name(),&cfront);
  engine.load(QUrl(QLatin1String("qrc:/qml/nouveauMain.qml")));
  QList<QObject*> rootList = engine.rootObjects();
  qDebug() << Q_FUNC_INFO << "there are " << rootList.count() << "root objects";
  qDebug() << Q_FUNC_INFO << "the are " << rootList;
  QList<QObject*> mainGuys;
  for (int i= 0; i<rootList.count(); ++i) {
    QString name("cantSeeMe");
    mainGuys = rootList.at(i)->findChildren<QObject*>();
    qDebug() << Q_FUNC_INFO << "number of children of top " << name << mainGuys.count();
    for (int ii=0; ii<mainGuys.count(); ++ii) {
      if (mainGuys.at(ii)->objectName() == name) {
        qDebug() << "\t\t\tthis is the one !" << ii;
        QObject* mainObj = mainGuys.at(ii);
        qDebug() << mainObj;
//        QFont = mainObj->text
        cfront.setMainDialog(mainObj);
      } else {
        qDebug() << "\t\tchild " << mainGuys.at(ii) << "called" << mainGuys.at(ii)->objectName();

      }
    }
  }


  engine.reportState();

  return app.exec();


  qDebug() << "done with " << Q_FUNC_INFO;
}
