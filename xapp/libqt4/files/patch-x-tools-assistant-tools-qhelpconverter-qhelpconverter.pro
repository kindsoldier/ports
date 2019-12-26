--- ./tools/assistant/tools/qhelpconverter/qhelpconverter.pro.orig	2015-05-07 16:14:40.000000000 +0200
+++ ./tools/assistant/tools/qhelpconverter/qhelpconverter.pro	2019-03-22 15:19:24.523909000 +0200
@@ -1,6 +1,6 @@
 QT += xml
 TEMPLATE = app
-TARGET = qhelpconverter
+TARGET = qhelpconverter-qt4
 DESTDIR = ../../../../bin
 CONFIG += qt warn_on help
 build_all:!build_pass {
@@ -8,6 +8,8 @@
     CONFIG += release
 }
 
+LIBS += -lQtCLucene
+
 target.path=$$[QT_INSTALL_BINS]
 INSTALLS += target
 
