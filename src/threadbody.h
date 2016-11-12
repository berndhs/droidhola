
#ifndef THREADBODY_H
#define THREADBODY_H

#include <QObject>
#include <QThread>
#include <QString>
#include "customengine.h"

class ThreadBody : public QObject
{
    Q_OBJECT
public:
    ThreadBody(QString name = "ThreadBody", CustomEngine *p=0);

    void doReport ();

private:
    QString m_name;
    CustomEngine * m_parentObj;
};

#endif // THREADLEFT_H
