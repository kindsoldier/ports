--- ./tools/linguist/linguist/linguist.pro.orig	2015-05-07 16:14:39.000000000 +0200
+++ ./tools/linguist/linguist/linguist.pro	2019-03-22 15:20:45.170750000 +0200
@@ -69,7 +69,7 @@
 
 contains(QT_PRODUCT, OpenSource.*):DEFINES *= QT_OPENSOURCE
 DEFINES += QT_KEYWORDS
-TARGET = linguist
+TARGET = linguist-qt4
 win32:RC_FILE = linguist.rc
 mac {
     static:CONFIG -= global_init_link_order
