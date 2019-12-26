--- ./lib/global.c.orig	2012-12-28 11:47:48.000000000 +0300
+++ ./lib/global.c	2015-10-12 23:34:37.888992000 +0200
@@ -61,10 +61,10 @@
     .eight_bit_clean = 1,
     .full_eight_bits = 0,
 #endif /* !HAVE_CHARSET */
-    .utf8_display = FALSE,
+    .utf8_display = TRUE,
 
-    .message_visible = 1,
-    .keybar_visible = 1,
+    .message_visible = 0,
+    .keybar_visible = 0,
 
 #ifdef ENABLE_BACKGROUND
     .we_are_background = FALSE,
