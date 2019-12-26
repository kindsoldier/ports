--- ./fbreader/src/formats/html/HtmlReader.cpp.orig	2012-11-30 15:41:25.000000000 +0300
+++ ./fbreader/src/formats/html/HtmlReader.cpp	2014-01-05 20:17:25.000000000 +0300
@@ -19,6 +19,7 @@
 
 #include <algorithm>
 #include <cctype>
+#include <cstdlib>
 
 #include <ZLInputStream.h>
 #include <ZLXMLReader.h>
