#include <iostream>
#include "chatapplication.h"

using namespace std;

ChatApplication::ChatApplication(int &argc, char **argv)
  :QCoreApplication(argc,argv)
{

}
bool ChatApplication::notify(QObject* receiver, QEvent* event) {
  bool done = true;
  try {
    done = QCoreApplication::notify(receiver, event);
  } catch (CryptoBad& ex) {
    cout << ex.what() << endl;

  } catch (...) {
    cout << "unknown exeption" << endl;
  }
  return done;
}

