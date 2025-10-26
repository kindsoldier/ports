--- ./Modules/GNUInstallDirs.cmake.orig	2025-08-27 09:23:22.300542000 +0200
+++ ./Modules/GNUInstallDirs.cmake	2025-08-27 09:24:42.220931000 +0200
@@ -330,7 +330,7 @@
     "Info documentation (DATAROOTDIR/info)")
 endif()
 
-if(CMAKE_SYSTEM_NAME MATCHES "^(([^k].*)?BSD|DragonFly)$" AND NOT CMAKE_SYSTEM_NAME MATCHES "^(FreeBSD)$")
+if(CMAKE_SYSTEM_NAME MATCHES "^(([^k].*)?BSD|DragonFly)$")
   _GNUInstallDirs_cache_path_fallback(CMAKE_INSTALL_MANDIR "man"
     "Man documentation (man)")
 else()
