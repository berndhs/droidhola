#ifndef SPOTONLIB_H
#define SPOTONLIB_H

#include <QObject>
#include "spot-on-gui-server.h"


class SpotOnLib : public QObject
{
  Q_OBJECT
public:
  SpotOnLib(QObject *parent=nullptr);
  virtual ~SpotOnLib();
  int do_it ();

private:

  spoton_gui_server guiserv;
};

#endif // SPOTONLIB_H
