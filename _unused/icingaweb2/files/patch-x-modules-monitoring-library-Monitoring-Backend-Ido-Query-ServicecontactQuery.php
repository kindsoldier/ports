--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ServicecontactQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ServicecontactQuery.php	2019-10-14 15:53:03.882796000 +0200
@@ -24,16 +24,16 @@
 
     protected $columnMap = [
         'contactgroups' => [
-            'contactgroup'       => 'cgo.name1 COLLATE latin1_general_ci',
+            'contactgroup'       => 'cgo.name1 COLLATE utf8_unicode_ci',
             'contactgroup_name'  => 'cgo.name1',
-            'contactgroup_alias' => 'cg.alias COLLATE latin1_general_ci'
+            'contactgroup_alias' => 'cg.alias COLLATE utf8_unicode_ci'
         ],
         'contacts' => [
             'contact_id'                       => 'c.contact_id',
-            'contact'                          => 'co.name1 COLLATE latin1_general_ci',
+            'contact'                          => 'co.name1 COLLATE utf8_unicode_ci',
             'contact_name'                     => 'co.name1',
-            'contact_alias'                    => 'c.alias COLLATE latin1_general_ci',
-            'contact_email'                    => 'c.email_address COLLATE latin1_general_ci',
+            'contact_alias'                    => 'c.alias COLLATE utf8_unicode_ci',
+            'contact_email'                    => 'c.email_address COLLATE utf8_unicode_ci',
             'contact_pager'                    => 'c.pager_address',
             'contact_object_id'                => 'c.contact_object_id',
             'contact_has_host_notfications'    => 'c.host_notifications_enabled',
@@ -52,33 +52,33 @@
             'contact_notify_host_downtime'     => 'c.notify_host_downtime'
         ],
         'hostgroups' => [
-            'hostgroup'       => 'hgo.name1 COLLATE latin1_general_ci',
-            'hostgroup_alias' => 'hg.alias COLLATE latin1_general_ci',
+            'hostgroup'       => 'hgo.name1 COLLATE utf8_unicode_ci',
+            'hostgroup_alias' => 'hg.alias COLLATE utf8_unicode_ci',
             'hostgroup_name'  => 'hgo.name1'
         ],
         'hosts' => [
-            'host'              => 'ho.name1 COLLATE latin1_general_ci',
+            'host'              => 'ho.name1 COLLATE utf8_unicode_ci',
             'host_name'         => 'ho.name1',
             'host_alias'        => 'h.alias',
-            'host_display_name' => 'h.display_name COLLATE latin1_general_ci'
+            'host_display_name' => 'h.display_name COLLATE utf8_unicode_ci'
         ],
         'instances' => [
             'instance_name' => 'i.instance_name'
         ],
         'servicegroups' => [
-            'servicegroup'       => 'sgo.name1 COLLATE latin1_general_ci',
+            'servicegroup'       => 'sgo.name1 COLLATE utf8_unicode_ci',
             'servicegroup_name'  => 'sgo.name1',
-            'servicegroup_alias' => 'sg.alias COLLATE latin1_general_ci'
+            'servicegroup_alias' => 'sg.alias COLLATE utf8_unicode_ci'
         ],
         'services' => [
-            'service'              => 'so.name2 COLLATE latin1_general_ci',
+            'service'              => 'so.name2 COLLATE utf8_unicode_ci',
             'service_description'  => 'so.name2',
-            'service_display_name' => 's.display_name COLLATE latin1_general_ci',
+            'service_display_name' => 's.display_name COLLATE utf8_unicode_ci',
             'service_host_name'    => 'so.name1'
         ],
         'timeperiods' => [
-            'contact_notify_host_timeperiod'    => 'ht.alias COLLATE latin1_general_ci',
-            'contact_notify_service_timeperiod' => 'st.alias COLLATE latin1_general_ci'
+            'contact_notify_host_timeperiod'    => 'ht.alias COLLATE utf8_unicode_ci',
+            'contact_notify_service_timeperiod' => 'st.alias COLLATE utf8_unicode_ci'
         ]
     ];
 
