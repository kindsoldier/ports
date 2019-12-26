--- ./config.tests/unix/gstreamer/gstreamer.pro.orig	2015-05-07 16:14:42.000000000 +0200
+++ ./config.tests/unix/gstreamer/gstreamer.pro	2019-03-22 13:54:51.664617000 +0200
@@ -1,3 +1,5 @@
 SOURCES = gstreamer.cpp
 CONFIG -= qt
-LIBS += -lgstinterfaces-0.10 -lgstvideo-0.10 -lgstbase-0.10
+INCPATH+= /usr/local/include/gstreamer /usr/local/include/glib 
+INCPATH+= /usr/local/lib/glib/include /usr/local/include/libxml2 /usr/local/include
+LIBS += -lgstinterfaces -lgstvideo -lgstbase
