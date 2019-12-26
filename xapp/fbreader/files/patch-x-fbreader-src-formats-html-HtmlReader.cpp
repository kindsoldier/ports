--- ./fbreader/src/formats/html/HtmlReader.cpp.orig	2012-11-30 15:41:25.000000000 +0300
+++ ./fbreader/src/formats/html/HtmlReader.cpp	2015-02-12 19:00:40.000000000 +0200
@@ -19,6 +19,7 @@
 
 #include <algorithm>
 #include <cctype>
+#include <cstdlib>
 
 #include <ZLInputStream.h>
 #include <ZLXMLReader.h>
