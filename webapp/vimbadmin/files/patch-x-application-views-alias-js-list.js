--- ./application/views/alias/js/list.js.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./application/views/alias/js/list.js	2016-07-19 15:37:04.962601000 +0200
@@ -57,6 +57,10 @@
     ossToggle( $( '#' + elid ), "{genUrl controller='alias' action='ajax-toggle-active'}", { "alid": id } );
 };
 
+function toggleInternal( elid, id ){
+    ossToggle( $( '#' + elid ), "{genUrl controller='alias' action='ajax-toggle-internal'}", { "alid": id } );
+};
+
 
 
 function deleteAlias( event ){
@@ -112,6 +116,7 @@
                                     row.address,
                                     row.domain,
                                     formatActive( row.id, row.active ),
+                                    formatInternal( row.id, row.internal ),
                                     formatGoto( row.id, row.goto ),
                                     formatControlls( row.id )
                          ]);
@@ -138,6 +143,15 @@
     <span id="toggle-active-' +id + '" onclick="toggleActive( \'toggle-active-' + id +  '\', ' + id +  ' );" class="btn btn-mini btn-' + active_class + '">' + active_msg + '</span>';
 }
 
+function formatInternal( id, active )
+{
+    var internal_class = internal ? 'success': 'danger';
+    var internal_msg = internal ? 'Yes': 'No';
+    return '<div id="throb-toggle-internal-' + id + '" style="float: right;"></div>\
+    <span id="toggle-internal-' +id + '" onclick="toggleInternal( \'toggle-internal-' + id +  '\', ' + id +  ' );" class="btn btn-mini btn-' + internal_class + '">' + internal_msg + '</span>';
+}
+
+
 function formatGoto( id, goto )
 {
     var str = '<div id="alias-goto-' + id + '" ';
