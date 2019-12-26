--- ./src/dbus/dbus.pro.orig	2015-05-07 16:14:44.000000000 +0200
+++ ./src/dbus/dbus.pro	2019-03-22 13:54:51.777425000 +0200
@@ -8,8 +8,8 @@
 QMAKE_CXXFLAGS += $$QT_CFLAGS_DBUS
 
 isEmpty(QT_LIBS_DBUS) {
-    win32:CONFIG(debug, debug|release):QT_LIBS_DBUS += -ldbus-1d
-    else:QT_LIBS_DBUS += -ldbus-1
+    win32:CONFIG(debug, debug|release):QT_LIBS_DBUS += -ldbus
+    else:QT_LIBS_DBUS += -ldbus
 }
 
 contains(QT_CONFIG, dbus-linked) { 
