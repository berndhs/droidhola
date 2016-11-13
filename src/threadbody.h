
#ifndef THREADBODY_H
#define THREADBODY_H

#include <QObject>
#include <QThread>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>
#include "customengine.h"

class CryptoFront;

class ThreadBody : public QObject
{
    Q_OBJECT
public:
  ThreadBody(QString name = "ThreadBody", CustomEngine *p=0);

  void doReport ();
  void goToThread (QThread * t);
  void setFront (CryptoFront * ft);

public slots:

  void makeData();

private:
  QString m_name;
  CustomEngine * m_parentObj;
  CryptoFront  * m_front;
};

#endif // THREADLEFT_H
