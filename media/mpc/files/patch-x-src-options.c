--- ./src/options.c.orig	2011-06-04 20:15:35.000000000 +0300
+++ ./src/options.c	2014-12-31 18:04:58.000000000 +0200
@@ -39,11 +39,16 @@
 } arg_opt_t;
 
 
+#ifndef DEFAULT_FORMAT
+#define DEFAULT_FORMAT "%artist%--%date%--%album%--%track%--%title%"
+/* [%name%: &[%artist% - ]%title%]|%name%|[%artist% - ]%title%|%file%" */
+#endif
+
 options_t options = {
 	.verbosity = V_DEFAULT,
 	.password = NULL,
 	.port_str = NULL,
-	.format = "[%name%: &[%artist% - ]%title%]|%name%|[%artist% - ]%title%|%file%",
+	.format = DEFAULT_FORMAT,
 };
 
 static const arg_opt_t option_table[] = {
