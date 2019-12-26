--- ./libgimp/gimp.c.orig	2015-11-20 22:32:13.000000000 +0200
+++ ./libgimp/gimp.c	2016-02-21 19:15:53.613311000 +0200
@@ -107,6 +107,8 @@
 
 #include "libgimp-intl.h"
 
+#include <fenv.h>
+#pragma STDC FENV_ACCESS ON
 
 /**
  * SECTION: gimp
@@ -361,6 +363,8 @@
 
   gimp_env_init (TRUE);
 
+  fedisableexcept(0);
+
   progname = argv[0];
 
   basename = g_path_get_basename (progname);
