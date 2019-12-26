--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ServicegroupQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ServicegroupQuery.php	2019-10-14 15:53:03.886331000 +0200
@@ -46,8 +46,8 @@
             'service_description'   => 'so.name2'
         ),
         'servicegroups' => array(
-            'servicegroup'          => 'sgo.name1 COLLATE latin1_general_ci',
-            'servicegroup_alias'    => 'sg.alias COLLATE latin1_general_ci',
+            'servicegroup'          => 'sgo.name1 COLLATE utf8_unicode_ci',
+            'servicegroup_alias'    => 'sg.alias COLLATE utf8_unicode_ci',
             'servicegroup_name'     => 'sgo.name1'
         ),
         'servicestatus' => array(
