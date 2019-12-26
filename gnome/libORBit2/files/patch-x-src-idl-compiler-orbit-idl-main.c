--- ./src/idl-compiler/orbit-idl-main.c.orig	2009-04-18 15:20:54.000000000 +0300
+++ ./src/idl-compiler/orbit-idl-main.c	2015-10-20 19:49:52.536093000 +0200
@@ -264,7 +264,7 @@
   rinfo.onlytop = cl_onlytop;
   rinfo.idata = !cl_disable_idata;
   
-  printf ("orbit-idl-2 " VERSION " compiling\n");
+  printf ("orbit-idl " VERSION " compiling\n");
   printf (" %s mode, %s preprocessor errors, passes: %s%s%s%s%s%s\n\n",
 	  rinfo.is_pidl ? "pidl" : "",
 	  rinfo.show_cpp_errors ? "show" : "hide",
