--- ./lib/global.c.orig	2016-03-12 17:45:47.000000000 +0200
+++ ./lib/global.c	2017-01-02 14:37:07.273778000 +0200
@@ -66,7 +66,7 @@
     .utf8_display = FALSE,
 
     .message_visible = 1,
-    .keybar_visible = 1,
+    .keybar_visible = 0,
 
 #ifdef ENABLE_BACKGROUND
     .we_are_background = FALSE,
