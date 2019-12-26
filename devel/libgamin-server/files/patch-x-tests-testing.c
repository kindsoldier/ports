--- ./tests/testing.c.orig	2007-07-04 16:36:49.000000000 +0300
+++ ./tests/testing.c	2014-12-25 04:59:21.000000000 +0200
@@ -376,11 +376,11 @@
         }
         printf("chmod %s to %s\n", arg, arg2);
     } else if (!strcmp(command, "chown")) {
+	struct stat sb;
         if (args != 3) {
             fprintf(stderr, "chown line %d: lacks path and owner\n", no);
             return (-1);
         }
-		struct stat sb;
 		if (!lstat (arg, &sb)) {
 			ret = (S_ISLNK (sb.st_mode)) ?
 				lchown(arg, strtol(arg2, NULL, 10), -1) :
@@ -486,9 +486,9 @@
             return (-1);
         }
         /*
-         * wait at most 3 secs before declaring failure
+         * wait at most 7 secs before declaring failure
          */
-        while ((delay < 30) && (testState.nb_events < nb_events + count)) {
+        while ((delay < 70) && (testState.nb_events < nb_events + count)) {
             debugLoop(100);
 
 /*	    printf("+"); fflush(stdout); */
