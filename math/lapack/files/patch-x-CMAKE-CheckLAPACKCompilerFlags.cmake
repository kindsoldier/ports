--- ./CMAKE/CheckLAPACKCompilerFlags.cmake.orig	2011-03-06 22:02:06.000000000 +0200
+++ ./CMAKE/CheckLAPACKCompilerFlags.cmake	2021-11-08 20:57:32.706803000 +0200
@@ -16,7 +16,7 @@
 
 # GNU Fortran
 if( CMAKE_Fortran_COMPILER_ID STREQUAL "GNU" )
-  if( "${CMAKE_Fortran_FLAGS}" MATCHES "-ffpe-trap=[izoupd]") 
+  if( "${CMAKE_Fortran_FLAGS}" MATCHES "-fPIC -ffpe-trap=[izoupd]") 
     set( FPE_EXIT TRUE )
   endif()
 
