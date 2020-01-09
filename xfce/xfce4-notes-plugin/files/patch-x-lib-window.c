--- ./lib/window.c~	2010-11-07 13:28:32.000000000 +0200
+++ ./lib/window.c	2020-01-05 10:58:37.962948000 +0200
@@ -1780,7 +1780,7 @@
 				}
 				if (id > 1) {
 					char* _tmp1_;
-					name = (_tmp1_ = g_strdup_printf (_ ("Notes %d"), id), _g_free0 (name), _tmp1_);
+					name = (_tmp1_ = g_strdup_printf (_ ("notes-%03d"), id), _g_free0 (name), _tmp1_);
 				}
 				if (!xnp_window_note_name_exists (self, name)) {
 					break;
