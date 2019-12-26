--- ./src/corelib/io/qlockfile_unix.cpp.orig	2019-01-28 19:11:52.000000000 +0200
+++ ./src/corelib/io/qlockfile_unix.cpp	2019-03-17 19:22:28.513085000 +0200
@@ -75,6 +75,8 @@
 #   include <sys/sysctl.h>
 # if !defined(Q_OS_NETBSD)
 #   include <sys/user.h>
+#   include <kvm.h>
+#   include <libprocstat.h>
 # endif
 #endif
 
@@ -246,23 +248,44 @@
     struct kinfo_proc kp;
     int mib[6] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, (int)pid, sizeof(struct kinfo_proc), 1 };
 # else
+    QString nameFromProcstat;
+    kvm_t *kvm = kvm_open(nullptr, "/dev/null", nullptr, O_RDONLY, "");
+    if (kvm) {
+        int cnt;
+        struct kinfo_proc *kp = kvm_getprocs(kvm, KERN_PROC_PID, getpid(), &cnt);
+        if (kp) {
+            struct procstat *ps = procstat_open_sysctl();
+            char **argv = procstat_getargv(ps, kp, 0);
+            if (argv != nullptr && argv[0] != nullptr)
+                nameFromProcstat = QString::fromLocal8Bit(argv[0]);
+            procstat_close(ps);
+        }
+        kvm_close(kvm);
+    }
     struct kinfo_proc kp;
     int mib[4] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, (int)pid };
 # endif
-    size_t len = sizeof(kp);
-    u_int mib_len = sizeof(mib)/sizeof(u_int);
-
-    if (sysctl(mib, mib_len, &kp, &len, NULL, 0) < 0)
-        return QString();
+    if (nameFromProcstat.isEmpty()) {
+        size_t len = sizeof(kp);
+        u_int mib_len = sizeof(mib)/sizeof(u_int);
 
+        if (sysctl(mib, mib_len, &kp, &len, NULL, 0) < 0)
+            return QString();
+    }
 # if defined(Q_OS_OPENBSD) || defined(Q_OS_NETBSD)
     if (kp.p_pid != pid)
         return QString();
     QString name = QFile::decodeName(kp.p_comm);
 # else
-    if (kp.ki_pid != pid)
+    QString name;
+    if (!nameFromProcstat.isEmpty()) {
+        QFileInfo fi(nameFromProcstat);
+        name = fi.fileName();
+    }
+    else if (kp.ki_pid != pid)
         return QString();
-    QString name = QFile::decodeName(kp.ki_comm);
+    else
+        name = QFile::decodeName(kp.ki_comm);
 # endif
     return name;
 
