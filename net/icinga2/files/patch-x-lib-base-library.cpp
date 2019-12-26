--- ./lib/base/library.cpp.orig	2019-09-19 09:53:37.000000000 +0200
+++ ./lib/base/library.cpp	2019-10-12 18:34:00.613433000 +0200
@@ -21,7 +21,7 @@
 #elif defined(__APPLE__)
 	path = "lib" + name + "." + Application::GetAppSpecVersion() + ".dylib";
 #else /* __APPLE__ */
-	path = "lib" + name + ".so." + Application::GetAppSpecVersion();
+	path = "lib" + name + ".so.2";
 #endif /* _WIN32 */
 
 	Log(LogNotice, "Library")
