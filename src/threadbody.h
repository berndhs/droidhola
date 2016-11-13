
#ifndef THREADBODY_H
#define THREADBODY_H

#include <QObject>
#include <QThread>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>
#include "customengine.h"

class ThreadBody : public QObject
{
    Q_OBJECT
public:
  ThreadBody(QString name = "ThreadBody", CustomEngine *p=0);

  void doReport ();

private slots:

  void getData();
  void waitCon ();
  void testTimer();


private:
  QString m_name;
  CustomEngine * m_parentObj;
  QTcpServer serv;
  QTcpSocket * sock;
  bool gotOtherSide;
};

#endif // THREADLEFT_H
