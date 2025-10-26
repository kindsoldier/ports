--- ./libs.mk.orig	2024-10-23 20:24:57.000000000 +0200
+++ ./libs.mk	2025-08-26 09:45:52.826673000 +0200
@@ -336,12 +336,10 @@
 LIBVPX_SO_SYMLINKS      :=
 LIBVPX_SO_IMPLIB        := libvpx_dll.a
 else
-LIBVPX_SO               := libvpx.so.$(SO_VERSION_MAJOR).$(SO_VERSION_MINOR).$(SO_VERSION_PATCH)
+LIBVPX_SO               := libvpx.so.$(SO_VERSION_MAJOR)
 SHARED_LIB_SUF          := .so
 EXPORT_FILE             := libvpx.ver
-LIBVPX_SO_SYMLINKS      := $(addprefix $(LIBSUBDIR)/, \
-                             libvpx.so libvpx.so.$(SO_VERSION_MAJOR) \
-                             libvpx.so.$(SO_VERSION_MAJOR).$(SO_VERSION_MINOR))
+LIBVPX_SO_SYMLINKS      := $(addprefix $(LIBSUBDIR)/, libvpx.so)
 endif
 endif
 endif
@@ -369,19 +367,19 @@
 
 define libvpx_symlink_template
 $(1): $(2)
-	@echo "    [LN]     $(2) $$@"
-	$(qexec)mkdir -p $$(dir $$@)
-	$(qexec)ln -sf $(2) $$@
+	echo "    [LN]     $(2) $$@"
+	mkdir -p $$(dir $$@)
+	ln -sf $(2) $$@
 endef
 
 $(eval $(call libvpx_symlink_template,\
     $(addprefix $(BUILD_PFX),$(notdir $(LIBVPX_SO_SYMLINKS))),\
     $(BUILD_PFX)$(LIBVPX_SO)))
+
 $(eval $(call libvpx_symlink_template,\
     $(addprefix $(DIST_DIR)/,$(LIBVPX_SO_SYMLINKS)),\
     $(LIBVPX_SO)))
 
-
 INSTALL-LIBS-$(CONFIG_SHARED) += $(LIBVPX_SO_SYMLINKS)
 INSTALL-LIBS-$(CONFIG_SHARED) += $(LIBSUBDIR)/$(LIBVPX_SO)
 INSTALL-LIBS-$(CONFIG_SHARED) += $(if $(LIBVPX_SO_IMPLIB),$(LIBSUBDIR)/$(LIBVPX_SO_IMPLIB))
@@ -398,12 +396,12 @@
 	$(qexec)echo '' >> $@
 	$(qexec)echo 'Name: vpx' >> $@
 	$(qexec)echo 'Description: WebM Project VPx codec implementation' >> $@
-	$(qexec)echo 'Version: $(VERSION_MAJOR).$(VERSION_MINOR).$(VERSION_PATCH)' >> $@
+	$(qexec)echo 'Version: $(VERSION_MAJOR)' >> $@
 	$(qexec)echo 'Requires:' >> $@
 	$(qexec)echo 'Conflicts:' >> $@
 	$(qexec)echo 'Libs: -L$${libdir} -lvpx -lm' >> $@
 ifeq ($(HAVE_PTHREAD_H),yes)
-	$(qexec)echo 'Libs.private: -lm -lpthread' >> $@
+	$(qexec)echo 'Libs.private: -lm -pthread' >> $@
 else
 	$(qexec)echo 'Libs.private: -lm' >> $@
 endif
