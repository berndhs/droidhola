QT += qml quick
TARGET = holadexe

CONFIG += c++11

SOURCES += \
  src/main.cpp \
#    src/threadbody.cpp \
    src/customengine.cpp \
    src/cryptofront.cpp \
    src/spotkernel.cpp \
    src/copyright.cpp \
    src/chatapplication.cpp \
    src/cryptobad.cpp

RESOURCES += qml.qrc

OBJECTS_DIR = obj/
MOC_DIR = moc/

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
#    src/threadbody.h \
    src/customengine.h \
    src/cryptofront.h \
    src/copyright.h \
    src/spotkernel.h \
    src/chatapplication.h \
    src/cryptobad.h

DISTFILES += \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android
