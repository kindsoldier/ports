--- ./lib/application.c~	2010-11-07 13:28:32.000000000 +0200
+++ ./lib/application.c	2020-01-05 10:58:18.530159000 +0200
@@ -579,7 +579,7 @@
 					}
 					if (id > 1) {
 						char* _tmp2_;
-						window_name = (_tmp2_ = g_strdup_printf (_ ("Notes %d"), id), _g_free0 (window_name), _tmp2_);
+						window_name = (_tmp2_ = g_strdup_printf (_ ("notes-%03d"), id), _g_free0 (window_name), _tmp2_);
 					}
 					if (!xnp_application_window_name_exists (self, window_name)) {
 						break;
