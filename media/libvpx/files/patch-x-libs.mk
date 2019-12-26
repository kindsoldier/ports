--- ./libs.mk.orig	2017-01-12 22:27:27.000000000 +0200
+++ ./libs.mk	2017-05-08 10:05:46.773672000 +0200
@@ -232,8 +232,8 @@
 LIBS-$(if yes,$(CONFIG_STATIC)) += $(BUILD_PFX)libvpx.a $(BUILD_PFX)libvpx_g.a
 $(BUILD_PFX)libvpx_g.a: $(LIBVPX_OBJS)
 
-SO_VERSION_MAJOR := 4
-SO_VERSION_MINOR := 1
+SO_VERSION_MAJOR := 2
+SO_VERSION_MINOR := 0
 SO_VERSION_PATCH := 0
 ifeq ($(filter darwin%,$(TGT_OS)),$(TGT_OS))
 LIBVPX_SO               := libvpx.$(SO_VERSION_MAJOR).dylib
@@ -255,12 +255,10 @@
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
@@ -300,19 +298,19 @@
 
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
@@ -334,7 +332,7 @@
 	$(qexec)echo 'Conflicts:' >> $@
 	$(qexec)echo 'Libs: -L$${libdir} -lvpx -lm' >> $@
 ifeq ($(HAVE_PTHREAD_H),yes)
-	$(qexec)echo 'Libs.private: -lm -lpthread' >> $@
+	$(qexec)echo 'Libs.private: -lm -pthread' >> $@
 else
 	$(qexec)echo 'Libs.private: -lm' >> $@
 endif
