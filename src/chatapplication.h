#ifndef CHATAPPLICATION_H
#define CHATAPPLICATION_H

#include <QGuiApplication>
#include "cryptobad.h"


class ChatApplication : public QGuiApplication
{
public:
  ChatApplication(int &argc, char **argv);
  bool notify(QObject *receiver, QEvent *event);
};

#endif // CHATAPPLICATION_H
