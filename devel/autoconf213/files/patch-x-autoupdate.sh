--- ./autoupdate.sh.orig	1999-01-05 15:28:42.000000000 +0200
+++ ./autoupdate.sh	2014-01-10 18:39:12.000000000 +0300
@@ -26,7 +26,7 @@
 Usage: autoupdate [-h] [--help] [-m dir] [--macrodir=dir] 
        [--version] [template-file]" 
 
-sedtmp=/tmp/acups.$$
+sedtmp=`mktemp ${TMPDIR-/tmp}/acups.XXXXXXXXXX` || exit 1
 # For debugging.
 #sedtmp=/tmp/acups
 show_version=no
@@ -66,7 +66,7 @@
 
 : ${SIMPLE_BACKUP_SUFFIX='~'}
 
-tmpout=acupo.$$
+tmpout=`mktemp acupo.XXXXXXXXXX` || { rm -f $sedtmp; exit 1; }
 trap 'rm -f $sedtmp $tmpout; exit 1' 1 2 15
 case $# in
   0) infile=configure.in; out="> $tmpout"
