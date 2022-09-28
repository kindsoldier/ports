--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/HostnotificationQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/HostnotificationQuery.php	2019-10-14 15:53:03.870166000 +0200
@@ -26,12 +26,12 @@
             'notification_contact_name' => 'co.name1'
         ),
         'hostgroups' => array(
-            'hostgroup'         => 'hgo.name1 COLLATE latin1_general_ci',
-            'hostgroup_alias'   => 'hg.alias COLLATE latin1_general_ci',
+            'hostgroup'         => 'hgo.name1 COLLATE utf8_unicode_ci',
+            'hostgroup_alias'   => 'hg.alias COLLATE utf8_unicode_ci',
             'hostgroup_name'    => 'hgo.name1'
         ),
         'hosts' => array(
-            'host_display_name' => 'h.display_name COLLATE latin1_general_ci'
+            'host_display_name' => 'h.display_name COLLATE utf8_unicode_ci'
         ),
         'history' => array(
             'output'    => null,
@@ -54,7 +54,7 @@
         ),
         'notifications' => array(
             'id'                        => 'hn.notification_id',
-            'host'                      => 'ho.name1 COLLATE latin1_general_ci',
+            'host'                      => 'ho.name1 COLLATE utf8_unicode_ci',
             'host_name'                 => 'ho.name1',
             'notification_output'       => 'hn.output',
             'notification_reason'       => 'hn.notification_reason',
@@ -64,13 +64,13 @@
         ),
         'servicegroups' => array(
             'servicegroup_name'     => 'sgo.name1',
-            'servicegroup'          => 'sgo.name1 COLLATE latin1_general_ci',
-            'servicegroup_alias'    => 'sg.alias COLLATE latin1_general_ci'
+            'servicegroup'          => 'sgo.name1 COLLATE utf8_unicode_ci',
+            'servicegroup_alias'    => 'sg.alias COLLATE utf8_unicode_ci'
         ),
         'services' => array(
-            'service'               => 'so.name2 COLLATE latin1_general_ci',
+            'service'               => 'so.name2 COLLATE utf8_unicode_ci',
             'service_description'   => 'so.name2',
-            'service_display_name'  => 's.display_name COLLATE latin1_general_ci',
+            'service_display_name'  => 's.display_name COLLATE utf8_unicode_ci',
             'service_host_name'     => 'so.name1'
         )
     );
@@ -98,7 +98,7 @@
             case 'mysql':
                 $concattedContacts = "GROUP_CONCAT("
                     . "DISTINCT co.name1 ORDER BY co.name1 SEPARATOR ', '"
-                    . ") COLLATE latin1_general_ci";
+                    . ") COLLATE utf8_unicode_ci";
                 break;
             case 'pgsql':
                 // TODO: Find a way to order the contact alias list:
