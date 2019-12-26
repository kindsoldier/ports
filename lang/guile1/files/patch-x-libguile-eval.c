--- ./libguile/eval.c.orig	2010-12-13 19:24:39.000000000 +0200
+++ ./libguile/eval.c	2019-01-20 20:28:48.063763000 +0200
@@ -40,12 +40,14 @@
 #ifndef alloca
 # if HAVE_ALLOCA_H
 #  include <alloca.h>
+# elif defined __FreeBSD__
+#  include <stdlib.h>
 # elif defined __GNUC__
 #  define alloca __builtin_alloca
 # elif defined _AIX
 #  define alloca __alloca
 # elif defined _MSC_VER
-#  include <malloc.h>
+#  include <stdlib.h>
 #  define alloca _alloca
 # else
 #  include <stddef.h>
