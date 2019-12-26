--- ./pty_termios.c.orig	2004-05-07 19:46:03.000000000 +0300
+++ ./pty_termios.c	2015-03-05 12:23:08.000000000 +0200
@@ -166,7 +166,7 @@
 static char	*slave_bank;
 static char	*slave_num;
 #else
-static char	banks[] = "pqrstuvwxyzPQRSTUVWXYZ";
+static char	banks[] = "pqrsPQRS";	/* FreeBSD scheme */
 static char	master_name[] = "/dev/ptyXX";
 static char	slave_name [] = "/dev/ttyXX";
 #endif /* HAVE_PTYM */
@@ -489,7 +489,7 @@
 		*tty_bank = *bank;
 		*tty_num = '0';
 		if (stat(master_name, &stat_buf) < 0) break;
-		for (hex = "0123456789abcdef";*hex;hex++) {
+		for (hex = "0123456789abcdefghijklmnopqrstuv";*hex;hex++) {
 			*tty_num = *hex;
 			strcpy(slave_name,master_name);
 			*tty_type = 't';
