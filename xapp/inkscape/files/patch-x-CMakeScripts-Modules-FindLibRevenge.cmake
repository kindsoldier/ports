--- ./CMakeScripts/Modules/FindLibRevenge.cmake.orig	2018-03-11 22:38:09.000000000 +0200
+++ ./CMakeScripts/Modules/FindLibRevenge.cmake	2018-08-23 16:14:36.463164000 +0200
@@ -24,8 +24,8 @@
 	# in the FIND_PATH() and FIND_LIBRARY() calls
 	find_package(PkgConfig)
 	if (PKG_CONFIG_FOUND)
-		INKSCAPE_PKG_CONFIG_FIND(LIBREVENGE-0.0 librevenge-0.0 0 librevenge/librevenge.h librevenge-0.0 revenge-0.0)
-		INKSCAPE_PKG_CONFIG_FIND(LIBREVENGE-STREAM-0.0 librevenge-stream-0.0 0 librevenge-0.0/librevenge-stream/librevenge-stream.h librevenge-stream-0.0 revenge-stream-0.0)
+		INKSCAPE_PKG_CONFIG_FIND(LIBREVENGE-0.0 librevenge 0 librevenge/librevenge.h librevenge revenge)
+		INKSCAPE_PKG_CONFIG_FIND(LIBREVENGE-STREAM-0.0 librevenge-stream 0 librevenge/librevenge-stream/librevenge-stream.h librevenge-stream revenge-stream)
 		if (LIBREVENGE-0.0_FOUND AND LIBREVENGE-STREAM-0.0_FOUND)
 			list(APPEND LIBREVENGE_INCLUDE_DIRS ${LIBREVENGE-0.0_INCLUDE_DIRS})
 			list(APPEND LIBREVENGE_LIBRARIES    ${LIBREVENGE-0.0_LIBRARIES})
