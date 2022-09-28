--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/CustomvarQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/CustomvarQuery.php	2019-10-14 15:53:03.857529000 +0200
@@ -17,11 +17,11 @@
             'is_json'  => 'cvs.is_json',
         ),
         'objects' => array(
-            'host'                => 'cvo.name1 COLLATE latin1_general_ci',
+            'host'                => 'cvo.name1 COLLATE utf8_unicode_ci',
             'host_name'           => 'cvo.name1',
-            'service'             => 'cvo.name2 COLLATE latin1_general_ci',
+            'service'             => 'cvo.name2 COLLATE utf8_unicode_ci',
             'service_description' => 'cvo.name2',
-            'contact'             => 'cvo.name1 COLLATE latin1_general_ci',
+            'contact'             => 'cvo.name1 COLLATE utf8_unicode_ci',
             'contact_name'        => 'cvo.name1',
             'object_type'         => "CASE cvo.objecttype_id WHEN 1 THEN 'host' WHEN 2 THEN 'service' WHEN 10 THEN 'contact' ELSE 'invalid' END",
             'object_type_id'      => 'cvo.objecttype_id'
