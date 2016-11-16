#include <QGuiApplication>
#include <QThread>
#include <QQmlContext>
#include "customengine.h"
#include "threadbody.h"
#include "cryptofront.h"
#include "spotkernel.h"

int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
  QGuiApplication app(argc, argv);

  CryptoFront cfront("chatchat");

  CustomEngine engine;
  qDebug() << "cfront is called " << cfront.name();
  engine.rootContext()->setContextProperty(cfront.name(),&cfront);
  engine.load(QUrl(QLatin1String("qrc:/main.qml")));

//  ThreadBody left("left", &engine);
//  QThread leftExec;
//  left.goToThread(&leftExec);
//  left.doReport();
//  cfront.setThread(left);


  SpotKernel kernel (&cfront);


  engine.reportState();
  return app.exec();
}
