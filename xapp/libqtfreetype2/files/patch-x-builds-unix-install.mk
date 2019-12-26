--- ./builds/unix/install.mk.orig	2018-04-22 11:41:36.000000000 +0200
+++ ./builds/unix/install.mk	2019-03-30 22:55:41.823293000 +0200
@@ -24,7 +24,7 @@
 
 # Unix installation and deinstallation targets.
 #
-# Note that we remove any data found in `$(includedir)/freetype2' before
+# Note that we remove any data found in `$(includedir)/qtfreetype2' before
 # installing new files to avoid interferences with files installed by
 # previous FreeType versions (which use slightly different locations).
 #
@@ -34,11 +34,11 @@
 # configured version overwrites the generic one.
 #
 install: $(PROJECT_LIBRARY)
-	-$(DELDIR) $(DESTDIR)$(includedir)/freetype2
+	-$(DELDIR) $(DESTDIR)$(includedir)/qtfreetype2
 	-$(DELETE) $(DESTDIR)$(includedir)/ft2build.h
 	$(MKINSTALLDIRS) $(DESTDIR)$(libdir)                               \
                          $(DESTDIR)$(libdir)/pkgconfig                     \
-                         $(DESTDIR)$(includedir)/freetype2/freetype/config \
+                         $(DESTDIR)$(includedir)/qtfreetype2/freetype/config \
                          $(DESTDIR)$(datadir)/aclocal
 ifeq ($(INSTALL_FT2_CONFIG),TRUE)
 	$(MKINSTALLDIRS) $(DESTDIR)$(bindir)                               \
@@ -48,39 +48,39 @@
                                   $(PROJECT_LIBRARY) $(DESTDIR)$(libdir)
 	-for P in $(PUBLIC_H) ; do                           \
           $(INSTALL_DATA)                                    \
-            $$P $(DESTDIR)$(includedir)/freetype2/freetype ; \
+            $$P $(DESTDIR)$(includedir)/qtfreetype2/freetype ; \
         done
 	-for P in $(CONFIG_H) ; do                                  \
           $(INSTALL_DATA)                                           \
-            $$P $(DESTDIR)$(includedir)/freetype2/freetype/config ; \
+            $$P $(DESTDIR)$(includedir)/qtfreetype2/freetype/config ; \
         done
 	$(INSTALL_DATA) $(TOP_DIR)/include/ft2build.h                  \
-          $(DESTDIR)$(includedir)/freetype2/ft2build.h
+          $(DESTDIR)$(includedir)/qtfreetype2/ft2build.h
 	$(INSTALL_DATA) $(OBJ_BUILD)/ftconfig.h                        \
-          $(DESTDIR)$(includedir)/freetype2/freetype/config/ftconfig.h
+          $(DESTDIR)$(includedir)/qtfreetype2/freetype/config/ftconfig.h
 	$(INSTALL_DATA) $(OBJ_DIR)/ftmodule.h                          \
-          $(DESTDIR)$(includedir)/freetype2/freetype/config/ftmodule.h
+          $(DESTDIR)$(includedir)/qtfreetype2/freetype/config/ftmodule.h
 	$(INSTALL_DATA) $(OBJ_BUILD)/ftoption.h                        \
-          $(DESTDIR)$(includedir)/freetype2/freetype/config/ftoption.h
-	$(INSTALL_SCRIPT) -m 644 $(BUILD_DIR)/freetype2.m4             \
-          $(DESTDIR)$(datadir)/aclocal/freetype2.m4
-	$(INSTALL_SCRIPT) -m 644 $(OBJ_BUILD)/freetype2.pc             \
-          $(DESTDIR)$(libdir)/pkgconfig/freetype2.pc
+          $(DESTDIR)$(includedir)/qtfreetype2/freetype/config/ftoption.h
+	$(INSTALL_SCRIPT) -m 644 $(BUILD_DIR)/qtfreetype2.m4             \
+          $(DESTDIR)$(datadir)/aclocal/qtfreetype2.m4
+	$(INSTALL_SCRIPT) -m 644 $(OBJ_BUILD)/qtfreetype2.pc             \
+          $(DESTDIR)$(libdir)/pkgconfig/qtfreetype2.pc
 ifeq ($(INSTALL_FT2_CONFIG),TRUE)
-	$(INSTALL_SCRIPT) -m 755 $(OBJ_BUILD)/freetype-config          \
-          $(DESTDIR)$(bindir)/freetype-config
-	$(INSTALL_DATA) $(TOP_DIR)/docs/freetype-config.1              \
-          $(DESTDIR)$(mandir)/man1/freetype-config.1
+	$(INSTALL_SCRIPT) -m 755 $(OBJ_BUILD)/qtfreetype-config          \
+          $(DESTDIR)$(bindir)/qtfreetype-config
+	$(INSTALL_DATA) $(TOP_DIR)/docs/qtfreetype-config.1              \
+          $(DESTDIR)$(mandir)/man1/qtfreetype-config.1
 endif
 
 
 uninstall:
 	-$(LIBTOOL) --mode=uninstall $(RM) $(DESTDIR)$(libdir)/$(LIBRARY).$A
-	-$(DELDIR) $(DESTDIR)$(includedir)/freetype2
-	-$(DELETE) $(DESTDIR)$(bindir)/freetype-config
-	-$(DELETE) $(DESTDIR)$(datadir)/aclocal/freetype2.m4
-	-$(DELETE) $(DESTDIR)$(libdir)/pkgconfig/freetype2.pc
-	-$(DELETE) $(DESTDIR)$(mandir)/man1/freetype-config.1
+	-$(DELDIR) $(DESTDIR)$(includedir)/qtfreetype2
+	-$(DELETE) $(DESTDIR)$(bindir)/qtfreetype-config
+	-$(DELETE) $(DESTDIR)$(datadir)/aclocal/qtfreetype2.m4
+	-$(DELETE) $(DESTDIR)$(libdir)/pkgconfig/qtfreetype2.pc
+	-$(DELETE) $(DESTDIR)$(mandir)/man1/qtfreetype-config.1
 
 
 check:
