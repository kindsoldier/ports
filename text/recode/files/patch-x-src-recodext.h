--- ./src/recodext.h.orig	2001-01-04 16:36:54.000000000 +0200
+++ ./src/recodext.h	2016-12-04 20:40:12.422387000 +0200
@@ -218,7 +218,7 @@
     enum recode_symbol_type type : 3;
 
     /* Non zero if this one should be ignored.  */
-    bool ignore : 2;
+    bool ignore : 1;
   };
 
 struct recode_surface_list
