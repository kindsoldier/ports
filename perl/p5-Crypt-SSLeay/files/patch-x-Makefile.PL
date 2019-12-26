--- ./Makefile.PL.orig	2014-04-24 17:50:29.000000000 +0300
+++ ./Makefile.PL	2017-11-10 15:53:09.498463000 +0200
@@ -7,7 +7,7 @@
 use Getopt::Long qw( GetOptionsFromArray );
 use Path::Class;
 use Try::Tiny;
-
+use lib ".";
 use inc::IO::Interactive::Tiny;
 
 caller
