--- ./src/module.mk.orig	2021-07-11 19:19:32.000000000 +0200
+++ ./src/module.mk	2021-11-08 21:43:06.436194000 +0200
@@ -203,34 +203,34 @@
 
 ALL_LOCAL_TARGETS += $(OCTAVE_CROSS_TOOLS)
 
-install-exec-hook: make-version-links
+#install-exec-hook: make-version-links
+#
+#uninstall-local: remove-version-links
+#
+#make-version-links:
+#	cd $(DESTDIR)$(bindir) && \
+#	for f in $(notdir $(basename $(bin_PROGRAMS))); do \
+#	  mv $$f$(EXEEXT) $$f-$(version)$(EXEEXT) && \
+#	    $(LN_S) $$f-$(version)$(EXEEXT) $$f$(EXEEXT); \
+#	done
+#
+#remove-version-links:
+#	for f in $(notdir $(basename $(bin_PROGRAMS))); do \
+#	  rm -f $(DESTDIR)$(bindir)/$$f-$(version)$(EXEEXT); \
+#	done
+#
+#.PHONY: make-version-links remove-version-links
 
-uninstall-local: remove-version-links
-
-make-version-links:
-	cd $(DESTDIR)$(bindir) && \
-	for f in $(notdir $(basename $(bin_PROGRAMS))); do \
-	  mv $$f$(EXEEXT) $$f-$(version)$(EXEEXT) && \
-	    $(LN_S) $$f-$(version)$(EXEEXT) $$f$(EXEEXT); \
-	done
-
-remove-version-links:
-	for f in $(notdir $(basename $(bin_PROGRAMS))); do \
-	  rm -f $(DESTDIR)$(bindir)/$$f-$(version)$(EXEEXT); \
-	done
-
-.PHONY: make-version-links remove-version-links
-
 ## We need these filenames in the build tree because the wrapper
 ## program (main.cc) will try to invoke the versioned binaries.
 
-%reldir%/octave-cli-$(version)$(EXEEXT): %reldir%/octave-cli$(EXEEXT)
-	$(AM_V_GEN)rm -f $@ && \
-	cd $(@D) && $(LN_S) $(<F) $(@F)
+#%reldir%/octave-cli-$(version)$(EXEEXT): %reldir%/octave-cli$(EXEEXT)
+#	$(AM_V_GEN)rm -f $@ && \
+#	cd $(@D) && $(LN_S) $(<F) $(@F)
 
-%reldir%/octave-gui-$(version)$(EXEEXT): %reldir%/octave-gui$(EXEEXT)
-	$(AM_V_GEN)rm -f $@ && \
-	cd $(@D) && $(LN_S) $(<F) $(@F)
+#%reldir%/octave-gui-$(version)$(EXEEXT): %reldir%/octave-gui$(EXEEXT)
+#	$(AM_V_GEN)rm -f $@ && \
+#	cd $(@D) && $(LN_S) $(<F) $(@F)
 
 %canon_reldir%_CLEANFILES += \
   $(OCTAVE_VERSION_LINKS) \
