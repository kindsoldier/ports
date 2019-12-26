--- ./libdjvu/miniexp.cpp.orig	2012-05-08 05:56:53.000000000 +0300
+++ ./libdjvu/miniexp.cpp	2015-01-10 21:44:26.000000000 +0200
@@ -1008,7 +1008,7 @@
   if (io == &miniexp_io && !CompatCounter::count)
     return (*minilisp_getc)(); /* compatibility hack */
   FILE *f = (io->data[0]) ? (FILE*)(io->data[0]) : stdin;
-  return ::getc(f);
+  return getc(f);
 }
 
 static int 
