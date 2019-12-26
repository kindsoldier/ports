--- ./ltmain.sh.orig	2018-01-02 13:59:33.621094000 +0200
+++ ./ltmain.sh	2018-01-02 14:02:36.294812000 +0200
@@ -7382,13 +7382,13 @@
 	  #
 	  case $version_type in
 	  # correct linux to gnu/linux during the next big refactor
-	  darwin|freebsd-elf|linux|osf|windows|none)
+	  darwin|linux|osf|windows|none)
 	    func_arith $number_major + $number_minor
 	    current=$func_arith_result
 	    age="$number_minor"
 	    revision="$number_revision"
 	    ;;
-	  freebsd-aout|freebsd-elf|qnx|sunos)
+	  freebsd*|freebsd-elf|qnx|sunos)
 	    current="$number_major"
 	    revision="$number_minor"
 	    age="0"
@@ -7459,14 +7459,9 @@
 	  verstring="-compatibility_version $minor_current -current_version $minor_current.$revision"
 	  ;;
 
-	freebsd-aout)
+	freebsd*)
 	  major=".$current"
-	  versuffix=".$current.$revision";
-	  ;;
-
-	freebsd-elf)
-	  major=.$(($current - $age))
-	  versuffix="$major.$age.$revision"
+	  versuffix=".$current";
 	  ;;
 
 	irix | nonstopux)
