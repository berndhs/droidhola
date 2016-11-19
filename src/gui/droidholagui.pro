QT += qml quick widgets
QT += sql
QT += concurrent

TARGET = holadexe

CONFIG += c++11
QMAKE_CC = clang
QMAKE_CXX = clang++

OBJECTS_DIR = obj/
MOC_DIR = moc/


SOURCES += \
    customengine.cpp \
    cryptofront.cpp \
    spotkernel.cpp \
    copyright.cpp \
    chatapplication.cpp \
    programversion.cpp \
    droidhola.cpp

