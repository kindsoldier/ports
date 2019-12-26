--- ./demos/qtdemo/qtdemo.pro.orig	2015-05-07 16:14:37.000000000 +0200
+++ ./demos/qtdemo/qtdemo.pro	2019-03-22 13:54:51.672233000 +0200
@@ -1,5 +1,5 @@
 CONFIG += help x11inc
-TARGET = qtdemo
+TARGET = qtdemo-qt4
 DEMO_DESTDIR = $$QT_BUILD_TREE
 isEmpty(DEMO_DESTDIR):DEMO_DESTDIR=../..
 DESTDIR = $$DEMO_DESTDIR/bin
