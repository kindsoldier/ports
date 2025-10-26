--- ./Makefile.PL.orig	2010-03-11 17:10:46.000000000 +0200
+++ ./Makefile.PL	2017-12-31 21:26:10.146796000 +0200
@@ -1,5 +1,5 @@
 # This -*- perl -*- script makes the Makefile
-
+BEGIN { push @INC, '.'; }
 use strict;
 use warnings;
 use 5.005;
