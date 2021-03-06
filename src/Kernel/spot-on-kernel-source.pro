QT += widgets
QT += sql
QT += network
QT += concurrent
QT += core


CONFIG += c++11
QMAKE_CC = clang
QMAKE_CXX = clang++




HEADERS		+= \
  spotonlib.h \
    ../Common/spot-on-crypt.cc \
      ../Common/spot-on-crypt-mceliece.h \
      ../Common/spot-on-crypt-ntru.h \
    ../Common/spot-on-external-address.h \
    ../Common/spot-on-mceliece.h \
    ../Common/spot-on-misc.h \
    ../Common/spot-on-receive.h \
      ../Common/spot-on-send.h \
      ../Common/spot-on-threefish.h \
      spot-on-fireshare.h \
      spot-on-gui-server.h \
      spot-on-kernel.h \
      spot-on-listener.h \
      spot-on-mailer.h \
      spot-on-neighbor.h \
      spot-on-sctp-server.h \
      spot-on-sctp-socket.h \
      spot-on-starbeam-reader.h \
      spot-on-starbeam-writer.h \
      spot-on-urldistribution.h

SOURCES		+= \
  spotonlib.cpp \
    ../Common/spot-on-crypt.cc \
      ../Common/spot-on-crypt-mceliece.cc \
      ../Common/spot-on-crypt-ntru.cc \
      ../Common/spot-on-external-address.cc \
      ../Common/spot-on-mceliece.cc \
      ../Common/spot-on-misc.cc \
      ../Common/spot-on-receive.cc \
      ../Common/spot-on-send.cc \
      ../Common/spot-on-threefish.cc \
      spot-on-fireshare.cc \
      spot-on-gui-server.cc \
      spot-on-kernel-a.cc \
      spot-on-kernel-b.cc \
      spot-on-kernel-c.cc \
      spot-on-listener.cc \
      spot-on-mailer.cc \
      spot-on-neighbor-a.cc \
      spot-on-neighbor-b.cc \
      spot-on-sctp-server.cc \
      spot-on-sctp-socket.cc \
      spot-on-starbeam-reader.cc \
      spot-on-starbeam-writer.cc \
      spot-on-urldistribution.cc


