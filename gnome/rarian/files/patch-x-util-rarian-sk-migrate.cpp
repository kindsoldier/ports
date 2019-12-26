--- ./util/rarian-sk-migrate.cpp.orig	2008-09-01 21:40:21.000000000 +0300
+++ ./util/rarian-sk-migrate.cpp	2010-09-28 02:27:52.000000000 +0300
@@ -281,6 +281,7 @@
 
     if (argc != 3 || access (argv[1], R_OK)) {
         fprintf (stderr, "ERROR: Cannot access directory %s\n", argv[1]);
+	/* exit(1); */
     }
 	reg = rrn_reg_new_full ();
 
