--- ./src/tools/uic3/uic3.pro.orig	2015-05-07 16:14:44.000000000 +0200
+++ ./src/tools/uic3/uic3.pro	2019-03-22 13:54:51.830274000 +0200
@@ -17,6 +17,8 @@
 
 INCLUDEPATH += .
 
+LIBS += -lcxxrt
+
 HEADERS += ui3reader.h \
            parser.h \
            domtool.h \
@@ -43,3 +45,6 @@
 
 target.path=$$[QT_INSTALL_BINS]
 INSTALLS += target
+
+TARGET = uic3
+DESTDIR = ../../../bin
