TEMPLATE = aux
TARGET = KontextProjektRaspberryPi

RESOURCES += KontextProjektRaspberryPi.qrc

QML_FILES += $$files(*.qml,true) \
             $$files(*.js,true)

CONF_FILES +=  KontextProjektRaspberryPi.apparmor \
               KontextProjektRaspberryPi.png

AP_TEST_FILES += tests/autopilot/run \
                 $$files(tests/*.py,true)

OTHER_FILES += $${CONF_FILES} \
               $${QML_FILES} \
               $${AP_TEST_FILES} \
               KontextProjektRaspberryPi.desktop 

#specify where the qml/js files are installed to
qml_files.path = /KontextProjektRaspberryPi
qml_files.files += $${QML_FILES}

#specify where the config files are installed to
config_files.path = /KontextProjektRaspberryPi
config_files.files += $${CONF_FILES}

#install the desktop file, a translated version is automatically created in 
#the build directory
desktop_file.path = /KontextProjektRaspberryPi
desktop_file.files = $$OUT_PWD/KontextProjektRaspberryPi.desktop 
desktop_file.CONFIG += no_check_exist 

INSTALLS+=config_files qml_files desktop_file

