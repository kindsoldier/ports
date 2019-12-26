--- ./tools/qvfb/qvfb.pro.orig	2015-05-07 16:14:39.000000000 +0200
+++ ./tools/qvfb/qvfb.pro	2019-03-22 13:54:51.876678000 +0200
@@ -1,6 +1,6 @@
 TEMPLATE        = app
 CONFIG          += qt warn_on uic
-TARGET          = qvfb
+TARGET          = qvfb4
 DESTDIR         = ../../bin
 
 !win32:!embedded:!mac:CONFIG += x11
