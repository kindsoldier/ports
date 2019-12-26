--- ./tools/assistant/tools/qhelpgenerator/qhelpgenerator.pro.orig	2015-05-07 16:14:40.000000000 +0200
+++ ./tools/assistant/tools/qhelpgenerator/qhelpgenerator.pro	2019-03-22 13:54:51.836419000 +0200
@@ -4,6 +4,7 @@
 CONFIG += qt warn_on help console
 CONFIG -= app_bundle
 QT += network
+LIBS += -lQtCLucene
 
 build_all:!build_pass {
     CONFIG -= build_all
