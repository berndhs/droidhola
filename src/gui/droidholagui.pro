QT += qml quick widgets
QT += sql
QT += concurrent

TARGET = holadexe

CONFIG += c++11
QMAKE_CC = clang
QMAKE_CXX = clang++

RESOURCES = \
  droidhola.qrc

OBJECTS_DIR = obj/
MOC_DIR = moc/

INCLUDEPATH += ../Kernel/
LIBS += -L$$(HOME)/lib/ -lspot

HEADERS = \
    customengine.h \
    cryptofront.h \
    spotkernel.h \
    copyright.h \
    chatapplication.h \
    programversion.h \
    droidhola.h \
    droidhola.h



SOURCES += \
    customengine.cpp \
    cryptofront.cpp \
    spotkernel.cpp \
    copyright.cpp \
    chatapplication.cpp \
    programversion.cpp \
    droidhola.cpp

