--- ./prog/check_funs.cpp.orig	2011-07-04 12:17:27.000000000 +0300
+++ ./prog/check_funs.cpp	2019-01-27 22:10:53.781397000 +0200
@@ -647,7 +647,7 @@
     }
   }
   if (i == width-1) {
-    if (word == '\0')
+    if (word == "\0")
       put(out,' ');
     else if (word[len] == '\0')
       put(out, word, len);
