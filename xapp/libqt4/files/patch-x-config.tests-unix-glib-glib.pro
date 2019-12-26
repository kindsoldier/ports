--- ./config.tests/unix/glib/glib.pro.orig	2015-05-07 16:14:42.000000000 +0200
+++ ./config.tests/unix/glib/glib.pro	2019-03-22 13:54:51.660482000 +0200
@@ -1,2 +1,4 @@
 SOURCES = glib.cpp
 CONFIG -= qt
+INCPATH+= /usr/local/include/glib /usr/local/lib/glib/include
+LIBS+= -lglib -lgthread
