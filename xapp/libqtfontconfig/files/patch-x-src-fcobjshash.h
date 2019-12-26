--- ./src/fcobjshash.h.orig	2017-09-21 10:08:17.000000000 +0200
+++ ./src/fcobjshash.h	2019-03-31 10:16:03.207343000 +0200
@@ -1,4 +1,4 @@
-/* ANSI-C code produced by gperf version 3.1 */
+/* ANSI-C code produced by gperf version 3.0.3 */
 /* Command-line: gperf --pic -m 100 fcobjshash.gperf  */
 /* Computed positions: -k'2-3' */
 
@@ -26,7 +26,7 @@
       && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
       && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
 /* The character set is not based on ISO-646.  */
-#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
+#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
 #endif
 
 #line 1 "fcobjshash.gperf"
@@ -47,7 +47,7 @@
 #endif
 #endif
 static unsigned int
-FcObjectTypeHash (register const char *str, register size_t len)
+FcObjectTypeHash (register const char *str, register unsigned int len)
 {
   static const unsigned char asso_values[] =
     {
@@ -184,8 +184,14 @@
     "verticallayout"
   };
 #define FcObjectTypeNamePool ((const char *) &FcObjectTypeNamePool_contents)
+#ifdef __GNUC__
+__inline
+#ifdef __GNUC_STDC_INLINE__
+__attribute__ ((__gnu_inline__))
+#endif
+#endif
 const struct FcObjectTypeInfo *
-FcObjectTypeLookup (register const char *str, register size_t len)
+FcObjectTypeLookup (register const char *str, register unsigned int len)
 {
   enum
     {
@@ -200,113 +206,113 @@
     {
       {-1}, {-1}, {-1}, {-1},
 #line 38 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str4,FC_FILE_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str4,FC_FILE_OBJECT},
 #line 64 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str5,FC_COLOR_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str5,FC_COLOR_OBJECT},
       {-1},
 #line 31 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str7,FC_FOUNDRY_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str7,FC_FOUNDRY_OBJECT},
 #line 22 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str8,FC_FULLNAME_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str8,FC_FULLNAME_OBJECT},
 #line 29 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str9,FC_PIXEL_SIZE_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str9,FC_PIXEL_SIZE_OBJECT},
 #line 61 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str10,FC_PRGNAME_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str10,FC_PRGNAME_OBJECT},
       {-1},
 #line 23 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str12,FC_FULLNAMELANG_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str12,FC_FULLNAMELANG_OBJECT},
 #line 37 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str13,FC_GLOBAL_ADVANCE_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str13,FC_GLOBAL_ADVANCE_OBJECT},
 #line 63 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str14,FC_POSTSCRIPT_NAME_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str14,FC_POSTSCRIPT_NAME_OBJECT},
       {-1},
 #line 34 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str16,FC_HINTING_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str16,FC_HINTING_OBJECT},
 #line 46 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str17,FC_MINSPACE_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str17,FC_MINSPACE_OBJECT},
 #line 33 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str18,FC_HINT_STYLE_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str18,FC_HINT_STYLE_OBJECT},
 #line 54 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str19,FC_FONTFORMAT_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str19,FC_FONTFORMAT_OBJECT},
 #line 52 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str20,FC_FONTVERSION_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str20,FC_FONTVERSION_OBJECT},
 #line 60 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str21,FC_FONT_FEATURES_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str21,FC_FONT_FEATURES_OBJECT},
 #line 41 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str22,FC_OUTLINE_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str22,FC_OUTLINE_OBJECT},
 #line 36 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str23,FC_AUTOHINT_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str23,FC_AUTOHINT_OBJECT},
 #line 43 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str24,FC_DPI_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str24,FC_DPI_OBJECT},
 #line 62 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str25,FC_HASH_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str25,FC_HASH_OBJECT},
 #line 24 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str26,FC_SLANT_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str26,FC_SLANT_OBJECT},
 #line 28 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str27,FC_ASPECT_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str27,FC_ASPECT_OBJECT},
 #line 27 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str28,FC_SIZE_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str28,FC_SIZE_OBJECT},
 #line 45 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str29,FC_SCALE_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str29,FC_SCALE_OBJECT},
 #line 65 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str30,FC_SYMBOL_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str30,FC_SYMBOL_OBJECT},
 #line 40 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str31,FC_RASTERIZER_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str31,FC_RASTERIZER_OBJECT},
 #line 42 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str32,FC_SCALABLE_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str32,FC_SCALABLE_OBJECT},
 #line 32 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str33,FC_ANTIALIAS_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str33,FC_ANTIALIAS_OBJECT},
 #line 51 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str34,FC_LANG_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str34,FC_LANG_OBJECT},
 #line 20 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str35,FC_STYLE_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str35,FC_STYLE_OBJECT},
 #line 18 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str36,FC_FAMILY_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str36,FC_FAMILY_OBJECT},
 #line 44 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str37,FC_RGBA_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str37,FC_RGBA_OBJECT},
 #line 59 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str38,FC_NAMELANG_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str38,FC_NAMELANG_OBJECT},
 #line 21 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str39,FC_STYLELANG_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str39,FC_STYLELANG_OBJECT},
 #line 19 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str40,FC_FAMILYLANG_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str40,FC_FAMILYLANG_OBJECT},
 #line 26 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str41,FC_WIDTH_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str41,FC_WIDTH_OBJECT},
 #line 49 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str42,FC_MATRIX_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str42,FC_MATRIX_OBJECT},
 #line 50 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str43,FC_CHARSET_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str43,FC_CHARSET_OBJECT},
       {-1},
 #line 47 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str45,FC_CHARWIDTH_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str45,FC_CHARWIDTH_OBJECT},
 #line 48 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str46,FC_CHAR_HEIGHT_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str46,FC_CHAR_HEIGHT_OBJECT},
 #line 55 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str47,FC_EMBOLDEN_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str47,FC_EMBOLDEN_OBJECT},
 #line 58 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str48,FC_LCD_FILTER_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str48,FC_LCD_FILTER_OBJECT},
 #line 30 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str49,FC_SPACING_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str49,FC_SPACING_OBJECT},
 #line 39 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str50,FC_INDEX_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str50,FC_INDEX_OBJECT},
 #line 25 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str51,FC_WEIGHT_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str51,FC_WEIGHT_OBJECT},
 #line 53 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str52,FC_CAPABILITY_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str52,FC_CAPABILITY_OBJECT},
 #line 56 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str53,FC_EMBEDDED_BITMAP_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str53,FC_EMBEDDED_BITMAP_OBJECT},
       {-1}, {-1}, {-1}, {-1},
 #line 57 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str58,FC_DECORATIVE_OBJECT},
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str58,FC_DECORATIVE_OBJECT},
 #line 35 "fcobjshash.gperf"
-      {(int)(size_t)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str59,FC_VERTICAL_LAYOUT_OBJECT}
+      {(int)(long)&((struct FcObjectTypeNamePool_t *)0)->FcObjectTypeNamePool_str59,FC_VERTICAL_LAYOUT_OBJECT}
     };
 
   if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
     {
-      register unsigned int key = FcObjectTypeHash (str, len);
+      register int key = FcObjectTypeHash (str, len);
 
-      if (key <= MAX_HASH_VALUE)
+      if (key <= MAX_HASH_VALUE && key >= 0)
         {
           register int o = wordlist[key].name;
           if (o >= 0)
