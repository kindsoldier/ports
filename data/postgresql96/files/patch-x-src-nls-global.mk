--- ./src/nls-global.mk.orig	2016-01-04 23:29:34.000000000 +0200
+++ ./src/nls-global.mk	2016-02-06 13:10:38.756590000 +0200
@@ -99,7 +99,7 @@
 install-po: all-po installdirs-po
 ifneq (,$(LANGUAGES))
 	for lang in $(LANGUAGES); do \
-	  $(INSTALL_DATA) po/$$lang.mo '$(DESTDIR)$(localedir)'/$$lang/LC_MESSAGES/$(CATALOG_NAME)$(SO_MAJOR_VERSION)-$(MAJORVERSION).mo || exit 1; \
+	  $(INSTALL_DATA) po/$$lang.mo '$(DESTDIR)$(localedir)'/$$lang/LC_MESSAGES/$(CATALOG_NAME)$(SO_MAJOR_VERSION).mo || exit 1; \
 	done
 endif
 
@@ -107,7 +107,7 @@
 	$(if $(LANGUAGES),$(MKDIR_P) $(foreach lang, $(LANGUAGES), '$(DESTDIR)$(localedir)'/$(lang)/LC_MESSAGES),:)
 
 uninstall-po:
-	$(if $(LANGUAGES),rm -f $(foreach lang, $(LANGUAGES), '$(DESTDIR)$(localedir)'/$(lang)/LC_MESSAGES/$(CATALOG_NAME)$(SO_MAJOR_VERSION)-$(MAJORVERSION).mo),:)
+	$(if $(LANGUAGES),rm -f $(foreach lang, $(LANGUAGES), '$(DESTDIR)$(localedir)'/$(lang)/LC_MESSAGES/$(CATALOG_NAME)$(SO_MAJOR_VERSION).mo),:)
 
 
 clean-po:
