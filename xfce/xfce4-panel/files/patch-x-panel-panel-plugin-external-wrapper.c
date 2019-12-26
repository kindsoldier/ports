--- ./panel/panel-plugin-external-wrapper.c.orig	2014-04-24 23:16:37.000000000 +0300
+++ ./panel/panel-plugin-external-wrapper.c	2015-08-12 15:40:41.208957000 +0200
@@ -217,7 +217,10 @@
 
   /* setup the basic argv */
   argv = g_new0 (gchar *, argc + 1);
+#if 0
   argv[PLUGIN_ARGV_0] = g_strjoin ("-", WRAPPER_BIN, panel_module_get_api (external->module), NULL);
+#endif
+  argv[PLUGIN_ARGV_0] = g_strdup_printf ("%s", WRAPPER_BIN);
   argv[PLUGIN_ARGV_FILENAME] = g_strdup (panel_module_get_filename (external->module));
   argv[PLUGIN_ARGV_UNIQUE_ID] = g_strdup_printf ("%d", external->unique_id);;
   argv[PLUGIN_ARGV_SOCKET_ID] = g_strdup_printf ("%u", gtk_socket_get_id (GTK_SOCKET (external)));;
