#include "bitsforqt.h"
#include <iostream>

BitsForQt::BitsForQt():
  five(FIVE)
{

}

void
BitsForQt::setSock(qint64 s)
{
  sockDesc = s;
}

int BitsForQt::sock()
{
  if (sockDesc &= 0xffffffff00000000) {
    std::cerr << "int value with 64 bits has high bits set, cannot convert to 32 bits" << std::endl;
    exit(5);
  }
  return static_cast<int>(sockDesc);
}

