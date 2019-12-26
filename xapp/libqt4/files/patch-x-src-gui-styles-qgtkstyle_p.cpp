--- ./src/gui/styles/qgtkstyle_p.cpp.orig	2015-05-07 16:14:43.000000000 +0200
+++ ./src/gui/styles/qgtkstyle_p.cpp	2019-03-22 13:54:51.787959000 +0200
@@ -311,8 +311,8 @@
  */
 void QGtkStylePrivate::resolveGtk() const
 {
-    // enforce the "0" suffix, so we'll open libgtk-x11-2.0.so.0
-    QLibrary libgtk(QLS("gtk-x11-2.0"), 0, 0);
+    // enforce the "0" suffix, so we'll open libgtk-x11.so.0
+    QLibrary libgtk(QLS("gtk-x11"), 2, 0);
     libgtk.setLoadHints(QLibrary::ImprovedSearchHeuristics);
 
     gtk_init = (Ptr_gtk_init)libgtk.resolve("gtk_init");
@@ -435,8 +435,10 @@
     pango_font_description_get_family = (Ptr_pango_font_description_get_family)libgtk.resolve("pango_font_description_get_family");
     pango_font_description_get_style = (Ptr_pango_font_description_get_style)libgtk.resolve("pango_font_description_get_style");
 
-    gnome_icon_lookup_sync = (Ptr_gnome_icon_lookup_sync)QLibrary::resolve(QLS("gnomeui-2"), 0, "gnome_icon_lookup_sync");
-    gnome_vfs_init= (Ptr_gnome_vfs_init)QLibrary::resolve(QLS("gnomevfs-2"), 0, "gnome_vfs_init");
+    gnome_icon_lookup_sync = (Ptr_gnome_icon_lookup_sync)QLibrary::resolve(QLS("gnomeui"), 0, "gnome_icon_lookup_sync");
+    gnome_vfs_init= (Ptr_gnome_vfs_init)QLibrary::resolve(QLS("gnomevfs"), 0, "gnome_vfs_init");
+
+
 }
 
 /* \internal
@@ -500,9 +502,10 @@
                  "therefore Qt cannot use the GTK+ integration.\nTry launching your app using \'gksudo\', "
                  "\'kdesudo\' or a similar tool.\n\n"
                  "See http://www.gtk.org/setuid.html for more information.\n");
+#if 0
         return;
+#endif
     }
-
     static QString themeName;
     if (!gtkWidgetMap()->contains("GtkWindow") && themeName.isEmpty()) {
         themeName = getThemeName();
@@ -605,9 +608,9 @@
 static bool resolveGConf()
 {
     if (!QGtkStylePrivate::gconf_client_get_default) {
-        QGtkStylePrivate::gconf_client_get_default = (Ptr_gconf_client_get_default)QLibrary::resolve(QLS("gconf-2"), 4, "gconf_client_get_default");
-        QGtkStylePrivate::gconf_client_get_string =  (Ptr_gconf_client_get_string)QLibrary::resolve(QLS("gconf-2"), 4, "gconf_client_get_string");
-        QGtkStylePrivate::gconf_client_get_bool =  (Ptr_gconf_client_get_bool)QLibrary::resolve(QLS("gconf-2"), 4, "gconf_client_get_bool");
+        QGtkStylePrivate::gconf_client_get_default = (Ptr_gconf_client_get_default)QLibrary::resolve(QLS("gconf"), 4, "gconf_client_get_default");
+        QGtkStylePrivate::gconf_client_get_string =  (Ptr_gconf_client_get_string)QLibrary::resolve(QLS("gconf"), 4, "gconf_client_get_string");
+        QGtkStylePrivate::gconf_client_get_bool =  (Ptr_gconf_client_get_bool)QLibrary::resolve(QLS("gconf"), 4, "gconf_client_get_bool");
     }
     return (QGtkStylePrivate::gconf_client_get_default !=0);
 }
@@ -688,8 +691,8 @@
 
 QString QGtkStylePrivate::getIconThemeName() {
     if (!gtk_settings_get_default) {
-        // enforce the "0" suffix, so we'll open libgtk-x11-2.0.so.0
-        QLibrary libgtk(QLS("gtk-x11-2.0"), 0, 0);
+        // enforce the "0" suffix, so we'll open libgtk-x11.so.0
+        QLibrary libgtk(QLS("gtk-x11"), 2, 0);
         libgtk.setLoadHints(QLibrary::ImprovedSearchHeuristics);
         gtk_init = (Ptr_gtk_init)libgtk.resolve("gtk_init");
         gtk_settings_get_default = (Ptr_gtk_settings_get_default)libgtk.resolve("gtk_settings_get_default");
