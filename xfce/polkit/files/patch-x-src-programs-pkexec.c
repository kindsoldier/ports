--- ./src/programs/pkexec.c.orig	2015-06-18 22:20:50.000000000 +0200
+++ ./src/programs/pkexec.c	2016-03-11 10:32:32.921175000 +0200
@@ -174,7 +174,7 @@
   conversation.appdata_ptr = NULL;
 
   /* start the pam stack */
-  rc = pam_start ("polkit-1",
+  rc = pam_start ("polkit",
                   user_to_auth,
                   &conversation,
                   &pam_h);
