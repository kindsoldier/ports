--- ./base/unix-dll.mak.orig	2012-08-08 11:01:36.000000000 +0300
+++ ./base/unix-dll.mak	2016-09-04 19:54:08.771038000 +0200
@@ -49,7 +49,7 @@
 GS_SOEXT=$(DYNANIC_LIB_EXT)
 GS_SONAME=$(GS_SONAME_BASE).$(GS_SOEXT)
 GS_SONAME_MAJOR=$(GS_SONAME).$(GS_VERSION_MAJOR)
-GS_SONAME_MAJOR_MINOR=$(GS_SONAME).$(GS_VERSION_MAJOR).$(GS_VERSION_MINOR)
+GS_SONAME_MAJOR_MINOR=$(GS_SONAME).$(GS_VERSION_MAJOR)
 #LDFLAGS_SO=-shared -Wl,-soname=$(GS_SONAME_MAJOR)
 
 # NOTE: the value of LD_SET_DT_SONAME for, for example, Solaris ld, must contain the
@@ -77,11 +77,11 @@
 
 $(GS_SO): $(GS_SO_MAJOR)
 	$(RM_) $(GS_SO)
-	ln -s $(GS_SONAME_MAJOR_MINOR) $(GS_SO)
+	ln -s $(GS_SONAME_MAJOR) $(GS_SO)
 
-$(GS_SO_MAJOR): $(GS_SO_MAJOR_MINOR)
-	$(RM_) $(GS_SO_MAJOR)
-	ln -s $(GS_SONAME_MAJOR_MINOR) $(GS_SO_MAJOR)
+#$(GS_SO_MAJOR): $(GS_SO_MAJOR_MINOR)
+#	$(RM_) $(GS_SO_MAJOR)
+#	ln -s $(GS_SONAME_MAJOR_MINOR) $(GS_SO_MAJOR)
 
 # Build the small Ghostscript loaders, with Gtk+ and without
 $(GSSOC_XE): $(GS_SO) $(PSSRC)$(SOC_LOADER)
@@ -95,7 +95,7 @@
 # ------------------------- Recursive make targets ------------------------- #
 
 SODEFS=\
- GS_XE=$(BINDIR)/$(GS_SONAME_MAJOR_MINOR)\
+ GS_XE=$(BINDIR)/$(GS_SONAME_MAJOR)\
  DISPLAY_DEV=$(DD)display.dev\
  STDIO_IMPLEMENTATION=c\
  BUILDDIRPREFIX=$(BUILDDIRPREFIX)
@@ -162,13 +162,12 @@
 	-mkdir -p $(DESTDIR)$(bindir)
 	-mkdir -p $(DESTDIR)$(libdir)
 	-mkdir -p $(DESTDIR)$(gsincludedir)
-	$(INSTALL_PROGRAM) $(GSSOC) $(DESTDIR)$(bindir)/$(GSSOC_XENAME)
-	$(INSTALL_PROGRAM) $(GSSOX) $(DESTDIR)$(bindir)/$(GSSOX_XENAME)
-	$(INSTALL_PROGRAM) $(BINDIR)/$(GS_SONAME_MAJOR_MINOR) $(DESTDIR)$(libdir)/$(GS_SONAME_MAJOR_MINOR)
 	$(RM_) $(DESTDIR)$(libdir)/$(GS_SONAME)
-	ln -s $(GS_SONAME_MAJOR_MINOR) $(DESTDIR)$(libdir)/$(GS_SONAME)
 	$(RM_) $(DESTDIR)$(libdir)/$(GS_SONAME_MAJOR)
-	ln -s $(GS_SONAME_MAJOR_MINOR) $(DESTDIR)$(libdir)/$(GS_SONAME_MAJOR)
+	$(INSTALL_PROGRAM) -s $(GSSOC) $(DESTDIR)$(bindir)/$(GSSOC_XENAME)
+	$(INSTALL_PROGRAM) -s $(GSSOX) $(DESTDIR)$(bindir)/$(GSSOX_XENAME)
+	$(INSTALL_PROGRAM) $(BINDIR)/$(GS_SONAME_MAJOR) $(DESTDIR)$(libdir)/$(GS_SONAME_MAJOR)
+	ln -s $(GS_SONAME_MAJOR) $(DESTDIR)$(libdir)/$(GS_SONAME)
 	$(INSTALL_DATA) $(PSSRC)iapi.h $(DESTDIR)$(gsincludedir)iapi.h
 	$(INSTALL_DATA) $(PSSRC)ierrors.h $(DESTDIR)$(gsincludedir)ierrors.h
 	$(INSTALL_DATA) $(GLSRC)gdevdsp.h $(DESTDIR)$(gsincludedir)gdevdsp.h
