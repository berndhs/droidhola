#ifndef SPOTKERNEL_H
#define SPOTKERNEL_H

#include <QObject>


class SpotKernel : public QObject
{
  Q_OBJECT

  Q_PROPERTY(QByteArray Msg READ Msg WRITE sendMsg NOTIFY MsgChanged)

  QByteArray m_Msg;

public:

  SpotKernel(QObject *parent);

  QByteArray Msg() const;

public slots:

  void sendMsg(QByteArray Msg);

signals:

  void MsgChanged(QByteArray Msg);
};

#endif // SPOTKERNEL_H
