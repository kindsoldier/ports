--- ./ports/unix/mpconfigport.h.orig	2018-05-11 08:39:59.000000000 +0200
+++ ./ports/unix/mpconfigport.h	2018-06-15 22:28:47.828142000 +0200
@@ -43,6 +43,7 @@
 #if !defined(MICROPY_EMIT_ARM) && defined(__arm__) && !defined(__thumb2__)
     #define MICROPY_EMIT_ARM        (1)
 #endif
+
 #define MICROPY_COMP_MODULE_CONST   (1)
 #define MICROPY_COMP_TRIPLE_TUPLE_ASSIGN (1)
 #define MICROPY_COMP_RETURN_IF_EXPR (1)
@@ -67,9 +68,11 @@
 #define MICROPY_STREAMS_NON_BLOCK   (1)
 #define MICROPY_STREAMS_POSIX_API   (1)
 #define MICROPY_OPT_COMPUTED_GOTO   (1)
+
 #ifndef MICROPY_OPT_CACHE_MAP_LOOKUP_IN_BYTECODE
 #define MICROPY_OPT_CACHE_MAP_LOOKUP_IN_BYTECODE (1)
 #endif
+
 #define MICROPY_CAN_OVERRIDE_BUILTINS (1)
 #define MICROPY_PY_FUNCTION_ATTRS   (1)
 #define MICROPY_PY_DESCRIPTORS      (1)
@@ -89,19 +92,23 @@
 #define MICROPY_PY_ARRAY_SLICE_ASSIGN (1)
 #define MICROPY_PY_BUILTINS_SLICE_ATTRS (1)
 #define MICROPY_PY_SYS_EXIT         (1)
+
 #if defined(__APPLE__) && defined(__MACH__)
     #define MICROPY_PY_SYS_PLATFORM  "darwin"
 #else
     #define MICROPY_PY_SYS_PLATFORM  "linux"
 #endif
+
 #define MICROPY_PY_SYS_MAXSIZE      (1)
 #define MICROPY_PY_SYS_STDFILES     (1)
 #define MICROPY_PY_SYS_EXC_INFO     (1)
 #define MICROPY_PY_COLLECTIONS_DEQUE (1)
 #define MICROPY_PY_COLLECTIONS_ORDEREDDICT (1)
+
 #ifndef MICROPY_PY_MATH_SPECIAL_FUNCTIONS
 #define MICROPY_PY_MATH_SPECIAL_FUNCTIONS (1)
 #endif
+
 #define MICROPY_PY_CMATH            (1)
 #define MICROPY_PY_IO_FILEIO        (1)
 #define MICROPY_PY_GC_COLLECT_RETVAL (1)
@@ -123,15 +130,19 @@
 #define MICROPY_PY_UHEAPQ           (1)
 #define MICROPY_PY_UTIMEQ           (1)
 #define MICROPY_PY_UHASHLIB         (1)
+
 #if MICROPY_PY_USSL
 #define MICROPY_PY_UHASHLIB_SHA1    (1)
 #endif
+
 #define MICROPY_PY_UBINASCII        (1)
 #define MICROPY_PY_UBINASCII_CRC32  (1)
 #define MICROPY_PY_URANDOM          (1)
+
 #ifndef MICROPY_PY_USELECT_POSIX
 #define MICROPY_PY_USELECT_POSIX    (1)
 #endif
+
 #define MICROPY_PY_WEBSOCKET        (1)
 #define MICROPY_PY_MACHINE          (1)
 #define MICROPY_PY_MACHINE_PULSE    (1)
