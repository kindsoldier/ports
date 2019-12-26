--- ./libs/i18n.c.orig	2003-11-10 01:05:36.000000000 +0200
+++ ./libs/i18n.c	2015-10-21 08:50:54.305547000 +0200
@@ -118,7 +118,7 @@
 		if ((i & ~mask) == 0) {
 			int length = strlen(language) + strlen(territory) 
 				+ strlen(codeset) + strlen(modifier);
-			char *var = (char *) malloc(sizeof(char) * length);
+			char *var = (char *) malloc(sizeof(char) * (length + 1));
 			check_ptr(var, "");
 
 			strcpy(var, language);
@@ -144,7 +144,8 @@
 	pos = 0;
 	for (i = 0; i <= mask; i++) {
 		if (progress[i] != NULL) {
-			retval[pos] = progress[i];
+			retval[pos] = strdup(progress[i]);
+			free(progress[i]);
 			++pos;
 		}
 	}
@@ -206,7 +207,7 @@
 		count++;
 	}
 	
-	tab = (char ***)malloc(sizeof(char **) * count);
+	tab = (char ***)malloc(sizeof(char **) * (count + 1));
 	
 	str = strdup(lang);
 	check_ptr(str, "");
@@ -246,7 +247,8 @@
 	while (tab[j] != NULL) {
 		k = 0;
 		while (tab[j][k] != NULL) {
-			retval[pos] = tab[j][k];
+			retval[pos] = strdup(tab[j][k]);
+			free(tab[j][k]);
 			++pos;
 			++k;
 		}
