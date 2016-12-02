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

//  qDebug() << Q_FUNC_INFO;
  done = QApplication::notify(receiver, event);
  try {
    if (event->spontaneous()) {
//      qDebug() << "outside event" << event->type();
    } else {
      if (event->type() == QEvent::MouseMove) {
//        qDebug() << "taking it";
        event->accept();
      }
    }
//    qDebug() << "\tsays" << done << "on " << count;

  } catch (...) {
    qDebug() << Q_FUNC_INFO << "some exception that we will ignore";
  }

  return done;
}

