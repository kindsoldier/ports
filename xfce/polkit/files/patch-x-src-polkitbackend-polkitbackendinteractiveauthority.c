--- ./src/polkitbackend/polkitbackendinteractiveauthority.c.orig	2015-06-19 22:39:58.000000000 +0200
+++ ./src/polkitbackend/polkitbackendinteractiveauthority.c	2016-03-11 10:32:32.883905000 +0200
@@ -296,7 +296,7 @@
 
   priv = POLKIT_BACKEND_INTERACTIVE_AUTHORITY_GET_PRIVATE (authority);
 
-  directory = g_file_new_for_path (PACKAGE_DATA_DIR "/polkit-1/actions");
+  directory = g_file_new_for_path (PACKAGE_DATA_DIR "/polkit/actions");
   priv->action_pool = polkit_backend_action_pool_new (directory);
   g_object_unref (directory);
   g_signal_connect (priv->action_pool,
