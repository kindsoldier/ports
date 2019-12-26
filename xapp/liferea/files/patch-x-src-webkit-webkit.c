--- ./src/webkit/webkit.c.orig	2014-01-16 00:27:59.000000000 +0300
+++ ./src/webkit/webkit.c	2017-06-24 09:01:54.887381000 +0200
@@ -148,7 +148,7 @@
 	g_object_set (
 		settings,
 		"minimum-font-size",
-		7,
+		9,
 		NULL
 	);
 	conf_get_bool_value (DISABLE_JAVASCRIPT, &disable_javascript);
