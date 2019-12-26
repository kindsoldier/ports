--- ./src/polkitagent/polkitagenthelperprivate.c.orig	2015-06-19 22:31:02.000000000 +0200
+++ ./src/polkitagent/polkitagenthelperprivate.c	2016-03-11 11:38:04.030366000 +0200
@@ -113,7 +113,7 @@
                                                             NULL,
                                                             &error))
     {
-      g_printerr ("polkit-agent-helper-1: error response to PolicyKit daemon: %s\n", error->message);
+      g_printerr ("polkit-agent-helper: error response to PolicyKit daemon: %s\n", error->message);
       g_error_free (error);
       goto out;
     }
