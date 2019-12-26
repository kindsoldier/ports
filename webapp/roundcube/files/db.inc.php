<?php

//$rcmail_config = array();

//$rcmail_config['db_dsnw'] = 'sqlite:////var/db/sqlite.db?mode=0646';
$rcmail_config['db_dsnw'] = 'pgsql://pcm:albert34@localhost/pcm';
$rcmail_config['db_dsnr'] = '';
$rcmail_config['db_max_length'] = 512000;  // 500K
$rcmail_config['db_persistent'] = FALSE;
$rcmail_config['db_table_users'] = 'users';
$rcmail_config['db_table_identities'] = 'identities';
$rcmail_config['db_table_contacts'] = 'contacts';
$rcmail_config['db_table_session'] = 'session';
$rcmail_config['db_table_cache'] = 'cache';
$rcmail_config['db_table_messages'] = 'messages';

$rcmail_config['db_sequence_users'] = 'user_ids';
$rcmail_config['db_sequence_identities'] = 'identity_ids';
$rcmail_config['db_sequence_contacts'] = 'contact_ids';
$rcmail_config['db_sequence_cache'] = 'cache_ids';
$rcmail_config['db_sequence_messages'] = 'message_ids';

// end db config file
?>
