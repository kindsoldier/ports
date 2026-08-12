--- ./ltmain.sh.orig	2012-11-24 03:13:31.000000000 +0300
+++ ./ltmain.sh	2013-09-22 04:18:22.000000000 +0300
@@ -7416,7 +7416,7 @@
 
 	freebsd-aout)
 	  major=".$current"
-	  versuffix=".$current.$revision";
+	  versuffix=".$current";
 	  ;;
 
 	freebsd-elf)
