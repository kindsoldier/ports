--- ./src/migrate.c.orig	2012-04-12 23:32:30.000000000 +0300
+++ ./src/migrate.c	2013-12-15 11:11:46.000000000 +0300
@@ -35,7 +35,7 @@
 #include "xml.h"
 #include "ui/ui_common.h"
 
-#define LIFEREA_CURRENT_DIR ".liferea_1.8"
+#define LIFEREA_CURRENT_DIR ".liferea"
 
 static void 
 migrate_copy_dir (const gchar *from,
@@ -311,7 +311,7 @@
 
 	switch (mode) {
 		case MIGRATION_FROM_10:
-			olddir = ".liferea";
+			olddir = ".liferea_1.0";
 			migrate_from_10 ();
 			break;
 		case MIGRATION_FROM_12:
