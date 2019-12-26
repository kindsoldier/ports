--- ./gtk/gtkimcontextsimple.c.orig	2019-01-23 22:46:13.000000000 +0200
+++ ./gtk/gtkimcontextsimple.c	2019-03-26 21:58:27.038231000 +0200
@@ -54,7 +54,7 @@
  * from the X11 Compose files.
  *
  * GtkIMContextSimple reads additional compose sequences from the first of the
- * following files that is found: ~/.config/gtk-3.0/Compose, ~/.XCompose,
+ * following files that is found: ~/.config/gtk3/Compose, ~/.XCompose,
  * /usr/share/X11/locale/$locale/Compose (for locales that have a nontrivial
  * Compose file). The syntax of these files is described in the Compose(5)
  * manual page.
@@ -161,7 +161,7 @@
   gchar * const *sys_lang = NULL;
   gchar *x11_compose_file_dir = get_x11_compose_file_dir ();
 
-  path = g_build_filename (g_get_user_config_dir (), "gtk-3.0", "Compose", NULL);
+  path = g_build_filename (g_get_user_config_dir (), "gtk3", "Compose", NULL);
   if (g_file_test (path, G_FILE_TEST_EXISTS))
     {
       gtk_im_context_simple_add_compose_file (im_context_simple, path);
