#ifndef CHATAPPLICATION_H
#define CHATAPPLICATION_H

#include <QCoreApplication>
#include "cryptobad.h"


class ChatApplication : public QCoreApplication
{
public:
  ChatApplication(int &argc, char **argv);
  bool notify(QObject *receiver, QEvent *event);
};

#endif // CHATAPPLICATION_H
