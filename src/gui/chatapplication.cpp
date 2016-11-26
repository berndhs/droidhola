#include <iostream>
#include "chatapplication.h"
#include <QDebug>

using namespace std;

ChatApplication::ChatApplication(int &argc, char **argv)
  :QApplication(argc,argv)
{

}

bool ChatApplication::notify(QObject* receiver, QEvent* event)
{
  bool done = true;
  static int count(0);
  ++count;

  qDebug() << Q_FUNC_INFO << count;
  done = QApplication::notify(receiver, event);
  try {
    qDebug() << "\tsays" << done << "on " << count;

  } catch (...) {
    qDebug() << Q_FUNC_INFO << "some exception that we will ignore";
  }

  return done;
}

