--- ./FindMySQL.cmake.orig	2014-11-19 15:37:11.000000000 +0200
+++ ./FindMySQL.cmake	2015-02-08 09:32:41.000000000 +0200
@@ -532,6 +532,7 @@
   # This code assumes there is just one "-I...." and that
   # no space between "-I" and the path
   _mysql_config(MYSQL_INCLUDE_DIR "(^| )-I" "--include")
+
   if(NOT MYSQL_INCLUDE_DIR)
     message(FATAL_ERROR "Could not find the include dir from running "
                         "\"${MYSQL_CONFIG_EXECUTABLE}\"")
@@ -627,10 +628,11 @@
                         "\"${MYSQL_CONFIG_EXECUTABLE}\"")
   endif()
 
-  if(NOT EXISTS "${MYSQL_LIB_DIR}")
-    message(FATAL_ERROR "Could not find the directory \"${MYSQL_INCLUDE_DIR}\" "
-                        "found from running \"${MYSQL_CONFIG_EXECUTABLE}\"")
-  endif()
+#  if(NOT EXISTS "${MYSQL_LIB_DIR}")
+#
+#    message(FATAL_ERROR "Could not find the directory \"${MYSQL_INCLUDE_DIR}\" "
+#                        "found from running \"${MYSQL_CONFIG_EXECUTABLE}\"")
+#  endif()
 
   # We have the assumed MYSQL_LIB_DIR. The output from "mysql_config"
   # might not be correct for static libraries, so we might need to
