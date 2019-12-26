--- ./tools/tools.pro.orig	2015-05-07 16:14:40.000000000 +0200
+++ ./tools/tools.pro	2019-03-22 13:54:51.878806000 +0200
@@ -9,7 +9,7 @@
         } else:wince* {
             SUBDIRS = qtestlib designer
         } else {
-            SUBDIRS = assistant \
+            SUBDIRS =  \
                       pixeltool \
                       porting \
                       qtestlib \
@@ -17,7 +17,7 @@
             contains(QT_EDITION, Console) {
                 SUBDIRS += designer/src/uitools     # Linguist depends on this
             } else {
-                SUBDIRS += designer
+                SUBDIRS += designer/src/uitools
             }
         }
         unix:!symbian:!mac:!embedded:!qpa:SUBDIRS += qtconfig
