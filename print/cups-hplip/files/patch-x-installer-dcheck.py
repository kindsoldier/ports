--- ./installer/dcheck.py.orig	2010-07-19 05:17:37.000000000 +0300
+++ ./installer/dcheck.py	2015-01-04 01:11:42.000000000 +0200
@@ -43,7 +43,7 @@
 def update_ld_output():
     # For library checks
     global ld_output
-    status, ld_output = utils.run('%s -p' % os.path.join(utils.which('ldconfig'), 'ldconfig'), log_output=False)
+    status, ld_output = utils.run('%s -r' % os.path.join(utils.which('ldconfig'), 'ldconfig'), log_output=False)
 
     if status != 0:
         log.debug("ldconfig failed.")
@@ -98,7 +98,7 @@
         log.debug("Not found.")
         return False
 
-def check_file(f, dir="/usr/include"):
+def check_file(f, dir="/usr/local/include"):
     log.debug("Searching for file '%s' in '%s'..." % (f, dir))
     for w in utils.walkFiles(dir, recurse=True, abs_paths=True, return_folders=False, pattern=f):
         log.debug("File found at '%s'" % w)
