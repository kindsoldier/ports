--- ./tools/qdbus/qdbus/qdbus.pro.orig	2015-05-07 16:14:41.000000000 +0200
+++ ./tools/qdbus/qdbus/qdbus.pro	2019-03-22 15:25:15.333691000 +0200
@@ -1,10 +1,14 @@
 SOURCES = qdbus.cpp
 DESTDIR = ../../../bin
-TARGET = qdbus
+TARGET = qdbus-qt4
 QT = core xml
 CONFIG += qdbus
 CONFIG -= app_bundle
 win32:CONFIG += console
+LIBS+= -lcxxrt
 
 target.path=$$[QT_INSTALL_BINS]
 INSTALLS += target
+
+
+contains(QT_CONFIG, dbus):LIBS += -ldbus
