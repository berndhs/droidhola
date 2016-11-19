QT += qml quick widgets
QT += sql
QT += concurrent

TARGET = holadexe

CONFIG += c++11
QMAKE_CC = clang
QMAKE_CXX = clang++

TEMPLATE = subdirs

SUBDIRS = \
  src/gui/droidholagui.pro \
  src/Kernel/spot-on-kernel.qt5.pro \


RESOURCES += qml.qrc

INCLUDEPATH += src
INCLUDEPATH += src/Common
INCLUDEPATH += src/Kernel
INCLUDEPATH += src/libSpotOn

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

LIBS += \
      -lGeoIP -lntru \
       -lcrypto -lcurl -lgcrypt -lgpg-error -lntl \
       -lpq -lspoton -lssl \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


DISTFILES += \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android
