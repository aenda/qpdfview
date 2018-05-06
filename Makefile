#############################################################################
# Makefile for building: qpdfview
# Generated by qmake (3.1) (Qt 5.10.1)
# Project:  qpdfview.pro
# Template: subdirs
# Command: /usr/bin/qmake -o Makefile qpdfview.pro CONFIG+=with_lto
#############################################################################

MAKEFILE      = Makefile

first: make_first
QMAKE         = /usr/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
QINSTALL      = /usr/bin/qmake -install qinstall
QINSTALL_PROGRAM = /usr/bin/qmake -install qinstall -exe
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = qpdfview1.0.0
DISTDIR = /home/gmend/qpdfview/.tmp/qpdfview1.0.0
SUBTARGETS    =  \
		sub-pdf-plugin-pro \
		sub-ps-plugin-pro \
		sub-djvu-plugin-pro \
		sub-image-plugin-pro \
		sub-application-pro


sub-pdf-plugin-pro-qmake_all:  FORCE
	$(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto
	$(MAKE) -f Makefile.pdf-plugin qmake_all
sub-pdf-plugin-pro: FORCE
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin
sub-pdf-plugin-pro-make_first-ordered: FORCE
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin 
sub-pdf-plugin-pro-make_first: FORCE
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin 
sub-pdf-plugin-pro-all-ordered: FORCE
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin all
sub-pdf-plugin-pro-all: FORCE
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin all
sub-pdf-plugin-pro-clean-ordered: FORCE
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin clean
sub-pdf-plugin-pro-clean: FORCE
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin clean
sub-pdf-plugin-pro-distclean-ordered: FORCE
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin distclean
sub-pdf-plugin-pro-distclean: FORCE
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin distclean
sub-pdf-plugin-pro-install_subtargets-ordered: FORCE
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin install
sub-pdf-plugin-pro-install_subtargets: FORCE
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin install
sub-pdf-plugin-pro-uninstall_subtargets-ordered: FORCE
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin uninstall
sub-pdf-plugin-pro-uninstall_subtargets: FORCE
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin uninstall
sub-ps-plugin-pro-qmake_all: sub-pdf-plugin-pro-qmake_all FORCE
	$(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto
	$(MAKE) -f Makefile.ps-plugin qmake_all
sub-ps-plugin-pro: FORCE
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin
sub-ps-plugin-pro-make_first-ordered: sub-pdf-plugin-pro-make_first-ordered  FORCE
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin 
sub-ps-plugin-pro-make_first: FORCE
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin 
sub-ps-plugin-pro-all-ordered: sub-pdf-plugin-pro-all-ordered  FORCE
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin all
sub-ps-plugin-pro-all: FORCE
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin all
sub-ps-plugin-pro-clean-ordered: sub-pdf-plugin-pro-clean-ordered  FORCE
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin clean
sub-ps-plugin-pro-clean: FORCE
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin clean
sub-ps-plugin-pro-distclean-ordered: sub-pdf-plugin-pro-distclean-ordered  FORCE
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin distclean
sub-ps-plugin-pro-distclean: FORCE
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin distclean
sub-ps-plugin-pro-install_subtargets-ordered: sub-pdf-plugin-pro-install_subtargets-ordered  FORCE
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin install
sub-ps-plugin-pro-install_subtargets: FORCE
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin install
sub-ps-plugin-pro-uninstall_subtargets-ordered: sub-pdf-plugin-pro-uninstall_subtargets-ordered  FORCE
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin uninstall
sub-ps-plugin-pro-uninstall_subtargets: FORCE
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin uninstall
sub-djvu-plugin-pro-qmake_all: sub-ps-plugin-pro-qmake_all FORCE
	$(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto
	$(MAKE) -f Makefile.djvu-plugin qmake_all
sub-djvu-plugin-pro: FORCE
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin
sub-djvu-plugin-pro-make_first-ordered: sub-ps-plugin-pro-make_first-ordered  FORCE
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin 
sub-djvu-plugin-pro-make_first: FORCE
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin 
sub-djvu-plugin-pro-all-ordered: sub-ps-plugin-pro-all-ordered  FORCE
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin all
sub-djvu-plugin-pro-all: FORCE
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin all
sub-djvu-plugin-pro-clean-ordered: sub-ps-plugin-pro-clean-ordered  FORCE
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin clean
sub-djvu-plugin-pro-clean: FORCE
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin clean
sub-djvu-plugin-pro-distclean-ordered: sub-ps-plugin-pro-distclean-ordered  FORCE
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin distclean
sub-djvu-plugin-pro-distclean: FORCE
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin distclean
sub-djvu-plugin-pro-install_subtargets-ordered: sub-ps-plugin-pro-install_subtargets-ordered  FORCE
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin install
sub-djvu-plugin-pro-install_subtargets: FORCE
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin install
sub-djvu-plugin-pro-uninstall_subtargets-ordered: sub-ps-plugin-pro-uninstall_subtargets-ordered  FORCE
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin uninstall
sub-djvu-plugin-pro-uninstall_subtargets: FORCE
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin uninstall
sub-image-plugin-pro-qmake_all: sub-djvu-plugin-pro-qmake_all FORCE
	$(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto
	$(MAKE) -f Makefile.image-plugin qmake_all
sub-image-plugin-pro: FORCE
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin
sub-image-plugin-pro-make_first-ordered: sub-djvu-plugin-pro-make_first-ordered  FORCE
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin 
sub-image-plugin-pro-make_first: FORCE
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin 
sub-image-plugin-pro-all-ordered: sub-djvu-plugin-pro-all-ordered  FORCE
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin all
sub-image-plugin-pro-all: FORCE
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin all
sub-image-plugin-pro-clean-ordered: sub-djvu-plugin-pro-clean-ordered  FORCE
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin clean
sub-image-plugin-pro-clean: FORCE
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin clean
sub-image-plugin-pro-distclean-ordered: sub-djvu-plugin-pro-distclean-ordered  FORCE
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin distclean
sub-image-plugin-pro-distclean: FORCE
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin distclean
sub-image-plugin-pro-install_subtargets-ordered: sub-djvu-plugin-pro-install_subtargets-ordered  FORCE
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin install
sub-image-plugin-pro-install_subtargets: FORCE
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin install
sub-image-plugin-pro-uninstall_subtargets-ordered: sub-djvu-plugin-pro-uninstall_subtargets-ordered  FORCE
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin uninstall
sub-image-plugin-pro-uninstall_subtargets: FORCE
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin uninstall
sub-application-pro-qmake_all: sub-image-plugin-pro-qmake_all FORCE
	$(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto
	$(MAKE) -f Makefile.application qmake_all
sub-application-pro: FORCE
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application
sub-application-pro-make_first-ordered: sub-image-plugin-pro-make_first-ordered  FORCE
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application 
sub-application-pro-make_first: FORCE
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application 
sub-application-pro-all-ordered: sub-image-plugin-pro-all-ordered  FORCE
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application all
sub-application-pro-all: FORCE
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application all
sub-application-pro-clean-ordered: sub-image-plugin-pro-clean-ordered  FORCE
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application clean
sub-application-pro-clean: FORCE
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application clean
sub-application-pro-distclean-ordered: sub-image-plugin-pro-distclean-ordered  FORCE
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application distclean
sub-application-pro-distclean: FORCE
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application distclean
sub-application-pro-install_subtargets-ordered: sub-image-plugin-pro-install_subtargets-ordered  FORCE
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application install
sub-application-pro-install_subtargets: FORCE
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application install
sub-application-pro-uninstall_subtargets-ordered: sub-image-plugin-pro-uninstall_subtargets-ordered  FORCE
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application uninstall
sub-application-pro-uninstall_subtargets: FORCE
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application uninstall

Makefile: qpdfview.pro /usr/lib/qt/mkspecs/linux-g++/qmake.conf /usr/lib/qt/mkspecs/features/spec_pre.prf \
		/usr/lib/qt/mkspecs/common/unix.conf \
		/usr/lib/qt/mkspecs/common/linux.conf \
		/usr/lib/qt/mkspecs/common/sanitize.conf \
		/usr/lib/qt/mkspecs/common/gcc-base.conf \
		/usr/lib/qt/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/qt/mkspecs/common/g++-base.conf \
		/usr/lib/qt/mkspecs/common/g++-unix.conf \
		/usr/lib/qt/mkspecs/qconfig.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_designer.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_designer_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_edid_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_egl_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_fb_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_glx_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_help.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_help_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_input_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_kms_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_service_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_svg.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_svg_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_theme_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_uiplugin.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_uitools.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_uitools_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_vulkan_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_x11extras.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_x11extras_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/qt/mkspecs/features/qt_functions.prf \
		/usr/lib/qt/mkspecs/features/qt_config.prf \
		/usr/lib/qt/mkspecs/linux-g++/qmake.conf \
		/usr/lib/qt/mkspecs/features/spec_post.prf \
		.qmake.stash \
		/usr/lib/qt/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt/mkspecs/features/toolchain.prf \
		/usr/lib/qt/mkspecs/features/default_pre.prf \
		qpdfview.pri \
		/usr/lib/qt/mkspecs/features/resolve_config.prf \
		/usr/lib/qt/mkspecs/features/default_post.prf \
		/usr/lib/qt/mkspecs/features/warn_on.prf \
		/usr/lib/qt/mkspecs/features/qmake_use.prf \
		/usr/lib/qt/mkspecs/features/file_copies.prf \
		/usr/lib/qt/mkspecs/features/testcase_targets.prf \
		/usr/lib/qt/mkspecs/features/exceptions.prf \
		/usr/lib/qt/mkspecs/features/yacc.prf \
		/usr/lib/qt/mkspecs/features/lex.prf \
		qpdfview.pro
	$(QMAKE) -o Makefile qpdfview.pro CONFIG+=with_lto
/usr/lib/qt/mkspecs/features/spec_pre.prf:
/usr/lib/qt/mkspecs/common/unix.conf:
/usr/lib/qt/mkspecs/common/linux.conf:
/usr/lib/qt/mkspecs/common/sanitize.conf:
/usr/lib/qt/mkspecs/common/gcc-base.conf:
/usr/lib/qt/mkspecs/common/gcc-base-unix.conf:
/usr/lib/qt/mkspecs/common/g++-base.conf:
/usr/lib/qt/mkspecs/common/g++-unix.conf:
/usr/lib/qt/mkspecs/qconfig.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_accessibility_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_bootstrap_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_core.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_designer.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_designer_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_designercomponents_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_edid_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_egl_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_fb_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_glx_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_gui.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_help.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_help_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_input_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_kms_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_network.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_service_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_sql.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_svg.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_svg_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_theme_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_uiplugin.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_uitools.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_uitools_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_vulkan_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_x11extras.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_x11extras_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_xml.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib/qt/mkspecs/features/qt_functions.prf:
/usr/lib/qt/mkspecs/features/qt_config.prf:
/usr/lib/qt/mkspecs/linux-g++/qmake.conf:
/usr/lib/qt/mkspecs/features/spec_post.prf:
.qmake.stash:
/usr/lib/qt/mkspecs/features/exclusive_builds.prf:
/usr/lib/qt/mkspecs/features/toolchain.prf:
/usr/lib/qt/mkspecs/features/default_pre.prf:
qpdfview.pri:
/usr/lib/qt/mkspecs/features/resolve_config.prf:
/usr/lib/qt/mkspecs/features/default_post.prf:
/usr/lib/qt/mkspecs/features/warn_on.prf:
/usr/lib/qt/mkspecs/features/qmake_use.prf:
/usr/lib/qt/mkspecs/features/file_copies.prf:
/usr/lib/qt/mkspecs/features/testcase_targets.prf:
/usr/lib/qt/mkspecs/features/exceptions.prf:
/usr/lib/qt/mkspecs/features/yacc.prf:
/usr/lib/qt/mkspecs/features/lex.prf:
qpdfview.pro:
qmake: FORCE
	@$(QMAKE) -o Makefile qpdfview.pro CONFIG+=with_lto

qmake_all: sub-pdf-plugin-pro-qmake_all sub-ps-plugin-pro-qmake_all sub-djvu-plugin-pro-qmake_all sub-image-plugin-pro-qmake_all sub-application-pro-qmake_all FORCE

make_first: sub-pdf-plugin-pro-make_first-ordered sub-ps-plugin-pro-make_first-ordered sub-djvu-plugin-pro-make_first-ordered sub-image-plugin-pro-make_first-ordered sub-application-pro-make_first-ordered  FORCE
all: sub-pdf-plugin-pro-all-ordered sub-ps-plugin-pro-all-ordered sub-djvu-plugin-pro-all-ordered sub-image-plugin-pro-all-ordered sub-application-pro-all-ordered  FORCE
clean: sub-pdf-plugin-pro-clean-ordered sub-ps-plugin-pro-clean-ordered sub-djvu-plugin-pro-clean-ordered sub-image-plugin-pro-clean-ordered sub-application-pro-clean-ordered  FORCE
distclean: sub-pdf-plugin-pro-distclean-ordered sub-ps-plugin-pro-distclean-ordered sub-djvu-plugin-pro-distclean-ordered sub-image-plugin-pro-distclean-ordered sub-application-pro-distclean-ordered  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash
install_subtargets: sub-pdf-plugin-pro-install_subtargets-ordered sub-ps-plugin-pro-install_subtargets-ordered sub-djvu-plugin-pro-install_subtargets-ordered sub-image-plugin-pro-install_subtargets-ordered sub-application-pro-install_subtargets-ordered FORCE
uninstall_subtargets: sub-pdf-plugin-pro-uninstall_subtargets-ordered sub-ps-plugin-pro-uninstall_subtargets-ordered sub-djvu-plugin-pro-uninstall_subtargets-ordered sub-image-plugin-pro-uninstall_subtargets-ordered sub-application-pro-uninstall_subtargets-ordered FORCE

sub-pdf-plugin-pro-check_ordered:
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin check
sub-ps-plugin-pro-check_ordered: sub-pdf-plugin-pro-check_ordered 
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin check
sub-djvu-plugin-pro-check_ordered: sub-ps-plugin-pro-check_ordered 
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin check
sub-image-plugin-pro-check_ordered: sub-djvu-plugin-pro-check_ordered 
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin check
sub-application-pro-check_ordered: sub-image-plugin-pro-check_ordered 
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application check
check: sub-pdf-plugin-pro-check_ordered sub-ps-plugin-pro-check_ordered sub-djvu-plugin-pro-check_ordered sub-image-plugin-pro-check_ordered sub-application-pro-check_ordered

sub-pdf-plugin-pro-benchmark_ordered:
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.pdf-plugin benchmark
sub-ps-plugin-pro-benchmark_ordered: sub-pdf-plugin-pro-benchmark_ordered 
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.ps-plugin benchmark
sub-djvu-plugin-pro-benchmark_ordered: sub-ps-plugin-pro-benchmark_ordered 
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.djvu-plugin benchmark
sub-image-plugin-pro-benchmark_ordered: sub-djvu-plugin-pro-benchmark_ordered 
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.image-plugin benchmark
sub-application-pro-benchmark_ordered: sub-image-plugin-pro-benchmark_ordered 
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -f Makefile.application benchmark
benchmark: sub-pdf-plugin-pro-benchmark_ordered sub-ps-plugin-pro-benchmark_ordered sub-djvu-plugin-pro-benchmark_ordered sub-image-plugin-pro-benchmark_ordered sub-application-pro-benchmark_ordered
install:install_subtargets  FORCE

uninstall: uninstall_subtargets FORCE

FORCE:

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: sub-pdf-plugin-pro-distdir sub-ps-plugin-pro-distdir sub-djvu-plugin-pro-distdir sub-image-plugin-pro-distdir sub-application-pro-distdir FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents /usr/lib/qt/mkspecs/features/spec_pre.prf /usr/lib/qt/mkspecs/common/unix.conf /usr/lib/qt/mkspecs/common/linux.conf /usr/lib/qt/mkspecs/common/sanitize.conf /usr/lib/qt/mkspecs/common/gcc-base.conf /usr/lib/qt/mkspecs/common/gcc-base-unix.conf /usr/lib/qt/mkspecs/common/g++-base.conf /usr/lib/qt/mkspecs/common/g++-unix.conf /usr/lib/qt/mkspecs/qconfig.pri /usr/lib/qt/mkspecs/modules/qt_lib_accessibility_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_bootstrap_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_concurrent.pri /usr/lib/qt/mkspecs/modules/qt_lib_concurrent_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_core.pri /usr/lib/qt/mkspecs/modules/qt_lib_core_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_dbus.pri /usr/lib/qt/mkspecs/modules/qt_lib_dbus_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_designer.pri /usr/lib/qt/mkspecs/modules/qt_lib_designer_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_designercomponents_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_devicediscovery_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_edid_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_egl_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_fb_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_fontdatabase_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_glx_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_gui.pri /usr/lib/qt/mkspecs/modules/qt_lib_gui_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_help.pri /usr/lib/qt/mkspecs/modules/qt_lib_help_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_input_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_kms_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_network.pri /usr/lib/qt/mkspecs/modules/qt_lib_network_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_opengl.pri /usr/lib/qt/mkspecs/modules/qt_lib_opengl_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_openglextensions.pri /usr/lib/qt/mkspecs/modules/qt_lib_openglextensions_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_platformcompositor_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_printsupport.pri /usr/lib/qt/mkspecs/modules/qt_lib_printsupport_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_service_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_sql.pri /usr/lib/qt/mkspecs/modules/qt_lib_sql_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_svg.pri /usr/lib/qt/mkspecs/modules/qt_lib_svg_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_testlib.pri /usr/lib/qt/mkspecs/modules/qt_lib_testlib_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_theme_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_uiplugin.pri /usr/lib/qt/mkspecs/modules/qt_lib_uitools.pri /usr/lib/qt/mkspecs/modules/qt_lib_uitools_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_vulkan_support_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_widgets.pri /usr/lib/qt/mkspecs/modules/qt_lib_widgets_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_x11extras.pri /usr/lib/qt/mkspecs/modules/qt_lib_x11extras_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri /usr/lib/qt/mkspecs/modules/qt_lib_xml.pri /usr/lib/qt/mkspecs/modules/qt_lib_xml_private.pri /usr/lib/qt/mkspecs/features/qt_functions.prf /usr/lib/qt/mkspecs/features/qt_config.prf /usr/lib/qt/mkspecs/linux-g++/qmake.conf /usr/lib/qt/mkspecs/features/spec_post.prf .qmake.stash /usr/lib/qt/mkspecs/features/exclusive_builds.prf /usr/lib/qt/mkspecs/features/toolchain.prf /usr/lib/qt/mkspecs/features/default_pre.prf qpdfview.pri /usr/lib/qt/mkspecs/features/resolve_config.prf /usr/lib/qt/mkspecs/features/default_post.prf /usr/lib/qt/mkspecs/features/warn_on.prf /usr/lib/qt/mkspecs/features/qmake_use.prf /usr/lib/qt/mkspecs/features/file_copies.prf /usr/lib/qt/mkspecs/features/testcase_targets.prf /usr/lib/qt/mkspecs/features/exceptions.prf /usr/lib/qt/mkspecs/features/yacc.prf /usr/lib/qt/mkspecs/features/lex.prf qpdfview.pro $(DISTDIR)/

sub-pdf-plugin-pro-distdir: FORCE
	( test -e Makefile.pdf-plugin || $(QMAKE) -o Makefile.pdf-plugin /home/gmend/qpdfview/pdf-plugin.pro CONFIG+=with_lto ) && $(MAKE) -e -f Makefile.pdf-plugin distdir DISTDIR=$(DISTDIR)/

sub-ps-plugin-pro-distdir: FORCE
	( test -e Makefile.ps-plugin || $(QMAKE) -o Makefile.ps-plugin /home/gmend/qpdfview/ps-plugin.pro CONFIG+=with_lto ) && $(MAKE) -e -f Makefile.ps-plugin distdir DISTDIR=$(DISTDIR)/

sub-djvu-plugin-pro-distdir: FORCE
	( test -e Makefile.djvu-plugin || $(QMAKE) -o Makefile.djvu-plugin /home/gmend/qpdfview/djvu-plugin.pro CONFIG+=with_lto ) && $(MAKE) -e -f Makefile.djvu-plugin distdir DISTDIR=$(DISTDIR)/

sub-image-plugin-pro-distdir: FORCE
	( test -e Makefile.image-plugin || $(QMAKE) -o Makefile.image-plugin /home/gmend/qpdfview/image-plugin.pro CONFIG+=with_lto ) && $(MAKE) -e -f Makefile.image-plugin distdir DISTDIR=$(DISTDIR)/

sub-application-pro-distdir: FORCE
	( test -e Makefile.application || $(QMAKE) -o Makefile.application /home/gmend/qpdfview/application.pro CONFIG+=with_lto ) && $(MAKE) -e -f Makefile.application distdir DISTDIR=$(DISTDIR)/

