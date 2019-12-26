--- ./cmake_admin/DefaultDirs.cmake.orig	2019-04-18 19:43:39.000000000 +0200
+++ ./cmake_admin/DefaultDirs.cmake	2019-07-14 09:43:32.247219000 +0200
@@ -6,7 +6,7 @@
   set (DEFAULT_SOUNDFONT "C:\\\\soundfonts\\\\default.sf2" CACHE STRING
        "Default soundfont file")
 else ( WIN32 )
-  set (DEFAULT_SOUNDFONT "${CMAKE_INSTALL_PREFIX}/share/soundfonts/default.sf2" CACHE STRING
+  set (DEFAULT_SOUNDFONT "${CMAKE_INSTALL_PREFIX}/share/sounds/sf2/default.sf2" CACHE STRING
        "Default soundfont file")
 endif ( WIN32 )
 mark_as_advanced (DEFAULT_SOUNDFONT)
