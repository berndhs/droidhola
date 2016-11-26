#ifndef CHATAPPLICATION_H
#define CHATAPPLICATION_H

#include <QApplication>
#include "cryptobad.h"


class ChatApplication : public QApplication
{
public:
  ChatApplication(int &argc, char **argv);
  bool notify(QObject *receiver, QEvent *event);
};

#endif // CHATAPPLICATION_H
