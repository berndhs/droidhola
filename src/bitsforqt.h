#ifndef BITSFORQT_H
#define BITSFORQT_H

#include <QtGlobal>

#if QT_VERSION >= 0x050000
#define FIVE 5
#else
#define FIVE 4
#endif

class BitsForQt
{
public:
  BitsForQt();

  int sock();

  void setSock(qint64 s);

private:
  int five;
  qint64 sockDesc;
};

#endif // BITSFORQT_H
