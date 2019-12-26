--- ./src/polkitagent/polkitagentsession.c.orig	2015-06-23 18:57:56.000000000 +0200
+++ ./src/polkitagent/polkitagentsession.c	2016-03-11 10:32:32.841691000 +0200
@@ -596,7 +596,7 @@
       goto error;
     }
 
-  helper_argv[0] = PACKAGE_PREFIX "/lib/polkit-1/polkit-agent-helper-1";
+  helper_argv[0] = PACKAGE_PREFIX "/lib/polkit/polkit-agent-helper";
   helper_argv[1] = passwd->pw_name;
   helper_argv[2] = NULL;
 
