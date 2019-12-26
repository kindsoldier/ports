--- ./app/main.c.orig	2014-08-24 18:44:07.000000000 +0300
+++ ./app/main.c	2016-02-21 14:51:35.431654000 +0200
@@ -17,12 +17,22 @@
  */
 #include <config.h>
 
+//#include <ieeefp.h>
+#include <fenv.h>
+#pragma STDC FENV_ACCESS ON
+
+
 #include "app_procs.h"
 
 #include "interface.h"
 
+
+
 int main(int argc, char *argv[])
 {
+//  fpsetmask(0);
+  fedisableexcept(0);
+
   app_init(argc, argv);
 
   if (!app_is_interactive())
