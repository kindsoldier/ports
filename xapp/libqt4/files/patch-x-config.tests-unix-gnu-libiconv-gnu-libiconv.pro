--- ./config.tests/unix/gnu-libiconv/gnu-libiconv.pro.orig	2015-05-07 16:14:42.000000000 +0200
+++ ./config.tests/unix/gnu-libiconv/gnu-libiconv.pro	2019-03-22 13:54:51.662505000 +0200
@@ -1,4 +1,5 @@
 SOURCES = gnu-libiconv.cpp
 CONFIG -= qt dylib
 mac:CONFIG -= app_bundle
-LIBS += -liconv
+LIBS += -liconv -L/usr/local/lib
+
