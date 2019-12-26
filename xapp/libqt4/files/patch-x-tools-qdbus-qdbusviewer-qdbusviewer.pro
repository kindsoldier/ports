--- ./tools/qdbus/qdbusviewer/qdbusviewer.pro.orig	2015-05-07 16:14:40.000000000 +0200
+++ ./tools/qdbus/qdbusviewer/qdbusviewer.pro	2019-03-22 15:32:50.715789000 +0200
@@ -1,5 +1,5 @@
 TEMPLATE        = app
-TARGET          = qdbusviewer
+TARGET          = qdbusviewer-qt4
 
 HEADERS         = qdbusviewer.h \
                   qdbusmodel.h \
@@ -12,6 +12,8 @@
 
 RESOURCES += qdbusviewer.qrc
 
+LIBS += -lcxxrt
+
 DESTDIR = ../../../bin
 
 CONFIG += qdbus
@@ -28,3 +30,7 @@
 win32 {
     RC_FILE = qdbusviewer.rc
 }
+
+contains(QT_CONFIG, dbus):LIBS += -ldbus
+
+
