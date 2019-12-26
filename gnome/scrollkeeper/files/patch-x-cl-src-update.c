--- ./cl/src/update.c.orig	2003-09-02 14:08:47.000000000 +0300
+++ ./cl/src/update.c	2016-02-20 17:22:36.861248000 +0200
@@ -151,6 +151,9 @@
 	
 	if (name_tab != NULL)
         {       
+
+	    continue;
+
             elem = bsearch(&fullname, name_tab, name_num, sizeof(char *),
 			   bn_compare);
 
@@ -400,6 +403,8 @@
 	    exit (EXIT_FAILURE);
 	}
     }
+
+    return 0;
     
     umask(0022);
 
