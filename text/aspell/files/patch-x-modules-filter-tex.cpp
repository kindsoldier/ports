--- ./modules/filter/tex.cpp.orig	2011-07-03 00:09:09.000000000 +0300
+++ ./modules/filter/tex.cpp	2019-01-27 22:08:42.491707000 +0200
@@ -174,7 +174,7 @@
 
     if (c == '{') {
 
-      if (top.in_what == Parm || top.in_what == Opt || top.do_check == '\0')
+      if (top.in_what == Parm || top.in_what == Opt || top.do_check == "\0")
 	push_command(Parm);
 
       top.in_what = Parm;
