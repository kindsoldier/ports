--- ./src/cmdline.c.orig	2011-10-09 14:43:52.000000000 +0300
+++ ./src/cmdline.c	2011-11-09 14:53:55.000000000 +0300
@@ -44,8 +44,8 @@
 #ifdef G_OS_WIN32
 #define CONFIG_FILE_LOCATION		"\\mpd\\mpd.conf"
 #else /* G_OS_WIN32 */
-#define USER_CONFIG_FILE_LOCATION1	".mpdconf"
-#define USER_CONFIG_FILE_LOCATION2	".mpd/mpd.conf"
+#define USER_CONFIG_FILE_LOCATION1	".musicpd.conf"
+#define USER_CONFIG_FILE_LOCATION2	".musicpd/musicpd.conf"
 #endif
 
 static GQuark
