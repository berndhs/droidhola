#ifndef BITSDEF_H
#define BITSDEF_H

#ifdef BITS_64
typedef qint64 intptr ;
typedef long long int intword;
#else
typedef qint32 intptr ;
typedef int intword;
#endif

#endif // BITSDEF_H
