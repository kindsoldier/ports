--- .//libtool-origin/ltmain.sh~	2020-01-04 20:49:17.000000000 +0200
+++ .//libtool-origin/ltmain.sh	2020-08-28 15:48:00.033105000 +0200
@@ -7408,14 +7408,9 @@
 	  verstring="-compatibility_version $minor_current -current_version $minor_current.$revision"
 	  ;;
 
-	freebsd-aout)
+	freebsd*)
 	  major=".$current"
-	  versuffix=".$current.$revision";
-	  ;;
-
-	freebsd-elf)
-	  major=".$current"
-	  versuffix=".$current"
+	  versuffix=".$current";
 	  ;;
 
 	irix | nonstopux)
