--- ./config.tests/unix/iconv/iconv.pro.orig	2015-05-07 16:14:42.000000000 +0200
+++ ./config.tests/unix/iconv/iconv.pro	2019-12-22 22:36:12.485736000 +0200
@@ -1,3 +1,3 @@
 SOURCES = iconv.cpp
 CONFIG -= qt dylib app_bundle
-mac|win32-g++*|qnx:LIBS += -liconv
+freebsd*|mac|win32-g++*|qnx:LIBS += -liconv
