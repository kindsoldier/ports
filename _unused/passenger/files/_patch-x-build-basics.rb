--- ./build/basics.rb.orig	2018-07-10 01:31:15.037517000 +0200
+++ ./build/basics.rb	2018-07-10 08:46:23.948520000 +0200
@@ -152,4 +152,4 @@
 # Whether to use the vendored libev or the system one.
 USE_VENDORED_LIBEV = boolean_option("USE_VENDORED_LIBEV", true)
 # Whether to use the vendored libuv or the system one.
-USE_VENDORED_LIBUV  = boolean_option("USE_VENDORED_LIBUV", false)
+USE_VENDORED_LIBUV  = boolean_option("USE_VENDORED_LIBUV", true)
