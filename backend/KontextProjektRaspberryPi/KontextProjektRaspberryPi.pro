TEMPLATE = lib
TARGET = KontextProjektRaspberryPibackend
QT += qml quick
CONFIG += qt plugin

load(ubuntu-click)

TARGET = $$qtLibraryTarget($$TARGET)

# Input
SOURCES += \
    backend.cpp \
    foodbox.cpp \
    backgroundprocess.cpp \
    weightwatcher.cpp \
    gpiopin.cpp \
    ledlock.cpp \
    scale.cpp \
    gpiobutton.cpp \
    gpiorotaryencoder.cpp \
    gpiopinwatcher.cpp \
    nfcscanner.cpp \
    nfcwatcher.cpp \
    nfcApi/nfc-poll.c \
    nfcApi/utils/mifare.c \
    nfcApi/utils/nfc-emulate-forum-tag4.c \
    nfcApi/utils/nfc-utils.c \
    server.cpp \
    transaction.cpp

HEADERS += \
    backend.h \
    foodbox.h \
    backgroundprocess.h \
    weightwatcher.h \
    gpiopin.h \
    ledlock.h \
    scale.h \
    gpiobutton.h \
    gpiorotaryencoder.h \
    gpiopinwatcher.h \
    nfcscanner.h \
    nfcwatcher.h \
    nfcApi/nfc-poll.h \
    scaleApi/readscale.h \
    nfcApi/utils/nfc-utils.h \
    nfcApi/utils/mifare.h \
    server.h \
    transaction.h

OTHER_FILES = qmldir

!equals(_PRO_FILE_PWD_, $$OUT_PWD) {
    copy_qmldir.target = $$OUT_PWD/qmldir
    copy_qmldir.depends = $$_PRO_FILE_PWD_/qmldir
    copy_qmldir.commands = $(COPY_FILE) \"$$replace(copy_qmldir.depends, /, $$QMAKE_DIR_SEP)\" \"$$replace(copy_qmldir.target, /, $$QMAKE_DIR_SEP)\"
    QMAKE_EXTRA_TARGETS += copy_qmldir
    PRE_TARGETDEPS += $$copy_qmldir.target
}

qmldir.files = qmldir
installPath = $${UBUNTU_CLICK_PLUGIN_PATH}/KontextProjektRaspberryPi
qmldir.path = $$installPath
target.path = $$installPath
INSTALLS += target qmldir
LIBS += -lnfc



