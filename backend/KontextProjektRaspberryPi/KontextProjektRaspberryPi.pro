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
    gpiopinwatcher.cpp

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
    gpiopinwatcher.h

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


