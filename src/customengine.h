#ifndef CUSTOMENGINE_H
#define CUSTOMENGINE_H

#include <QQmlApplicationEngine>
#include <QMap>
#include <QString>

class CustomEngine : public QQmlApplicationEngine
{
public:
    CustomEngine();
    void reportIn (QString name, QObject * fellow);
    void reportState ();

private:

    QMap <QString, QObject*> m_fellows;
};

#endif // CUSTOMENGINE_H
