#include <iostream>
#include "chatapplication.h"

using namespace std;

ChatApplication::ChatApplication(int &argc, char **argv)
  :QGuiApplication(argc,argv)
{

}
bool ChatApplication::notify(QObject* receiver, QEvent* event) {
  bool done = true;
  done = QGuiApplication::notify(receiver, event);

  return done;
}

