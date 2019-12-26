--- ./Makefile.PL.orig	2015-12-16 15:16:17.864268000 +0200
+++ ./Makefile.PL	2015-12-16 15:45:56.323276000 +0200
@@ -707,7 +707,7 @@
 
   # Set the default value based on the corresponding SYSCONFDIR
   set_macro($macro,
-    macro_ref("${repository}SYSCONFDIR") . '/mail/spamassassin'
+    macro_ref("${repository}SYSCONFDIR") . '/spamassassin'
   );
 }
 
