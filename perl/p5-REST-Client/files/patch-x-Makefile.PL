--- ./Makefile.PL.orig	2015-08-04 15:53:41.000000000 +0200
+++ ./Makefile.PL	2017-11-10 16:03:43.606801000 +0200
@@ -1,3 +1,4 @@
+use lib ".";
 use inc::Module::Install;
 
 name            'REST-Client';
