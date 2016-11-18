#ifndef CRYPTOBAD_H
#define CRYPTOBAD_H

#include <exception>

using namespace std;

class CryptoBad : public exception
{
public:
  CryptoBad();
  virtual char* what () {
    return "bad crypto problem";
  }
};

#endif // CRYPTOBAD_H
