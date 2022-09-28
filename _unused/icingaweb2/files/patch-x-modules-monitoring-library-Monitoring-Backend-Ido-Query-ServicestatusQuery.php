--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ServicestatusQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ServicestatusQuery.php	2019-10-14 15:53:03.890139000 +0200
@@ -33,7 +33,7 @@
      */
     protected $columnMap = array(
         'checktimeperiods' => array(
-            'service_check_timeperiod' => 'ctp.alias COLLATE latin1_general_ci'
+            'service_check_timeperiod' => 'ctp.alias COLLATE utf8_unicode_ci'
         ),
         'contacts' => [
             'service_contact' => 'sco.name1'
@@ -48,16 +48,16 @@
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
             'host_action_url'       => 'h.action_url',
             'host_address'          => 'h.address',
             'host_address6'         => 'h.address6',
-            'host_alias'            => 'h.alias COLLATE latin1_general_ci',
-            'host_display_name'     => 'h.display_name COLLATE latin1_general_ci',
+            'host_alias'            => 'h.alias COLLATE utf8_unicode_ci',
+            'host_display_name'     => 'h.display_name COLLATE utf8_unicode_ci',
             'host_icon_image'       => 'h.icon_image',
             'host_icon_image_alt'   => 'h.icon_image_alt',
             'host_ipv4'             => 'INET_ATON(h.address)',
@@ -150,15 +150,15 @@
             'instance_name' => 'i.instance_name'
         ),
         'services' => array(
-            'host'                      => 'so.name1 COLLATE latin1_general_ci',
+            'host'                      => 'so.name1 COLLATE utf8_unicode_ci',
             'host_name'                 => 'so.name1',
             'object_type'               => '(\'service\')',
-            'service'                   => 'so.name2 COLLATE latin1_general_ci',
+            'service'                   => 'so.name2 COLLATE utf8_unicode_ci',
             'service_action_url'        => 's.action_url',
             'service_check_interval'    => '(s.check_interval * 60)',
             'service_description'       => 'so.name2',
-            'service_display_name'      => 's.display_name COLLATE latin1_general_ci',
-            'service_host'              => 'so.name1 COLLATE latin1_general_ci',
+            'service_display_name'      => 's.display_name COLLATE utf8_unicode_ci',
+            'service_host'              => 'so.name1 COLLATE utf8_unicode_ci',
             'service_host_name'         => 'so.name1',
             'service_icon_image'        => 's.icon_image',
             'service_icon_image_alt'    => 's.icon_image_alt',
@@ -166,9 +166,9 @@
             'service_notes'             => 's.notes'
         ),
         'servicegroups' => array(
-            'servicegroup'          => 'sgo.name1 COLLATE latin1_general_ci',
+            'servicegroup'          => 'sgo.name1 COLLATE utf8_unicode_ci',
             'servicegroup_name'     => 'sgo.name1',
-            'servicegroup_alias'    => 'sg.alias COLLATE latin1_general_ci'
+            'servicegroup_alias'    => 'sg.alias COLLATE utf8_unicode_ci'
         ),
         'servicestatus' => array(
             'service_acknowledged'                      => 'ss.problem_has_been_acknowledged',
