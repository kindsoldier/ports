--- ./src/vala/gmpc-test-plugin.c.orig	2010-03-22 06:19:06.000000000 +0300
+++ ./src/vala/gmpc-test-plugin.c	2012-08-14 15:47:13.000000000 +0400
@@ -1175,7 +1175,7 @@
 	gtk_misc_set_alignment ((GtkMisc*) label, 0.0f, 0.5f);
 	gtk_size_group_add_widget (group, (GtkWidget*) label);
 	gtk_box_pack_start ((GtkBox*) qhbox, (GtkWidget*) label, FALSE, FALSE, (guint) 0);
-	image = (_tmp18_ = g_object_ref_sink ((GtkImage*) gtk_image_new_from_icon_name ("media-title", GTK_ICON_SIZE_BUTTON)), _g_object_unref0 (image), _tmp18_);
+	image = (_tmp18_ = g_object_ref_sink ((GtkImage*) gtk_image_new_from_icon_name ("media-genre", GTK_ICON_SIZE_BUTTON)), _g_object_unref0 (image), _tmp18_);
 	gtk_box_pack_start ((GtkBox*) qhbox, (GtkWidget*) image, FALSE, FALSE, (guint) 0);
 	self->priv->title_entry = (_tmp19_ = g_object_ref_sink ((GtkEntry*) gtk_entry_new ()), _g_object_unref0 (self->priv->title_entry), _tmp19_);
 	if (song->title != NULL) {
