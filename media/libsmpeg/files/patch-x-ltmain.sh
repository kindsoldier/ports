--- ./ltmain.sh.orig	2001-05-23 00:43:04.000000000 +0300
+++ ./ltmain.sh	2017-04-29 09:10:13.614514000 +0200
@@ -1751,12 +1751,7 @@
 	  versuffix=".$current.$revision"
 	  ;;
 
-	freebsd-aout)
-	  major=".$current"
-	  versuffix=".$current.$revision";
-	  ;;
-
-	freebsd-elf)
+	freebsd*)
 	  major=".$current"
 	  versuffix=".$current";
 	  ;;
