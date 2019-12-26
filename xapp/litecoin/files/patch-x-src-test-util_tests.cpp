--- ./src/test/util_tests.cpp.orig	2018-05-23 04:04:24.000000000 +0200
+++ ./src/test/util_tests.cpp	2018-09-01 04:40:20.222245000 +0200
@@ -2,6 +2,9 @@
 // Distributed under the MIT software license, see the accompanying
 // file COPYING or http://www.opensource.org/licenses/mit-license.php.
 
+
+#include <sys/signal.h>
+
 #include <util.h>
 
 #include <clientversion.h>
