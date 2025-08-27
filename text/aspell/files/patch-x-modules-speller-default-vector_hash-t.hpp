--- ./modules/speller/default/vector_hash-t.hpp.orig	2011-07-03 00:09:09.000000000 +0300
+++ ./modules/speller/default/vector_hash-t.hpp	2025-08-26 09:08:32.414920000 +0200
@@ -183,7 +183,7 @@
   template<class Parms>
   void VectorHashTable<Parms>::recalc_size() {
     size_ = 0;
-    for (iterator i = begin(); i != this->e; ++i, ++this->_size);
+    for (iterator i = begin(), e = end(); i != e; ++i, ++size_);
   }
 
 }
