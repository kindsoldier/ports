--- ./src/misc/cross.cpp.orig	2010-05-10 20:43:54.000000000 +0300
+++ ./src/misc/cross.cpp	2018-07-31 12:44:10.842197000 +0200
@@ -75,7 +75,7 @@
 #elif defined(MACOSX)
 #define DEFAULT_CONFIG_FILE "DOSBox " VERSION " Preferences"
 #else /*linux freebsd*/
-#define DEFAULT_CONFIG_FILE "dosbox-" VERSION ".conf"
+#define DEFAULT_CONFIG_FILE "dosbox.conf"
 #endif
 	in = DEFAULT_CONFIG_FILE;
 }
