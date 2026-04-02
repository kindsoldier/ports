--- ./lzotest/lzotest.c.orig	2015-02-04 13:24:51.000000000 +0200
+++ ./lzotest/lzotest.c	2015-03-05 00:18:31.000000000 +0200
@@ -206,7 +206,7 @@
 // command line options
 **************************************************************************/
 
-int opt_verbose = 2;
+int opt_verbose = 1;
 
 long opt_c_loops = 0;
 long opt_d_loops = 0;
@@ -1902,9 +1902,11 @@
         if ((*s == '/' || *s == '\\') && s[1])
             progname = s + 1;
 
+#if 0
     printf("\nLZO real-time data compression library (v%s, %s).\n",
            lzo_version_string(), lzo_version_date());
     printf("Copyright (C) 1996-2015 Markus Franz Xaver Johannes Oberhumer\nAll Rights Reserved.\n\n");
+#endif
 
 
 /*
