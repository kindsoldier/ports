--- ./exp_main_sub.c.orig	2004-07-02 04:00:06.000000000 +0300
+++ ./exp_main_sub.c	2015-03-05 12:23:08.000000000 +0200
@@ -595,6 +595,9 @@
 	char *args;		/* ptr to string-rep of all args */
 	char *debug_init;
 
+	char *native;
+	Tcl_DString ds;
+
 	exp_argv0 = argv[0];
 
 #ifdef TCL_DEBUGGER
@@ -776,18 +779,23 @@
 	expDiagLog("set argc %s\r\n",argc_rep);
 
 	if (exp_cmdfilename) {
-		Tcl_SetVar(interp,"argv0",exp_cmdfilename,0);
+		native = Tcl_ExternalToUtfDString(NULL, exp_cmdfilename, -1, &ds);
+		Tcl_SetVar(interp,"argv0",native,0);
 		expDiagLog("set argv0 \"%s\"\r\n",exp_cmdfilename);
 	} else {
-		Tcl_SetVar(interp,"argv0",exp_argv0,0);
+		native = Tcl_ExternalToUtfDString(NULL, exp_argv0, -1, &ds);
+		Tcl_SetVar(interp,"argv0",native,0);
 		expDiagLog("set argv0 \"%s\"\r\n",exp_argv0);
 	}
+	Tcl_DStringFree(&ds);
 
 	args = Tcl_Merge(argc-optind,argv+optind);
 	expDiagLogU("set argv \"");
 	expDiagLogU(args);
 	expDiagLogU("\"\r\n");
-	Tcl_SetVar(interp,"argv",args,0);
+	native = Tcl_ExternalToUtfDString(NULL, args, -1, &ds);
+	Tcl_SetVar(interp,"argv",native,0);
+	Tcl_DStringFree(&ds);
 	Tcl_Free(args);
 
 	exp_interpret_rcfiles(interp,my_rc,sys_rc);
