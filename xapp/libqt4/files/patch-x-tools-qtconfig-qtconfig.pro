--- ./tools/qtconfig/qtconfig.pro.orig	2015-05-07 16:14:41.000000000 +0200
+++ ./tools/qtconfig/qtconfig.pro	2019-03-22 15:31:21.335507000 +0200
@@ -6,7 +6,8 @@
 }
 LANGUAGE = C++
 
-contains(QT_CONFIG, gstreamer):LIBS += $$QT_LIBS_GSTREAMER -lgstinterfaces-0.10 -lgstvideo-0.10 -lgstbase-0.10
+contains(QT_CONFIG, dbus):LIBS += -ldbus
+contains(QT_CONFIG, gstreamer):LIBS += $$QT_LIBS_GSTREAMER -lgstinterfaces -lgstvideo -lgstbase
 contains(QT_CONFIG, gstreamer):QMAKE_CXXFLAGS += $$QT_CFLAGS_GSTREAMER
 contains(QT_CONFIG, phonon) {
     QT += phonon
@@ -19,7 +20,7 @@
 RESOURCES    = qtconfig.qrc
 
 PROJECTNAME        = Qt Configuration
-TARGET             = qtconfig
+TARGET             = qtconfig-qt4
 DESTDIR            = ../../bin
 
 target.path=$$[QT_INSTALL_BINS]
