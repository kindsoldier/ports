--- ./lib/window.c.orig	2010-11-07 13:28:32.000000000 +0200
+++ ./lib/window.c	2020-01-10 08:36:51.164652000 +0200
@@ -1763,7 +1763,7 @@
 	gint _tmp2_;
 	g_return_val_if_fail (self != NULL, NULL);
 	len = gtk_notebook_get_n_pages (self->priv->notebook);
-	name = g_strdup (_ ("Notes"));
+	name = g_strdup (_ ("notes-000"));
 	{
 		gint id;
 		id = 1;
@@ -1780,7 +1780,7 @@
 				}
 				if (id > 1) {
 					char* _tmp1_;
-					name = (_tmp1_ = g_strdup_printf (_ ("Notes %d"), id), _g_free0 (name), _tmp1_);
+					name = (_tmp1_ = g_strdup_printf (_ ("notes-%03d"), id), _g_free0 (name), _tmp1_);
 				}
 				if (!xnp_window_note_name_exists (self, name)) {
 					break;
