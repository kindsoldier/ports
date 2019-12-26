--- ./Makefile.PL.orig	2011-07-25 19:27:49.000000000 +0300
+++ ./Makefile.PL	2017-12-31 21:20:06.788018000 +0200
@@ -1,3 +1,7 @@
+BEGIN {
+  push @INC, '.';
+}
+
 require 5.004;
 use ExtUtils::MakeMaker;
 
