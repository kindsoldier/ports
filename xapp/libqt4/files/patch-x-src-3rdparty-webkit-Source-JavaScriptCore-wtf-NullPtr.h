--- ./src/3rdparty/webkit/Source/JavaScriptCore/wtf/NullPtr.h.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/JavaScriptCore/wtf/NullPtr.h	2019-03-22 13:54:51.720479000 +0200
@@ -35,10 +35,14 @@
     #define __has_feature(feature) 0
 #endif
 
+#include <ciso646>
+
 #if __has_feature(cxx_nullptr) || (GCC_VERSION_AT_LEAST(4, 6, 0) && defined(__GXX_EXPERIMENTAL_CXX0X__)) || (defined(_MSC_VER) && _MSC_VER >= 1600 && !COMPILER(INTEL)) || defined(_LIBCPP_VERSION)
 
 #define HAVE_NULLPTR 1
 
+#include <cstddef>
+
 #else
 
 namespace std {
