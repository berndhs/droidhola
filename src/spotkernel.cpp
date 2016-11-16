#include <QDebug>
#include "spotkernel.h"


SpotKernel::SpotKernel(QObject *parent)
  :QObject (parent)
{

}

QByteArray
SpotKernel::Msg() const
{
  return m_Msg;
}

void
SpotKernel::sendMsg(QByteArray Msg)
{
  qDebug() << Q_FUNC_INFO << Msg;
  if (m_Msg == Msg)
    return;

  m_Msg = Msg;
  emit MsgChanged(Msg);
}
