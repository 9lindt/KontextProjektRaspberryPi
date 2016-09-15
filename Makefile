#############################################################################
# Makefile for building: KontextProjektRaspberryPi
# Generated by qmake (3.0) (Qt 5.5.1)
# Project:  KontextProjektRaspberryPi.pro
# Template: subdirs
# Command: /usr/lib/x86_64-linux-gnu/qt5/bin/qmake -o Makefile KontextProjektRaspberryPi.pro
#############################################################################

MAKEFILE      = Makefile

first: make_first
QMAKE         = /usr/lib/x86_64-linux-gnu/qt5/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = KontextProjektRaspberryPi1.0.0
DISTDIR = /home/paul/Projekte/KontextProjektRaspberryPi/.tmp/KontextProjektRaspberryPi1.0.0
SUBTARGETS    =  \
		sub-KontextProjektRaspberryPi \
		sub-backend-KontextProjektRaspberryPi


sub-KontextProjektRaspberryPi-qmake_all:  FORCE
	@test -d KontextProjektRaspberryPi/ || mkdir -p KontextProjektRaspberryPi/
	cd KontextProjektRaspberryPi/ && $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile
	cd KontextProjektRaspberryPi/ && $(MAKE) -f Makefile qmake_all
sub-KontextProjektRaspberryPi: FORCE
	@test -d KontextProjektRaspberryPi/ || mkdir -p KontextProjektRaspberryPi/
	cd KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile
sub-KontextProjektRaspberryPi-make_first: FORCE
	@test -d KontextProjektRaspberryPi/ || mkdir -p KontextProjektRaspberryPi/
	cd KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile 
sub-KontextProjektRaspberryPi-all: FORCE
	@test -d KontextProjektRaspberryPi/ || mkdir -p KontextProjektRaspberryPi/
	cd KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile all
sub-KontextProjektRaspberryPi-clean: FORCE
	@test -d KontextProjektRaspberryPi/ || mkdir -p KontextProjektRaspberryPi/
	cd KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile clean
sub-KontextProjektRaspberryPi-distclean: FORCE
	@test -d KontextProjektRaspberryPi/ || mkdir -p KontextProjektRaspberryPi/
	cd KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile distclean
sub-KontextProjektRaspberryPi-install_subtargets: FORCE
	@test -d KontextProjektRaspberryPi/ || mkdir -p KontextProjektRaspberryPi/
	cd KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile install
sub-KontextProjektRaspberryPi-uninstall_subtargets: FORCE
	@test -d KontextProjektRaspberryPi/ || mkdir -p KontextProjektRaspberryPi/
	cd KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile uninstall
sub-backend-KontextProjektRaspberryPi-qmake_all:  FORCE
	@test -d backend/KontextProjektRaspberryPi/ || mkdir -p backend/KontextProjektRaspberryPi/
	cd backend/KontextProjektRaspberryPi/ && $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/backend/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile
	cd backend/KontextProjektRaspberryPi/ && $(MAKE) -f Makefile qmake_all
sub-backend-KontextProjektRaspberryPi: FORCE
	@test -d backend/KontextProjektRaspberryPi/ || mkdir -p backend/KontextProjektRaspberryPi/
	cd backend/KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/backend/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile
sub-backend-KontextProjektRaspberryPi-make_first: FORCE
	@test -d backend/KontextProjektRaspberryPi/ || mkdir -p backend/KontextProjektRaspberryPi/
	cd backend/KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/backend/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile 
sub-backend-KontextProjektRaspberryPi-all: FORCE
	@test -d backend/KontextProjektRaspberryPi/ || mkdir -p backend/KontextProjektRaspberryPi/
	cd backend/KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/backend/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile all
sub-backend-KontextProjektRaspberryPi-clean: FORCE
	@test -d backend/KontextProjektRaspberryPi/ || mkdir -p backend/KontextProjektRaspberryPi/
	cd backend/KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/backend/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile clean
sub-backend-KontextProjektRaspberryPi-distclean: FORCE
	@test -d backend/KontextProjektRaspberryPi/ || mkdir -p backend/KontextProjektRaspberryPi/
	cd backend/KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/backend/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile distclean
sub-backend-KontextProjektRaspberryPi-install_subtargets: FORCE
	@test -d backend/KontextProjektRaspberryPi/ || mkdir -p backend/KontextProjektRaspberryPi/
	cd backend/KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/backend/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile install
sub-backend-KontextProjektRaspberryPi-uninstall_subtargets: FORCE
	@test -d backend/KontextProjektRaspberryPi/ || mkdir -p backend/KontextProjektRaspberryPi/
	cd backend/KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/backend/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile uninstall

Makefile: KontextProjektRaspberryPi.pro /usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dcollision.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dcore.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dinput.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dlogic.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquick.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickrenderer.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3drenderer.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_contacts.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_designer.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_help.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_location.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_multimedia.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_organizer.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_positioning.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quick.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quickwidgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sensors.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_svg.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_uiplugin.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_uitools.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_versit.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_versitorganizer.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_websockets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf \
		KontextProjektRaspberryPi.pro
	$(QMAKE) -o Makefile KontextProjektRaspberryPi.pro
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dcollision.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dcore.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dinput.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dlogic.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquick.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickrenderer.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3drenderer.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_contacts.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_designer.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_help.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_location.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_multimedia.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_multimediawidgets.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_organizer.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_positioning.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qml.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qmltest.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quick.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quickwidgets.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sensors.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_svg.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_uiplugin.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_uitools.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_versit.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_versitorganizer.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_websockets.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xmlpatterns.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf:
KontextProjektRaspberryPi.pro:
qmake: FORCE
	@$(QMAKE) -o Makefile KontextProjektRaspberryPi.pro

qmake_all: sub-KontextProjektRaspberryPi-qmake_all sub-backend-KontextProjektRaspberryPi-qmake_all FORCE

make_first: sub-KontextProjektRaspberryPi-make_first sub-backend-KontextProjektRaspberryPi-make_first  FORCE
all: sub-KontextProjektRaspberryPi-all sub-backend-KontextProjektRaspberryPi-all  FORCE
clean: sub-KontextProjektRaspberryPi-clean sub-backend-KontextProjektRaspberryPi-clean  FORCE
distclean: sub-KontextProjektRaspberryPi-distclean sub-backend-KontextProjektRaspberryPi-distclean  FORCE
	-$(DEL_FILE) Makefile
install_subtargets: sub-KontextProjektRaspberryPi-install_subtargets sub-backend-KontextProjektRaspberryPi-install_subtargets FORCE
uninstall_subtargets: sub-KontextProjektRaspberryPi-uninstall_subtargets sub-backend-KontextProjektRaspberryPi-uninstall_subtargets FORCE

autopilot: sub-KontextProjektRaspberryPi sub-backend-App
	QML2_IMPORT_PATH=/home/paul/Projekte/KontextProjektRaspberryPi/backend bash /home/paul/Projekte/KontextProjektRaspberryPi/KontextProjektRaspberryPi/tests/autopilot/run

check: sub-KontextProjektRaspberryPi sub-backend-App
	/usr/bin/qmltestrunner -input /home/paul/Projekte/KontextProjektRaspberryPi/backend/tests/unit -import /home/paul/Projekte/KontextProjektRaspberryPi/backend && /usr/bin/qmltestrunner -input /home/paul/Projekte/KontextProjektRaspberryPi/KontextProjektRaspberryPi/tests/unit -import /home/paul/Projekte/KontextProjektRaspberryPi/backend

sub-KontextProjektRaspberryPi-check:
	@test -d KontextProjektRaspberryPi/ || mkdir -p KontextProjektRaspberryPi/
	cd KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile check
sub-backend-KontextProjektRaspberryPi-check:
	@test -d backend/KontextProjektRaspberryPi/ || mkdir -p backend/KontextProjektRaspberryPi/
	cd backend/KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/backend/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -f Makefile check
check: sub-KontextProjektRaspberryPi-check sub-backend-KontextProjektRaspberryPi-check
install:install_subtargets  FORCE

uninstall: uninstall_subtargets FORCE

FORCE:

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: sub-KontextProjektRaspberryPi-distdir sub-backend-KontextProjektRaspberryPi-distdir FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dcollision.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dcore.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dinput.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dlogic.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquick.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickrenderer.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3drenderer.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_contacts.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_designer.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_help.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_location.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_multimedia.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_multimediawidgets.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_organizer.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_positioning.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qml.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qmltest.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quick.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quickwidgets.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sensors.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_svg.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_uiplugin.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_uitools.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_versit.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_versitorganizer.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_websockets.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xmlpatterns.pri /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf KontextProjektRaspberryPi.pro $(DISTDIR)/

sub-KontextProjektRaspberryPi-distdir: FORCE
	@test -d KontextProjektRaspberryPi/ || mkdir -p KontextProjektRaspberryPi/
	cd KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -e -f Makefile distdir DISTDIR=$(DISTDIR)/KontextProjektRaspberryPi

sub-backend-KontextProjektRaspberryPi-distdir: FORCE
	@test -d backend/KontextProjektRaspberryPi/ || mkdir -p backend/KontextProjektRaspberryPi/
	cd backend/KontextProjektRaspberryPi/ && ( test -e Makefile || $(QMAKE) /home/paul/Projekte/KontextProjektRaspberryPi/backend/KontextProjektRaspberryPi/KontextProjektRaspberryPi.pro -o Makefile ) && $(MAKE) -e -f Makefile distdir DISTDIR=$(DISTDIR)/backend/KontextProjektRaspberryPi

