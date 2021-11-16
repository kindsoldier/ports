--- ./src/main.in.cc.orig	2021-07-11 19:19:32.000000000 +0200
+++ ./src/main.in.cc	2021-11-09 15:51:49.309926000 +0200
@@ -220,7 +220,7 @@
   std::string octave_bindir = get_octave_bindir ();
   std::string octave_archlibdir = get_octave_archlibdir ();
   std::string octave_cli
-    = octave_bindir + dir_sep_char + "octave-cli-" OCTAVE_VERSION;
+    = octave_bindir + dir_sep_char + "octave-cli";
   std::string octave_gui = octave_archlibdir + dir_sep_char + "octave-gui";
 
 #if defined (HAVE_OCTAVE_QT_GUI)
