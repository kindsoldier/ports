--- ./gtk-doc.make.orig	2010-09-27 22:02:09.000000000 +0300
+++ ./gtk-doc.make	2011-11-07 19:48:55.000000000 +0300
@@ -159,28 +159,6 @@
 	cd $(srcdir) && rm -rf html
 
 install-data-local:
-	@installfiles=`echo $(srcdir)/html/*`; \
-	if test "$$installfiles" = '$(srcdir)/html/*'; \
-	then echo '-- Nothing to install' ; \
-	else \
-	  if test -n "$(DOC_MODULE_VERSION)"; then \
-	    installdir="$(DESTDIR)$(TARGET_DIR)-$(DOC_MODULE_VERSION)"; \
-	  else \
-	    installdir="$(DESTDIR)$(TARGET_DIR)"; \
-	  fi; \
-	  $(mkinstalldirs) $${installdir} ; \
-	  for i in $$installfiles; do \
-	    echo '-- Installing '$$i ; \
-	    $(INSTALL_DATA) $$i $${installdir}; \
-	  done; \
-	  if test -n "$(DOC_MODULE_VERSION)"; then \
-	    mv -f $${installdir}/$(DOC_MODULE).devhelp2 \
-	      $${installdir}/$(DOC_MODULE)-$(DOC_MODULE_VERSION).devhelp2; \
-	    mv -f $${installdir}/$(DOC_MODULE).devhelp \
-	      $${installdir}/$(DOC_MODULE)-$(DOC_MODULE_VERSION).devhelp; \
-	  fi; \
-	  $(GTKDOC_REBASE) --relative --dest-dir=$(DESTDIR) --html-dir=$${installdir}; \
-	fi
 
 uninstall-local:
 	@if test -n "$(DOC_MODULE_VERSION)"; then \
