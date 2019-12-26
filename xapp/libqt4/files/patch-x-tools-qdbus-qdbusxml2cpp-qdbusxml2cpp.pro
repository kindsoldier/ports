--- ./tools/qdbus/qdbusxml2cpp/qdbusxml2cpp.pro.orig	2015-05-07 16:14:40.000000000 +0200
+++ ./tools/qdbus/qdbusxml2cpp/qdbusxml2cpp.pro	2019-03-22 15:25:41.204247000 +0200
@@ -1,6 +1,6 @@
 SOURCES = qdbusxml2cpp.cpp
 DESTDIR = ../../../bin
-TARGET = qdbusxml2cpp
+TARGET = qdbusxml2cpp-qt4
 QT = core xml
 CONFIG += qdbus
 CONFIG -= app_bundle
@@ -8,3 +8,5 @@
 
 target.path=$$[QT_INSTALL_BINS]
 INSTALLS += target
+
+contains(QT_CONFIG, dbus):LIBS += -ldbus
