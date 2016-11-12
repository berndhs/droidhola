#include <QGuiApplication>
#include <QThread>
#include "customengine.h"
#include "threadbody.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    CustomEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    ThreadBody left("left", &engine);
    QThread leftExec;
    left.moveToThread(&leftExec);
    left.doReport();

    ThreadBody right("right", &engine);
    QThread rightExec;
    right.moveToThread(&rightExec);
    right.doReport();

    engine.reportState();
    return app.exec();
}
