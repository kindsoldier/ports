--- ./CMakeScripts/Modules/FindLibWPG.cmake.orig	2017-08-06 22:44:00.000000000 +0200
+++ ./CMakeScripts/Modules/FindLibWPG.cmake	2018-08-22 08:45:06.445353000 +0200
@@ -23,7 +23,7 @@
 	# in the FIND_PATH() and FIND_LIBRARY() calls
 	find_package(PkgConfig)
 	if (PKG_CONFIG_FOUND)
-		INKSCAPE_PKG_CONFIG_FIND(LIBWPG-0.3 libwpg-0.3 0 libwpg/libwpg.h libwpg-0.3 wpg-0.3)
+		INKSCAPE_PKG_CONFIG_FIND(LIBWPG-0.3 libwpg libwpg/libwpg.h libwpg wpg)
 		if (LIBWPG-0.3_FOUND)
 			find_package(LibRevenge)
 			if (LIBREVENGE_FOUND)
