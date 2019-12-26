--- ./ports/unix/mpconfigport.mk.orig	2018-05-11 08:39:59.000000000 +0200
+++ ./ports/unix/mpconfigport.mk	2018-06-15 22:22:17.237042000 +0200
@@ -9,7 +9,7 @@
 MICROPY_USE_READLINE = 1
 
 # btree module using Berkeley DB 1.xx
-MICROPY_PY_BTREE = 1
+MICROPY_PY_BTREE = 0
 
 # _thread module using pthreads
 MICROPY_PY_THREAD = 1
@@ -21,14 +21,14 @@
 MICROPY_PY_SOCKET = 1
 
 # ffi module requires libffi (libffi-dev Debian package)
-MICROPY_PY_FFI = 1
+MICROPY_PY_FFI = 0
 
 # ussl module requires one of the TLS libraries below
-MICROPY_PY_USSL = 1
+MICROPY_PY_USSL = 0
 # axTLS has minimal size and fully integrated with MicroPython, but
 # implements only a subset of modern TLS functionality, so may have
 # problems with some servers.
-MICROPY_SSL_AXTLS = 1
+MICROPY_SSL_AXTLS = 0
 # mbedTLS is more up to date and complete implementation, but also
 # more bloated. Configuring and building of mbedTLS should be done
 # outside of MicroPython, it can just link with mbedTLS library.
