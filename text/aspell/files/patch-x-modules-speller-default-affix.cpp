--- ./modules/speller/default/affix.cpp.orig	2011-07-03 00:09:09.000000000 +0300
+++ ./modules/speller/default/affix.cpp	2014-12-23 09:52:46.000000000 +0200
@@ -796,7 +796,10 @@
     if (se->check(linf, word, ci, gi, sfxopts, ppfx)) return true;
     se = se->next;
   }
-  
+
+  if (word.size() == 0)
+    return false;
+
   // now handle the general case
   byte sp = *((const byte *)(word + word.size() - 1));
   SfxEntry * sptr = sStart[sp];
