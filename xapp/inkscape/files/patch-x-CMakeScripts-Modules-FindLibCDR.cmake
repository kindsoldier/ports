--- ./CMakeScripts/Modules/FindLibCDR.cmake.orig	2018-03-11 22:38:09.000000000 +0200
+++ ./CMakeScripts/Modules/FindLibCDR.cmake	2018-08-22 14:31:22.412049000 +0200
@@ -24,7 +24,7 @@
 	# in the FIND_PATH() and FIND_LIBRARY() calls
 	find_package(PkgConfig)
 	if (PKG_CONFIG_FOUND)
-		INKSCAPE_PKG_CONFIG_FIND(LIBCDR-0.1 libcdr-0.1 0 libcdr/libcdr.h libcdr-0.1 cdr-0.1)
+		INKSCAPE_PKG_CONFIG_FIND(LIBCDR-0.1 libcd 0 libcdr/libcdr.h libcdr cdr)
 		if (LIBCDR-0.1_FOUND)
 			find_package(LibRevenge)
 			if (LIBREVENGE_FOUND)
