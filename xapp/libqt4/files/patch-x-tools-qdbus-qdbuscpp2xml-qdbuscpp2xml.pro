--- ./tools/qdbus/qdbuscpp2xml/qdbuscpp2xml.pro.orig	2015-05-07 16:14:40.000000000 +0200
+++ ./tools/qdbus/qdbuscpp2xml/qdbuscpp2xml.pro	2019-03-22 15:29:42.774715000 +0200
@@ -1,6 +1,6 @@
 SOURCES = qdbuscpp2xml.cpp
 DESTDIR = ../../../bin
-TARGET = qdbuscpp2xml
+TARGET = qdbuscpp2xml-qt4
 QT = core xml
 CONFIG += qdbus
 CONFIG -= app_bundle
@@ -8,3 +8,5 @@
 
 target.path=$$[QT_INSTALL_BINS]
 INSTALLS += target
+
+contains(QT_CONFIG, dbus):LIBS += -ldbus
