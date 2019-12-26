--- ./src/gui/kernel/x11.pri.orig	2015-05-07 16:14:43.000000000 +0200
+++ ./src/gui/kernel/x11.pri	2019-03-22 13:54:51.785603000 +0200
@@ -1,4 +1,5 @@
 x11 {
-        contains(QT_CONFIG, nas): LIBS_PRIVATE += -laudio -lXt
+#        contains(QT_CONFIG, nas): LIBS_PRIVATE += -laudio -lXt
+	DEFINES+= QT_NO_NAS
 }
  
