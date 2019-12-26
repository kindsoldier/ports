--- ./src/window.c.orig	2012-08-12 23:13:41.000000000 +0300
+++ ./src/window.c	2014-12-29 18:46:15.000000000 +0200
@@ -160,6 +160,7 @@
 */
 static gchar *html_browsers[] =
 {
+	"epiphany", NULL,
 	/* Our specific script */
 	GQ_APPNAME_LC "_html_browser", NULL,
 	/* Redhat has a nifty htmlview script to start the user's preferred browser */
@@ -167,7 +168,7 @@
 	/* Debian has even better approach with alternatives */
 	"sensible-browser", NULL,
 	/* GNOME 2 */
-	"gconftool-2",	"gconftool-2 -g /desktop/gnome/url-handlers/http/command",
+	"gconftool",	"gconftool -g /desktop/gnome/url-handlers/http/command",
 	/* KDE */
 	"kfmclient",	"!kfmclient exec \"%s\"",
 	/* use fallbacks */
