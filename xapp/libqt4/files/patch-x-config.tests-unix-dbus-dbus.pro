--- ./config.tests/unix/dbus/dbus.pro.orig	2015-05-07 16:14:42.000000000 +0200
+++ ./config.tests/unix/dbus/dbus.pro	2019-03-22 13:54:51.655341000 +0200
@@ -1,3 +1,6 @@
 SOURCES = dbus.cpp
 CONFIG -= qt
+INCPATH+= /usr/local/include/dbus/include
+INCPATH+= /usr/local/include/dbus
+LIBS+= -ldbus
 mac:CONFIG -= app_bundle
