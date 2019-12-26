--- ./ltmain.sh.orig	2003-03-02 02:23:00.000000000 +0200
+++ ./ltmain.sh	2019-06-18 14:16:14.481017000 +0200
@@ -1800,7 +1800,7 @@
 	    linklib=$newlib
 	  fi # test -n "$old_archive_from_expsyms_cmds"
 
-	  if test "$linkmode" = prog || test "$mode" != relink; then
+	  if :; then
 	    add_shlibpath=
 	    add_dir=
 	    add=
@@ -1866,7 +1866,7 @@
 	    fi
 	  fi
 
-	  if test "$linkmode" = prog || test "$mode" = relink; then
+	  if test "$linkmode" = prog ; then
 	    add_shlibpath=
 	    add_dir=
 	    add=
@@ -2263,12 +2263,7 @@
 	  verstring="-compatibility_version $minor_current -current_version $minor_current.$revision"
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
@@ -4216,11 +4211,6 @@
 	  IFS="$save_ifs"
 	fi
 
-	# Install the pseudo-library for information purposes.
-	name=`$echo "X$file" | $Xsed -e 's%^.*/%%'`
-	instname="$dir/$name"i
-	$show "$install_prog $instname $destdir/$name"
-	$run eval "$install_prog $instname $destdir/$name" || exit $?
 
 	# Maybe install the static library, too.
 	test -n "$old_library" && staticlibs="$staticlibs $dir/$old_library"
