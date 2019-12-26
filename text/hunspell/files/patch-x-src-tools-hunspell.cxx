--- ./src/tools/hunspell.cxx.orig	2014-06-02 14:35:50.000000000 +0300
+++ ./src/tools/hunspell.cxx	2018-06-21 11:37:45.434427000 +0200
@@ -17,7 +17,7 @@
 #define HUNSPELL_VERSION VERSION
 #define INPUTLEN 50
 
-#define HUNSPELL_PIPE_HEADING "@(#) International Ispell Version 3.2.06 (but really Hunspell "VERSION")\n"
+#define HUNSPELL_PIPE_HEADING "@(#) International Ispell Version 3.2.06\n"
 #define HUNSPELL_HEADING "Hunspell "
 #define ODF_EXT "odt|ott|odp|otp|odg|otg|ods|ots"
 #define ENTITY_APOS "&apos;"
@@ -68,28 +68,23 @@
 #include "odfparser.hxx"
 
 #define LIBDIR \
-    "/usr/share/hunspell:" \
-    "/usr/share/myspell:" \
-    "/usr/share/myspell/dicts:" \
-    "/Library/Spelling"
+    "/usr/local/share/hunspell:" \
+    "/usr/local/share/myspell:" \
+    "/usr/local/share/myspell/dicts:"
 #define USEROOODIR \
     ".openoffice.org/3/user/wordbook:" \
     ".openoffice.org2/user/wordbook:" \
     ".openoffice.org2.0/user/wordbook:" \
     "Library/Spelling"
 #define OOODIR \
-    "/opt/openoffice.org/basis3.0/share/dict/ooo:" \
-    "/usr/lib/openoffice.org/basis3.0/share/dict/ooo:" \
-    "/opt/openoffice.org2.4/share/dict/ooo:" \
-    "/usr/lib/openoffice.org2.4/share/dict/ooo:" \
-    "/opt/openoffice.org2.3/share/dict/ooo:" \
-    "/usr/lib/openoffice.org2.3/share/dict/ooo:" \
-    "/opt/openoffice.org2.2/share/dict/ooo:" \
-    "/usr/lib/openoffice.org2.2/share/dict/ooo:" \
-    "/opt/openoffice.org2.1/share/dict/ooo:" \
-    "/usr/lib/openoffice.org2.1/share/dict/ooo:" \
-    "/opt/openoffice.org2.0/share/dict/ooo:" \
-    "/usr/lib/openoffice.org2.0/share/dict/ooo"
+    "/usr/local/openoffice.org3/share/dict/ooo:" \
+    "/usr/local/openoffice.org-3.0.0/share/dict/ooo:" \
+    "/usr/local/openoffice.org-2.4.2/share/dict/ooo:" \
+    "/usr/local/openoffice.org-2.4.1/share/dict/ooo:" \
+    "/usr/local/openoffice.org-2.4/share/dict/ooo:" \
+    "/usr/local/openoffice.org-2.2/share/dict/ooo:" \
+    "/usr/local/openoffice.org-2.1/share/dict/ooo:" \
+    "/usr/local/openoffice.org2.0/share/dict/ooo:"
 #define HOME getenv("HOME")
 #define DICBASENAME ".hunspell_"
 #define LOGFILE "/tmp/hunspell.log"
