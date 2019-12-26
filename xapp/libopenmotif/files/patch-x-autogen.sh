--- ./autogen.sh.orig	2012-10-22 17:50:34.000000000 +0300
+++ ./autogen.sh	2015-01-15 22:19:46.000000000 +0200
@@ -7,11 +7,11 @@
 cd "$srcdir"
 DIE=0
 
-libtoolize --force --automake
+libtoolize --force --automake --copy
 aclocal -I .
 autoconf
 autoheader
-automake --foreign  --include-deps --add-missing
+automake --foreign  --include-deps --add-missing --copy
 
 if test -z "$*"; then
         echo "I am going to run ./configure with no arguments - if you wish "
