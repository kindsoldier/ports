--- ./Makefile.PL.orig	2017-12-31 20:58:39.705589000 +0200
+++ ./Makefile.PL	2017-12-31 21:03:18.707784000 +0200
@@ -1,3 +1,7 @@
+BEGIN {
+  push @INC, '.';
+}
+
 use inc::Module::Install;
 
 use Config;
