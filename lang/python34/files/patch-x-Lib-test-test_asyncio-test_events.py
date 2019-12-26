--- ./Lib/test/test_asyncio/test_events.py.orig	2019-03-18 18:51:26.000000000 +0200
+++ ./Lib/test/test_asyncio/test_events.py	2019-12-25 16:22:07.715598000 +0200
@@ -33,6 +33,12 @@
     from asyncio import test_support as support
 
 
+if ssl is not None:
+    IS_OPENSSL_1_1_1 = ssl.OPENSSL_VERSION_INFO >= (1, 1, 1)
+else:
+    IS_OPENSSL_1_1_1 = False
+
+
 def data_file(filename):
     if hasattr(support, 'TEST_HOME_DIR'):
         fullname = os.path.join(support.TEST_HOME_DIR, filename)
@@ -1049,6 +1055,7 @@
             self.test_create_unix_server_ssl_verify_failed()
 
     @unittest.skipIf(ssl is None, 'No ssl module')
+    @unittest.skipIf(IS_OPENSSL_1_1_1, "bpo-36576: fail on OpenSSL 1.1.1")
     def test_create_server_ssl_match_failed(self):
         proto = MyProto(loop=self.loop)
         server, host, port = self._make_ssl_server(
