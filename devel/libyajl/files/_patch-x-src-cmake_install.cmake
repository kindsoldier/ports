--- ./src/cmake_install.cmake.orig	2015-05-05 20:41:07.092294000 +0200
+++ ./src/cmake_install.cmake	2015-05-05 20:44:01.816905000 +0200
@@ -29,7 +29,6 @@
 
 IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
   FOREACH(file
-      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyajl.so.2.1.0"
       "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyajl.so.2"
       "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyajl.so"
       )
@@ -41,12 +40,10 @@
     ENDIF()
   ENDFOREACH()
   FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
-    "/data/home/ziggi/Devel/XEN/yajl/work/lloyd-yajl-66cb08c/yajl-2.1.0/lib/libyajl.so.2.1.0"
     "/data/home/ziggi/Devel/XEN/yajl/work/lloyd-yajl-66cb08c/yajl-2.1.0/lib/libyajl.so.2"
     "/data/home/ziggi/Devel/XEN/yajl/work/lloyd-yajl-66cb08c/yajl-2.1.0/lib/libyajl.so"
     )
   FOREACH(file
-      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyajl.so.2.1.0"
       "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyajl.so.2"
       "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyajl.so"
       )
