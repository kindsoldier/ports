--- ./src/polkitbackend/polkitbackendjsauthority.c.orig	2015-06-19 22:39:58.000000000 +0200
+++ ./src/polkitbackend/polkitbackendjsauthority.c	2016-03-11 10:32:32.903772000 +0200
@@ -524,8 +524,8 @@
   if (authority->priv->rules_dirs == NULL)
     {
       authority->priv->rules_dirs = g_new0 (gchar *, 3);
-      authority->priv->rules_dirs[0] = g_strdup (PACKAGE_SYSCONF_DIR "/polkit-1/rules.d");
-      authority->priv->rules_dirs[1] = g_strdup (PACKAGE_DATA_DIR "/polkit-1/rules.d");
+      authority->priv->rules_dirs[0] = g_strdup (PACKAGE_SYSCONF_DIR "/polkit/rules.d");
+      authority->priv->rules_dirs[1] = g_strdup (PACKAGE_DATA_DIR "/polkit/rules.d");
     }
 
   g_mutex_init (&authority->priv->rkt_init_mutex);
