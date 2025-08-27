--- ./src/hunspell/affentry.hxx.orig	2012-06-30 00:12:08.000000000 +0300
+++ ./src/hunspell/affentry.hxx	2018-06-21 10:55:31.698305000 +0200
@@ -31,7 +31,7 @@
   struct hentry *      checkword(const char * word, int len, char in_compound, 
                             const FLAG needflag = FLAG_NULL);
 
-  struct hentry *      check_twosfx(const char * word, int len, char in_compound, const FLAG needflag = NULL);
+  struct hentry *      check_twosfx(const char * word, int len, char in_compound, const FLAG needflag);
 
   char *      check_morph(const char * word, int len, char in_compound,
                             const FLAG needflag = FLAG_NULL);
@@ -98,7 +98,7 @@
 //                    const FLAG cclass = FLAG_NULL, const FLAG needflag = FLAG_NULL, char in_compound=IN_CPD_NOT);
                     const FLAG cclass = FLAG_NULL, const FLAG needflag = FLAG_NULL, const FLAG badflag = 0);
 
-  struct hentry *   check_twosfx(const char * word, int len, int optflags, PfxEntry* ppfx, const FLAG needflag = NULL);
+  struct hentry *   check_twosfx(const char * word, int len, int optflags, PfxEntry* ppfx, const FLAG needflag = 0);
 
   char *      check_twosfx_morph(const char * word, int len, int optflags,
                  PfxEntry* ppfx, const FLAG needflag = FLAG_NULL);
