#include "spotonlib.h"
//#include "spot-on-gui-server.h"
#include <QDebug>

SpotOnLib::SpotOnLib(QObject *parent)
  :QObject(parent)/*,
    guiserv(this)*/
{
  qDebug() << Q_FUNC_INFO << " thread" << thread();
}

SpotOnLib::~SpotOnLib()
{

}

int
SpotOnLib::do_it()
{
  qDebug() << Q_FUNC_INFO << "thread " << thread();
  return 42;
}
