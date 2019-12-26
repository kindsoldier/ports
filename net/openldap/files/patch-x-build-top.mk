--- ./build/top.mk.orig	2015-08-14 17:25:28.000000000 +0200
+++ ./build/top.mk	2015-09-22 04:39:14.493457000 +0200
@@ -74,7 +74,7 @@
 LIBTOOL = @LIBTOOL@
 LIBRELEASE = @OPENLDAP_LIBRELEASE@
 LIBVERSION = @OPENLDAP_LIBVERSION@
-LTVERSION = -release $(LIBRELEASE) -version-info $(LIBVERSION)
+LTVERSION = -version-info $(LIBVERSION)
 
 # libtool --only flag for libraries: platform specific
 NT_LTONLY_LIB = # --only-$(BUILD_LIBS_DYNAMIC)
