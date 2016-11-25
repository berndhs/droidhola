QT += qml
QT += quick
QT += widgets
QT += sql
QT += network
QT += concurrent
QT += core


CONFIG += c++11

contains(QMAKESPEC,"x86") {
  QMAKE_CC = /usr/bin/clang
  QMAKE_CXX = /usr/bin/clang++
}

message ("qmakespec:")
message ($$QMAKESPEC)
message ("android_ndk_root:")
message ($$ANDROID_NDK_ROOT)
message ("compilers " $$QMAKE_CC " and " $$QMAKE_CXX)

TARGET = holadexe

TEMPLATE = app

OBJECTS_DIR = obj
MOC_DIR = moc
UI_DIR = ui
RCC_DIR = rcc

DEFINES += SPOTON_LINKED_WITH_LIBPTHREAD

#SUBDIRS = \
#  src/gui/droidholagui.pro \
#  src/Kernel/spot-on-kernel.qt5.pro \
QMAKE_TARGET_COPYRIGHT = "(C) 2016 Alexis, Bernd & Schmidtt"
QMAKE_TARGET_PRODUCT = chatchat
QMAKE_TARGET.grmpfl = x86_64
FOO = bar
message ("foo:")
message ($$FOO)
message ("qmake_target:")
message ($$QMAKE_TARGET)
message ("qmake_target.grmpfl:")
message ($$QMAKE_TARGET.grmpfl)
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

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

#LIBS += \
#      -lGeoIP -lntru \
#       -lcrypto -lcurl -lgcrypt -lgpg-error -lntl \
#       -lpq -lspoton -lssl \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS = \
#     src/gbgui/spot-on-adaptive-echo-prompt.ui  \
#     src/gbgui/spot-on-buzzpage.ui  \
#     src/gbgui/spot-on-chatwindow.ui  \
#     src/gbgui/spot-on-controlcenter.ui  \
     src/gbgui/getstring.ui \
#     src/gbgui/spot-on-documentation.ui  \
#     src/gbgui/spot-on-echo-key-share.ui  \
#     src/gbgui/spot-on-encryptfile-page.ui  \
#     src/gbgui/spot-on-encryptfile.ui  \
#     src/gbgui/spot-on-forward-secrecy-algorithms-selection.ui  \
#     src/gbgui/spot-on-ipinformation.ui  \
#     src/gbgui/spot-on-keyboard.ui  \
#     src/gbgui/spot-on-listener-socket-options.ui  \
#     src/gbgui/spot-on-logviewer.ui  \
#     src/gbgui/spot-on-notificationswindow.ui  \
#     src/gbgui/spot-on-options.ui  \
#     src/gbgui/spot-on-pageviewer.ui  \
#     src/gbgui/spot-on-password-prompt.ui  \
#     src/gbgui/spot-on-poptastic-retrophone-settings.ui  \
#     src/gbgui/spot-on-postgresql-connect.ui  \
#     src/gbgui/spot-on-private-application-credentials.ui  \
#     src/gbgui/spot-on-rosetta.ui  \
#     src/gbgui/spot-on-rss.ui  \
#     src/gbgui/spot-on-starbeamanalyzer.ui  \
#     src/gbgui/spot-on-statisticswindow.ui  \
#     src/gbgui/spot-on-statusbar.ui  \
#     src/gbgui/spot-on-unlock.ui  \
#     src/gbgui/spot-on-wizard.ui  \


HEADERS = \
    src/gui/customengine.h \
    src/gui/cryptofront.h \
    src/gui/spotkernel.h \
    src/gui/copyright.h \
    src/gui/chatapplication.h \
    src/gui/programversion.h \
    src/gui/droidhola.h \
    src/gui/textbox.h \
#    src/Kernel/spotonlib.h \
#    src/Common/spot-on-crypt.h \
#    src/Common/spot-on-common.h \
#      src/Common/spot-on-mceliece.h \
#      src/Common/spot-on-crypt-mceliece.h \
#      src/Common/spot-on-crypt-ntru.h \
#    src/Common/spot-on-external-address.h \
#    src/Common/spot-on-mceliece.h \
#    src/Common/spot-on-misc.h \
#    src/Common/spot-on-receive.h \
#      src/Common/spot-on-send.h \
#      src/Common/spot-on-threefish.h \
#      src/Kernel/spot-on-fireshare.h \
#      src/Kernel/spot-on-gui-server.h \
#      src/Kernel/spot-on-kernel.h \
#      src/Kernel/spot-on-listener.h \
#      src/Kernel/spot-on-mailer.h \
#      src/Kernel/spot-on-neighbor.h \
#      src/Kernel/spot-on-sctp-server.h \
#      src/Kernel/spot-on-sctp-socket.h \
#      src/Kernel/spot-on-starbeam-reader.h \
#      src/Kernel/spot-on-starbeam-writer.h \
#      src/Kernel/spot-on-urldistribution.h



SOURCES += \
    src/gui/customengine.cpp \
    src/gui/cryptofront.cpp \
    src/gui/spotkernel.cpp \
    src/gui/copyright.cpp \
    src/gui/chatapplication.cpp \
    src/gui/programversion.cpp \
    src/gui/droidhola.cpp \
    src/gui/textbox.cpp \
#  src/Kernel/spotonlib.cpp \
#    src/Common/spot-on-crypt.cc \
#      src/Common/spot-on-crypt-mceliece.cc \
#      src/Common/spot-on-crypt-ntru.cc \
#      src/Common/spot-on-external-address.cc \
#      src/Common/spot-on-mceliece.cc \
#      src/Common/spot-on-misc.cc \
#      src/Common/spot-on-receive.cc \
#      src/Common/spot-on-send.cc \
#      src/Common/spot-on-threefish.cc \
#      src/Kernel/spot-on-fireshare.cc \
#      src/Kernel/spot-on-gui-server.cc \
#      src/Kernel/spot-on-kernel-a.cc \
#      src/Kernel/spot-on-kernel-b.cc \
#      src/Kernel/spot-on-kernel-c.cc \
#      src/Kernel/spot-on-listener.cc \
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
