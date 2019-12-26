--- ./autoheader.sh.orig	1999-01-05 15:28:39.000000000 +0200
+++ ./autoheader.sh	2014-01-10 18:39:12.000000000 +0300
@@ -194,7 +194,7 @@
   # Some fgrep's have limits on the number of lines that can be in the
   # pattern on the command line, so use a temporary file containing the
   # pattern.
-  (fgrep_tmp=${TMPDIR-/tmp}/autoh$$
+  (fgrep_tmp=`mktemp ${TMPDIR-/tmp}/autoh.XXXXXXXXXX` || exit 1
    trap "rm -f $fgrep_tmp; exit 1" 1 2 15
    cat > $fgrep_tmp <<EOF
 $syms
