--- ./texk/texlive/linked_scripts/texlive/fmtutil.pl.orig	2015-05-06 00:32:32.000000000 +0200
+++ ./texk/texlive/linked_scripts/texlive/fmtutil.pl	2016-02-11 05:46:47.453653000 +0200
@@ -1,7 +1,7 @@
 #!/usr/bin/env perl
 # $Id: fmtutil.pl 37190 2015-05-04 23:36:23Z karl $
 # fmtutil - utility to maintain format files.
-# (Maintained in TeX Live:Master/texmf-dist/scripts/texlive.)
+# (Maintained in TeX Live:Master/texmf/scripts/texlive.)
 # 
 # Copyright 2014-2015 Norbert Preining
 # This file is licensed under the GNU General Public License version 2
@@ -20,8 +20,8 @@
     die "$0: kpsewhich -var-value=TEXMFROOT failed, aborting early.\n";
   }
   chomp($TEXMFROOT);
-  unshift(@INC, "$TEXMFROOT/tlpkg", "$TEXMFROOT/texmf-dist/scripts/texlive");
-  require "mktexlsr.pl";
+  unshift(@INC, "$TEXMFROOT/tlpkg", "$TEXMFROOT/texmf/scripts/texlive");
+  require "mktexlsr.pl";
   TeX::Update->import();
 }
 
@@ -874,14 +874,14 @@
     # TEXMFSYSCONFIG $TEXLIVE/YYYY/texmf-config/web2c/$fn
     # TEXMFSYSVAR    $TEXLIVE/YYYY/texmf-var/web2c/$fn
     # TEXMFLOCAL     $TEXLIVE/texmf-local/web2c/$fn
-    # TEXMFDIST      $TEXLIVE/YYYY/texmf-dist/web2c/$fn
+    # TEXMFDIST      $TEXLIVE/YYYY/texmf/web2c/$fn
     # 
     # root mode (--sys):
     # ==================
     # TEXMFSYSCONFIG $TEXLIVE/YYYY/texmf-config/web2c/$fn
     # TEXMFSYSVAR    $TEXLIVE/YYYY/texmf-var/web2c/$fn
     # TEXMFLOCAL     $TEXLIVE/texmf-local/web2c/$fn
-    # TEXMFDIST      $TEXLIVE/YYYY/texmf-dist/web2c/$fn
+    # TEXMFDIST      $TEXLIVE/YYYY/texmf/web2c/$fn
     #
     @{$opts{'cnffile'}}  = @used_files;
     #
@@ -1092,7 +1092,7 @@
   TEXMFSYSCONFIG \$TEXLIVE/YYYY/texmf-config/web2c/fmtutil.cnf
   TEXMFSYSVAR    \$TEXLIVE/YYYY/texmf-var/web2c/fmtutil.cnf
   TEXMFLOCAL     \$TEXLIVE/texmf-local/web2c/fmtutil.cnf
-  TEXMFDIST      \$TEXLIVE/YYYY/texmf-dist/web2c/fmtutil.cnf
+  TEXMFDIST      \$TEXLIVE/YYYY/texmf/web2c/fmtutil.cnf
 
   For fmtutil:
   TEXMFCONFIG    \$HOME/.texliveYYYY/texmf-config/web2c/fmtutil.cnf
@@ -1101,7 +1101,7 @@
   TEXMFSYSCONFIG \$TEXLIVE/YYYY/texmf-config/web2c/fmtutil.cnf
   TEXMFSYSVAR    \$TEXLIVE/YYYY/texmf-var/web2c/fmtutil.cnf
   TEXMFLOCAL     \$TEXLIVE/texmf-local/web2c/fmtutil.cnf
-  TEXMFDIST      \$TEXLIVE/YYYY/texmf-dist/web2c/fmtutil.cnf
+  TEXMFDIST      \$TEXLIVE/YYYY/texmf/web2c/fmtutil.cnf
   
   (where YYYY is the TeX Live release version).
   
