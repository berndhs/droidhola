include(spot-on-kernel-source.windows.pro)
libntru.target = libntru.dll
libntru.commands = $(MAKE) -C ..\\..\\..\\libNTRU
libntru.depends =
libspoton.target = libspoton.dll
libspoton.commands = $(MAKE) -C ..\\..\\..\\libSpotOn library
libspoton.depends =
purge.commands = del /F *~

TEMPLATE	= app
LANGUAGE	= C++
QT		+= network sql
QT		-= gui
CONFIG		+= qt release warn_on

# The function gcry_kdf_derive() is available in version
# 1.5.0 of the gcrypt library.

DEFINES         += SPOTON_LINKED_WITH_LIBGEOIP \
                   SPOTON_LINKED_WITH_LIBNTRU \
		   SPOTON_LINKED_WITH_LIBPTHREAD \
                   SPOTON_SCTP_ENABLED

# Unfortunately, the clean target assumes too much knowledge
# about the internals of libNTRU and libSpotOn.

QMAKE_CLEAN     += ..\\..\\release\\Spot-On-Kernel \
                   ..\\..\\..\\libNTRU\\libntru.dll \
                   ..\\..\\..\\libNTRU\\src\\*.o \
		   ..\\..\\..\\libNTRU\\src\\*.s \
		   ..\\..\\..\\libSpotOn\\libspoton.dll \
		   ..\\..\\..\\libSpotOn\\*.o ..\\..\\..\\libSpotOn\\test.exe
QMAKE_CXXFLAGS_RELEASE -= -O2
QMAKE_CXXFLAGS_RELEASE += -fwrapv -mtune=generic -pie -O3 \
			  -Wall -Wcast-align -Wcast-qual \
			  -Werror -Wextra \
			  -Woverloaded-virtual -Wpointer-arith \
			  -Wstrict-overflow=5
QMAKE_EXTRA_TARGETS = libntru libspoton purge
INCLUDEPATH	+= . ..\\. ..\\..\\..\\. \
		   ..\\..\\..\\PostgreSQL\\Include.win32 \
		   ..\\..\\..\\libSpotOn\\Include.win32 \
                   ..\\..\\..\\libGeoIP\\Include.win32 \
		   ..\\..\\..\\libOpenSSL\\Include.win32 \
                   ..\\..\\..\\libSCTP\\SctpDrv.win32\\inc \
		   ..\\..\\..\\libcURL\\Win32.d\include
LIBS		+= -L..\\..\\..\\PostgreSQL\\Libraries.win32 \
		   -L..\\..\\..\\libNTRU -L..\\..\\..\\libSpotOn \
		   -L..\\..\\..\\libSpotOn\\Libraries.win32 \
                   -L..\\..\\..\\libGeoIP\\Libraries.win32 \
		   -L..\\..\\..\\libOpenSSL\\Libraries.win32 \
                   -L..\\..\\..\\libSCTP\\SctpDrv.win32\\lib \
		   -L..\\..\\..\\libcURL\\Win32.d\bin \
		   -lGeoIP-1 -leay32 -lgcrypt-20 -lcurl -lgpg-error-0 \
		   -lntru -lpq -lpthread -lsctpsp -lspoton -lssl32 -lws2_32
PRE_TARGETDEPS = libntru.dll libspoton.dll

TARGET		= ..\\..\\release\\Spot-On-Kernel
PROJECTNAME	= Spot-On-Kernel
