#ifndef SPOTKERNEL_H
#define SPOTKERNEL_H

#include <QObject>

class CryptoFront;

class SpotKernel : public QObject
{
  Q_OBJECT

  Q_PROPERTY(QByteArray Msg READ msg WRITE sendMsg)


public:

  SpotKernel(QObject *parent);

  QByteArray msg() const;

  void setCrypto (CryptoFront * front);

public slots:

  void sendMsg(QByteArray Msg);

signals:

  void MsgChanged(QByteArray Msg);

private:


  CryptoFront * m_front;
  static QByteArray m_Msg;
};

#endif // SPOTKERNEL_H
