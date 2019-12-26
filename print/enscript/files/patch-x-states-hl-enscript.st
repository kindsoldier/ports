--- ./states/hl/enscript.st.orig	2010-06-02 01:17:49.000000000 +0300
+++ ./states/hl/enscript.st	2010-08-31 14:21:37.000000000 +0300
@@ -487,6 +487,7 @@
   /\.idl$/					idl;
   /\.(hs|lhs|gs|lgs)$/				haskell;
   /\.(pm|pl)$/					perl;
+  /\.(rb|rbw)$/					ruby;
   /\.(eps|EPS|ps|PS)$/				postscript;
   /\.py$/					python;
   /\.pyx$/					pyrex;
@@ -529,6 +530,8 @@
   /-\*- [Ii][Dd][Ll] -\*-/				idl;
   /-\*- [Pp][Ee][Rr][Ll] -\*-/				perl;
   /^#![ \t]*\/.*\/perl/					perl;
+  /-\*- [Rr][Uu][Bb][Yy] -\*-/				ruby;
+  /^#![ \t]*\/.*\/(env )?ruby/				ruby;
   /^From:/						mail;
   /^#![ \t]*(\/usr)?\/bin\/[ngmt]?awk/			awk;
   /^#![ \t]*(\/usr)?\/bin\/sh/				sh;
