--- ./Makefile.PL.orig	2015-05-02 02:56:58.000000000 +0200
+++ ./Makefile.PL	2017-11-30 20:15:00.527113000 +0200
@@ -1,3 +1,8 @@
+
+BEGIN {
+    push @INC, ".";
+}
+
 use strict;
 use warnings;
 
