#ifndef CRYPTOFRONT_H
#define CRYPTOFRONT_H

#include <QTimer>
#include <QMap>

#include "threadbody.h"
#include "spotkernel.h"

#include <QObject>
#include <QTimer>

class CryptoFront : public QObject
{
  Q_OBJECT

  Q_PROPERTY(QString input READ getInput WRITE setInput NOTIFY inputChanged)
  Q_PROPERTY(QString output READ getOutput NOTIFY outputChanged)
  Q_PROPERTY(QString name READ name)


public:
  explicit CryptoFront(QObject *parent = 0);

  void setThread (ThreadBody & thread);
  void addPoolThread (ThreadBody * tb);
  void xferData (QByteArray dataIn);
  void backsetInput(QString & input);

  void addKernel (SpotKernel & kern);


  QString name() const
  {
    return objectName();
  }

signals:

  void inputChanged(QString & input);
  void outputChanged(QString & output);

  void sentData();

public slots:

  void pokeThread();

private:

  void setInput (QString & input);
  QString getInput ();

  QString getOutput();


  QString m_input;
  QString m_output;

  QTimer *connecTimer;

  ThreadBody *m_thread;

  SpotKernel *m_kernel;

  QMap <int,ThreadBody*> threadPool;

};

#endif // CRYPTOFRONT_H
