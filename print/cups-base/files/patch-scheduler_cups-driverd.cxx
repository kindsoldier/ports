--- scheduler/cups-driverd.cxx.orig	2016-06-14 19:45:32.000000000 +0200
+++ scheduler/cups-driverd.cxx	2016-09-08 08:05:20.814052000 +0200
@@ -913,7 +913,7 @@ get_file(const char *name,		/* I - Name 
   }
   else
 
-#elif defined(__linux)
+#elif defined(__linux) || defined(__FreeBSD__) || defined(__DragonFly__)
   if (!strncmp(name, "lsb/usr/", 8))
   {
    /*
@@ -1093,7 +1093,7 @@ list_ppds(int        request_id,	/* I - 
   load_ppds("/System/Library/Printers/PPDs/Contents/Resources/en.lproj",
             "System/Library/Printers/PPDs/Contents/Resources/en.lproj", 0);
 
-#elif defined(__linux)
+#elif defined(__linux) || defined(__FreeBSD__) || defined(__DragonFly__)
  /*
   * Load PPDs from LSB-defined locations...
   */
