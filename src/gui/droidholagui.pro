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
