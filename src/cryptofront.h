#ifndef CRYPTOFRONT_H
#define CRYPTOFRONT_H
#include <QPointer>
#include <QTcpSocket>

#include "threadbody.h"

#include <QObject>
#include <QTimer>

class CryptoFront : public QObject
{
  Q_OBJECT

  Q_PROPERTY(QString input READ getInput WRITE setInput NOTIFY inputChanged)
  Q_PROPERTY(QString output READ getOutput NOTIFY outputChanged)


public:
  explicit CryptoFront(QObject *parent = 0);

  void setThread (ThreadBody & thread);


signals:

  void inputChanged(QString & input);
  void outputChanged(QString & output);

public slots:

  void foundTheHost();
  void connectSock();

private:

  void setInput (QString & input);
  QString getInput ();

  QString getOutput();


  QString m_input;
  QString m_output;

  ThreadBody *m_thread;
  QTcpSocket sockToThread;

};

#endif // CRYPTOFRONT_H
