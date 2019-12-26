--- ./watchfrr/watchfrr.c.orig	2019-06-18 08:10:14.000000000 +0200
+++ ./watchfrr/watchfrr.c	2019-09-28 17:12:46.141755000 +0200
@@ -53,9 +53,9 @@
 #define DEFAULT_MIN_RESTART	60
 #define DEFAULT_MAX_RESTART	600
 
-#define DEFAULT_RESTART_CMD	WATCHFRR_SH_PATH " restart %s"
-#define DEFAULT_START_CMD	WATCHFRR_SH_PATH " start %s"
-#define DEFAULT_STOP_CMD	WATCHFRR_SH_PATH " stop %s"
+#define DEFAULT_RESTART_CMD	WATCHFRR_SH_PATH " %s restart"
+#define DEFAULT_START_CMD	WATCHFRR_SH_PATH " %s start"
+#define DEFAULT_STOP_CMD	WATCHFRR_SH_PATH " %s stop"
 
 #define PING_TOKEN	"PING"
 
