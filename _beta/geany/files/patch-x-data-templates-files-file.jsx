--- ./data/templates/files/file.jsx.orig	2019-12-30 08:39:44.312180000 +0200
+++ ./data/templates/files/file.jsx	2019-12-30 08:46:20.622156000 +0200
@@ -0,0 +1,30 @@
+{fileheader}
+
+import React from 'react'
+
+export class Hello extends React.Component {
+
+    static defaultProps = {
+        some: "bare",
+    }
+
+    constructor(props){
+        super(props)
+        this.state = {
+            key: value
+        }
+    }
+
+    render() {
+        return(
+            <div>
+                {this.props.some}
+
+                { this.props.children }
+            </div>
+        )
+    }
+}
+
+export default Hello;
+
