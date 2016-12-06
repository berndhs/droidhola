# project file for Souverain secure chat
#


QT += qml
QT += quick
QT += widgets
QT += sql
QT += network
QT += concurrent
QT += core
QT += multimedia
QT += printsupport


CONFIG += c++11

#contains(QMAKESPEC,"x86") {
#  QMAKE_CC = /usr/bin/clang
#  QMAKE_CXX = /usr/bin/clang++
#}

  QMAKE_CC = /usr/bin/gcc
  QMAKE_CXX = /usr/bin/g++

ARCH = $$system(uname -m)
contains(ARCH,"x86_64") {
  DEFINES += BITS_64
  QMAKE_CC = /usr/bin/clang
  QMAKE_CXX = /usr/bin/clang++
} else {
  DEFINES += BITS_32
}

message ("arch is "$$ARCH)

message ("qmakespec:")
message ($$QMAKESPEC)
message ("qt vesion:")
message ($$QT_VERSION)
message ("android_ndk_root:")
message ($$ANDROID_NDK_ROOT)
message ("compilers " $$QMAKE_CC " and " $$QMAKE_CXX)

greaterThan(QT_VERSION,5) {
  DEFINES += QT_IS_5
} else {
  DEFINES += QT_IS_4
}

TARGET = holadexe

TEMPLATE = app

OBJECTS_DIR = obj
MOC_DIR = moc
UI_DIR = ui
RCC_DIR = rcc

DEFINES -= SPOTON_LINKED_WITH_LIBPTHREAD
DEFINES += SPOTON_GOLDBUG=1
DEFINES -= SPOTON_SCTP_ENABLED
DEFINES -= SPOTON_BLUETOOTH_ENABLED \
           SPOTON_LINKED_WITH_LIBGEOIP \
           SPOTON_LINKED_WITH_LIBPTHREAD \
           SPOTON_MCELIECE_ENABLED \
           SPOTON_DOC_ENABLED \

DEFINES += SPOTON_ALL \

#DEFINES += SPOTON_BLUETOOTH_ENABLED \
#           SPOTON_LINKED_WITH_LIBGEOIP \
#           SPOTON_LINKED_WITH_LIBPTHREAD \
#           SPOTON_MCELIECE_ENABLED \
#           SPOTON_SCTP_ENABLED \
##           SPOTON_LINKED_WITH_LIBNTRU \

#SUBDIRS = \
#  src/gui/droidholagui.pro \
#  src/Kernel/spot-on-kernel.qt5.pro \
QMAKE_TARGET_COPYRIGHT = "(C) 2016 Alexis, Bernd & Schmidtt"
QMAKE_TARGET_PRODUCT = chatchat

message ("qmake_target:")
message ($$QMAKE_TARGET)
message ("qmake_target company:")
message ($$QMAKE_TARGET_COMPANY)
message ("qmake_target description:")
message ($$QMAKE_TARGET_DESCRIPTION)
message ("qmake_target copyright:")
message ($$QMAKE_TARGET_COPYRIGHT)
message ("qmake_target product:")
message ($$QMAKE_TARGET_PRODUCT)


RESOURCES += src/gui/droidhola.qrc \
#    src/gui/spoticons.qrc

#INCLUDEPATH += /usr/include/bits
#INCLUDEPATH += /usr/include
#INCLUDEPATH += /usr/local/include/bits
#INCLUDEPATH += /usr/local/include
#INCLUDEPATH += .
#INCLUDEPATH += src
#INCLUDEPATH += src/Common
#INCLUDEPATH += src/Kernel
#INCLUDEPATH += src/libSpotOn

INCLUDEPATH += \
              src/ \
              src/gui/include/ \
              src/Common/ \
              temp/ui/ \
              ui/ \
              libs/ \
              libs/libSpotOn/ \


# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

  LIBS += \
      -lGeoIP \
      -lntru \
      -L/usr/include/ \
      -lssl -lcrypto \
      -lcurl \
      -lgcrypt \
      -lgpg-error \
      -lntl \
       -lpq \
      -lspoton \

message ("LIBS is "$$LIBS)
message("DEFINES is " $$DEFINES)

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS = \
     src/gbgui/spot-on-adaptive-echo-prompt.ui  \
     src/gbgui/spot-on-buzzpage.ui  \
     src/gbgui/spot-on-chatwindow.ui  \
     src/gbgui/spot-on-controlcenter.ui  \
     src/gbgui/getstring.ui \
     src/gbgui/spot-on-adaptive-echo-prompt.ui \
     src/gbgui/spot-on-neighborstatistics.ui  \
     src/gbgui/spot-on-documentation.ui  \
     src/gbgui/spot-on-echo-key-share.ui  \
     src/gbgui/spot-on-encryptfile-page.ui  \
     src/gbgui/spot-on-encryptfile.ui  \
     src/gbgui/spot-on-forward-secrecy-algorithms-selection.ui  \
     src/gbgui/spot-on-ipinformation.ui  \
     src/gbgui/spot-on-keyboard.ui  \
     src/gbgui/spot-on-listener-socket-options.ui  \
     src/gbgui/spot-on-logviewer.ui  \
     src/gbgui/spot-on-notificationswindow.ui  \
     src/gbgui/spot-on-options.ui  \
     src/gbgui/spot-on-pageviewer.ui  \
     src/gbgui/spot-on-password-prompt.ui  \
     src/gbgui/spot-on-poptastic-retrophone-settings.ui  \
     src/gbgui/spot-on-postgresql-connect.ui  \
     src/gbgui/spot-on-private-application-credentials.ui  \
     src/gbgui/spot-on-rosetta.ui  \
     src/gbgui/spot-on-rss.ui  \
     src/gbgui/spot-on-starbeamanalyzer.ui  \
     src/gbgui/spot-on-statisticswindow.ui  \
     src/gbgui/spot-on-statusbar.ui  \
     src/gbgui/spot-on-unlock.ui  \
     src/gbgui/spot-on-wizard.ui  \


HEADERS = \
    src/bitsdef.h \
    src/gui/include/customengine.h \
    src/gui/include/cryptofront.h \
    src/gui/include/spotkernel.h \
    src/gui/include/copyright.h \
    src/gui/include/chatapplication.h \
    src/gui/include/programversion.h \
    src/gui/include/droidhola.h \
    src/gui/include/textbox.h \
    src/gui/include/spot-on-defines.h \
    src/gui/include/spot-on.h \
    src/gui/include/spot-on-encryptfile.h \
    src/gui/include/spot-on-encryptfile-page.h \
    src/gui/include/spot-on-logviewer.h \
src/gui/include/spot-on-reencode.h \
src/gui/include/spot-on-pageviewer.h \
src/gui/include/spot-on-pacify.h \
src/gui/include/spot-on-neighborstatistics.h \
src/gui/include/spot-on-echo-key-share.h \
src/gui/include/spot-on-documentation.h \
src/gui/include/spot-on-defines.h \
src/gui/include/spot-on-chatwindow.h \
src/gui/include/spot-on-buzzpage.h \
src/gui/include/spot-on-textedit.h \
src/gui/include/spot-on-textbrowser.h \
src/gui/include/spot-on-tabwidget.h \
src/gui/include/spot-on-starbeamanalyzer.h \
src/gui/include/spot-on-smp.h \
src/gui/include/spot-on-rss.h \
src/gui/include/spot-on-rosetta.h \
    src/Kernel/spotonlib.h \
    src/Common/spot-on-crypt.h \
    src/Common/spot-on-common.h \
      src/Common/spot-on-mceliece.h \
    src/Common/spot-on-external-address.h \
    src/Common/spot-on-misc.h \
    src/Common/spot-on-receive.h \
      src/Common/spot-on-send.h \
      src/Common/spot-on-threefish.h \
      src/Kernel/spot-on-fireshare.h \
      src/Kernel/spot-on-gui-server.h \
      src/Kernel/spot-on-kernel.h \
      src/Kernel/spot-on-listener.h \
      src/Kernel/spot-on-mailer.h \
      src/Kernel/spot-on-neighbor.h \
#      src/Kernel/spot-on-sctp-server.h \
#      src/Kernel/spot-on-sctp-socket.h \
      src/Kernel/spot-on-starbeam-reader.h \
      src/Kernel/spot-on-starbeam-writer.h \
      src/Kernel/spot-on-urldistribution.h \
    src/bitsdef.h



SOURCES += \
    src/gui/customengine.cpp \
    src/gui/cryptofront.cpp \
    src/gui/spotkernel.cpp \
    src/gui/copyright.cpp \
    src/gui/chatapplication.cpp \
    src/gui/programversion.cpp \
    src/gui/droidhola.cpp \
    src/gui/textbox.cpp \
    src/gui/spot-on-a.cc \
  src/Kernel/spotonlib.cpp \
    src/Common/spot-on-crypt.cc \
    src/gui/spot-on-encryptfile.cc \
    src/gui/spot-on-encryptfile-page.cc \
#    src/gui/spot-on-logviewer.cc \
src/gui/spot-on-d.cc \
#src/gui/spot-on-chatwindow.cc \
src/gui/spot-on-c.cc \
src/gui/spot-on-buzzpage.cc \
src/gui/spot-on-b.cc \
src/gui/spot-on-urls.cc \
#src/gui/spot-on-textedit.cc \
#src/gui/spot-on-textbrowser.cc \
#src/gui/spot-on-tabwidget.cc \
#src/gui/spot-on-starbeamanalyzer.cc \
#src/gui/spot-on-smp.cc \
#src/gui/spot-on-rss.cc \
#src/gui/spot-on-rosetta.cc \
#src/gui/spot-on-reencode.cc \
#src/gui/spot-on-pageviewer.cc \
#src/gui/spot-on-neighborstatistics.cc \
#src/gui/spot-on-logviewer.cc \
src/gui/spot-on-g.cc \
src/gui/spot-on-f.cc \
#src/gui/spot-on-echo-key-share.cc \
src/gui/spot-on-e.cc \
#src/gui/spot-on-documentation.cc \
#src/gui/spot-on-urls-search.cc \
#      src/Common/spot-on-crypt-mceliece.cc \
#      src/Common/spot-on-crypt-ntru.cc \
#      src/Common/spot-on-external-address.cc \
#      src/Common/spot-on-mceliece.cc \
      src/Common/spot-on-misc.cc \
#      src/Common/spot-on-receive.cc \
#      src/Common/spot-on-send.cc \
#      src/Common/spot-on-threefish.cc \
#      src/Kernel/spot-on-fireshare.cc \
#      src/Kernel/spot-on-gui-server.cc \
#      src/Kernel/spot-on-kernel-a.cc \
#      src/Kernel/spot-on-kernel-b.cc \
#      src/Kernel/spot-on-kernel-c.cc \
      src/Kernel/spot-on-listener.cc \
#      src/Kernel/spot-on-mailer.cc \
#      src/Kernel/spot-on-neighbor-a.cc \
#      src/Kernel/spot-on-neighbor-b.cc \
#      src/Kernel/spot-on-sctp-server.cc \
#      src/Kernel/spot-on-sctp-socket.cc \
#      src/Kernel/spot-on-starbeam-reader.cc \
#      src/Kernel/spot-on-starbeam-writer.cc \
#      src/Kernel/spot-on-urldistribution.cc \




DISTFILES += \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android
