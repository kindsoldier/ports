--- ./.auto/ltmain.sh.orig	2008-04-29 23:21:21.000000000 +0300
+++ ./.auto/ltmain.sh	2017-06-02 07:25:58.419169000 +0200
@@ -3340,7 +3340,7 @@
 
 	freebsd-aout)
 	  major=".$current"
-	  versuffix=".$current.$revision";
+	  versuffix=".$current";
 	  ;;
 
 	freebsd-elf)
