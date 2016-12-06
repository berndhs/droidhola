#ifndef BITSDEF_H
#define BITSDEF_H

#ifdef BITS_64
typedef qint64 word_int ;
#else
typedef qint32 word_int ;
#endif

#endif // BITSDEF_H
