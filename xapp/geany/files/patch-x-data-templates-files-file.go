--- ./data/templates/files/file.go.orig	2019-12-30 08:34:58.340214000 +0200
+++ ./data/templates/files/file.go	2019-12-30 08:34:58.340297000 +0200
@@ -0,0 +1,11 @@
+{fileheader}
+package main
+
+import (
+    "fmt"
+)
+
+func run() error {
+    var err error
+    fmt.Printf("hello!\n")
+    return err
+}
+
+func main() {
+    err := run()
+    if err != nil {
+        fmt.Printf("error: %v\n", err)
+    }
+}
