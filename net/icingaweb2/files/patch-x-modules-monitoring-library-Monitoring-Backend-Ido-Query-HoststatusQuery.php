--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/HoststatusQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/HoststatusQuery.php	2019-10-14 15:53:03.872773000 +0200
@@ -30,7 +30,7 @@
      */
     protected $columnMap = array(
         'checktimeperiods' => array(
-            'host_check_timeperiod' => 'ctp.alias COLLATE latin1_general_ci'
+            'host_check_timeperiod' => 'ctp.alias COLLATE utf8_unicode_ci'
         ),
         'contacts' => [
             'host_contact' => 'hco.name1'
@@ -39,18 +39,18 @@
             'host_contactgroup' => 'hcgo.name1'
         ],
         'hostgroups' => array(
-            'hostgroup'         => 'hgo.name1 COLLATE latin1_general_ci',
-            'hostgroup_alias'   => 'hg.alias COLLATE latin1_general_ci',
+            'hostgroup'         => 'hgo.name1 COLLATE utf8_unicode_ci',
+            'hostgroup_alias'   => 'hg.alias COLLATE utf8_unicode_ci',
             'hostgroup_name'    => 'hgo.name1'
         ),
         'hosts' => array(
-            'host'                  => 'ho.name1 COLLATE latin1_general_ci',
+            'host'                  => 'ho.name1 COLLATE utf8_unicode_ci',
             'host_action_url'       => 'h.action_url',
             'host_address'          => 'h.address',
             'host_address6'         => 'h.address6',
             'host_alias'            => 'h.alias',
             'host_check_interval'   => '(h.check_interval * 60)',
-            'host_display_name'     => 'h.display_name COLLATE latin1_general_ci',
+            'host_display_name'     => 'h.display_name COLLATE utf8_unicode_ci',
             'host_icon_image'       => 'h.icon_image',
             'host_icon_image_alt'   => 'h.icon_image_alt',
             'host_ipv4'             => 'INET_ATON(h.address)',
@@ -161,14 +161,14 @@
             'instance_name' => 'i.instance_name'
         ),
         'servicegroups' => array(
-            'servicegroup'          => 'sgo.name1 COLLATE latin1_general_ci',
+            'servicegroup'          => 'sgo.name1 COLLATE utf8_unicode_ci',
             'servicegroup_name'     => 'sgo.name1',
-            'servicegroup_alias'    => 'sg.alias COLLATE latin1_general_ci'
+            'servicegroup_alias'    => 'sg.alias COLLATE utf8_unicode_ci'
         ),
         'services' => array(
-            'service'                => 'so.name2 COLLATE latin1_general_ci',
+            'service'                => 'so.name2 COLLATE utf8_unicode_ci',
             'service_description'    => 'so.name2',
-            'service_display_name'   => 's.display_name COLLATE latin1_general_ci',
+            'service_display_name'   => 's.display_name COLLATE utf8_unicode_ci',
         )
     );
 
