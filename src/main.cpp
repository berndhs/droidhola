#include <QGuiApplication>
#include <QThread>
#include <QQmlContext>
#include "customengine.h"
#include "threadbody.h"
#include "cryptofront.h"

int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
  QGuiApplication app(argc, argv);

  CryptoFront cfront;

  CustomEngine engine;
  engine.rootContext()->setContextProperty("crypto",&cfront);
  engine.load(QUrl(QLatin1String("qrc:/main.qml")));

  ThreadBody left("left", &engine);
  cfront.setThread(left);
  QThread leftExec;
  left.moveToThread(&leftExec);
  left.doReport();


  engine.reportState();
  return app.exec();
}
