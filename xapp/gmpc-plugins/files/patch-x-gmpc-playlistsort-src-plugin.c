--- ./gmpc-playlistsort/src/plugin.c.orig	2010-03-22 05:22:44.000000000 +0200
+++ ./gmpc-playlistsort/src/plugin.c	2015-10-29 19:14:44.471473000 +0200
@@ -316,7 +316,7 @@
 int playlistsort_tool_menu(GtkWidget *menu)
 {
     GtkWidget *item;
-    if(!playlistsort_get_enabled()) return;
+    if(!playlistsort_get_enabled()) return 0;
     item = gtk_image_menu_item_new_with_label("Playlist Sort");
     gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(item),
             gtk_image_new_from_stock(GTK_STOCK_ADD, GTK_ICON_SIZE_MENU));
