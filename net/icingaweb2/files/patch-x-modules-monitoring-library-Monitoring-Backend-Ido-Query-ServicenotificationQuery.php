--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ServicenotificationQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ServicenotificationQuery.php	2019-10-14 15:53:03.887649000 +0200
@@ -43,35 +43,35 @@
         ),
         'hostgroups' => array(
             'hostgroup_name'    => 'hgo.name1',
-            'hostgroup'         => 'hgo.name1 COLLATE latin1_general_ci',
-            'hostgroup_alias'   => 'hg.alias COLLATE latin1_general_ci',
+            'hostgroup'         => 'hgo.name1 COLLATE utf8_unicode_ci',
+            'hostgroup_alias'   => 'hg.alias COLLATE utf8_unicode_ci',
         ),
         'hosts' => array(
-            'host_display_name' => 'h.display_name COLLATE latin1_general_ci'
+            'host_display_name' => 'h.display_name COLLATE utf8_unicode_ci'
         ),
         'instances' => array(
             'instance_name' => 'i.instance_name'
         ),
         'notifications' => array(
             'id'                        => 'sn.notification_id',
-            'host'                      => 'so.name1 COLLATE latin1_general_ci',
+            'host'                      => 'so.name1 COLLATE utf8_unicode_ci',
             'host_name'                 => 'so.name1',
             'notification_output'       => 'sn.output',
             'notification_reason'       => 'sn.notification_reason',
             'notification_state'        => 'sn.state',
             'notification_timestamp'    => 'UNIX_TIMESTAMP(sn.start_time)',
             'object_type'               => '(\'service\')',
-            'service'                   => 'so.name2 COLLATE latin1_general_ci',
+            'service'                   => 'so.name2 COLLATE utf8_unicode_ci',
             'service_description'       => 'so.name2',
             'service_host_name'         => 'so.name1'
         ),
         'servicegroups' => array(
             'servicegroup_name'     => 'sgo.name1',
-            'servicegroup'          => 'sgo.name1 COLLATE latin1_general_ci',
-            'servicegroup_alias'    => 'sg.alias COLLATE latin1_general_ci'
+            'servicegroup'          => 'sgo.name1 COLLATE utf8_unicode_ci',
+            'servicegroup_alias'    => 'sg.alias COLLATE utf8_unicode_ci'
         ),
         'services' => array(
-            'service_display_name'  => 's.display_name COLLATE latin1_general_ci'
+            'service_display_name'  => 's.display_name COLLATE utf8_unicode_ci'
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
