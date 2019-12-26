--- ./config/Makefile.SH.orig	2010-01-09 19:59:48.000000000 +0200
+++ ./config/Makefile.SH	2017-01-29 17:23:36.250171000 +0200
@@ -208,7 +208,6 @@
 MV = mv -f
 LN = $ln_s
 CP_F = cp -f
-STRIP      = strip
 STRIPFLAGS =
 
 # Change these installation directories to suit your needs.
@@ -221,9 +220,9 @@
 DATADIR   = "\$(DESTDIR)$datadir"
 SYSDATADIR= "\$(DESTDIR)$sysdatadir"
 
-EXDIR     = \$(DATADIR)/examples
+EXDIR     = \$(DESTDIR)/\$(PREFIX)/share/examples/pari
 MISCDIR   = \$(DATADIR)/misc
-DOCDIR    = \$(DATADIR)/doc
+DOCDIR    = \$(DESTDIR)/\$(PREFIX)/share/doc/pari
 
 INSTALL = $cfg/install
 INSTALL_PROGRAM = \$(INSTALL)
@@ -332,10 +331,9 @@
 install-bin-dyn: gp-dyn
 	-mkdir -p \$(BINDIR)
 	-\$(RM) \$(BINDIR)/gp-$version$exe_suff \$(BINDIR)/gp$exe_suff
-	\$(LD) -o \$(BINDIR)/gp-$version$exe_suff \$(LDFLAGS) \$(OBJSGP) \$(RUNPTH_FINAL) \$(TOPLDDYN) \$(LDDYN) \$(PLOTLIBS) \$(LIBS)
-	-\$(STRIP) \$(STRIPFLAGS) \$(BINDIR)/gp-$version$exe_suff
-	$postconfig \$(BINDIR)/gp-$version$exe_suff
-	-\$(LN) gp-$version$exe_suff \$(BINDIR)/gp$exe_suff
+	\$(LD) -o \$(BINDIR)/gp$exe_suff \$(LDFLAGS) \$(OBJSGP) \$(RUNPTH_FINAL) \$(TOPLDDYN) \$(LDDYN) \$(PLOTLIBS) \$(LIBS)
+	-\$(STRIP) \$(STRIPFLAGS) \$(BINDIR)/gp$exe_suff
+	$postconfig \$(BINDIR)/gp$exe_suff
 
 install-bin-sta: gp-sta
 	-mkdir -p \$(BINDIR)
@@ -350,9 +348,8 @@
 	-mkdir -p \$(MANDIR)
 	-\$(RM) \$(MANDIR)/pari.1 \$(MANDIR)/gp.1 \$(MANDIR)/gp-$version.1
 	\$(INSTALL_DATA) $doc/gphelp.1 \$(MANDIR)
-	\$(INSTALL_DATA) $doc/gp.1 \$(MANDIR)/gp-$version.1
+	\$(INSTALL_DATA) $doc/gp.1 \$(MANDIR)/gp.1
 	-\$(LN) gp.1 \$(MANDIR)/pari.1
-	-\$(LN) gp-$version.1 \$(MANDIR)/gp.1
 
 install-misc: $install_emacs_files
 	-mkdir -p \$(MISCDIR) \$(BINDIR)
@@ -377,7 +374,7 @@
 
 install-doc::
 	-mkdir -p \$(BINDIR) \$(DOCDIR)
-	-cd $doc; \$(MAKE) all
+	#-cd $doc; \$(MAKE) all
 	-\$(INSTALL_PROGRAM) $doc/gphelp    \$(BINDIR)
 	-\$(INSTALL_DATA) $doc/Makefile     \$(DOCDIR)
 	-\$(INSTALL_DATA) $doc/translations \$(DOCDIR)
