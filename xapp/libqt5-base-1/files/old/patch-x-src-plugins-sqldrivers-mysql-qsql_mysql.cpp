--- ./src/plugins/sqldrivers/mysql/qsql_mysql.cpp.orig	2019-01-28 19:11:52.000000000 +0200
+++ ./src/plugins/sqldrivers/mysql/qsql_mysql.cpp	2019-03-17 19:22:28.531459000 +0200
@@ -80,6 +80,14 @@
 // by redefining it we can regain source compatibility.
 using my_bool = decltype(mysql_stmt_bind_result(nullptr, nullptr));
 
+// MYSQL 8.0.1 no longer uses the my_bool type:
+// https://dev.mysql.com/doc/relnotes/mysql/8.0/en/news-8-0-1.html
+#if (MYSQL_VERSION_ID >= 80001) && !defined(MARIADB_BASE_VERSION)
+typedef bool mysql_bool;
+#else
+typedef my_bool mysql_bool;
+#endif
+
 QT_BEGIN_NAMESPACE
 
 class QMYSQLDriverPrivate : public QSqlDriverPrivate
@@ -238,7 +246,7 @@
               myField(0), type(QVariant::Invalid)
         {}
         char *outField;
-        my_bool nullIndicator;
+        mysql_bool nullIndicator;
         ulong bufLength;
         MYSQL_FIELD *myField;
         QVariant::Type type;
@@ -992,7 +1000,7 @@
     MYSQL_BIND* currBind;
     QVector<MYSQL_TIME *> timeVector;
     QVector<QByteArray> stringVector;
-    QVector<my_bool> nullVector;
+    QVector<mysql_bool> nullVector;
 
     const QVector<QVariant> values = boundValues();
 
@@ -1013,7 +1021,7 @@
 
             currBind = &d->outBinds[i];
 
-            nullVector[i] = static_cast<my_bool>(val.isNull());
+            nullVector[i] = static_cast<mysql_bool>(val.isNull());
             currBind->is_null = &nullVector[i];
             currBind->length = 0;
             currBind->is_unsigned = 0;
@@ -1110,7 +1118,7 @@
     d->rowsAffected = mysql_stmt_affected_rows(d->stmt);
 
     if (isSelect()) {
-        my_bool update_max_length = true;
+        mysql_bool update_max_length = true;
 
         r = mysql_stmt_bind_result(d->stmt, d->inBinds);
         if (r != 0) {
@@ -1321,7 +1329,7 @@
     QString sslCAPath;
     QString sslCipher;
 #if MYSQL_VERSION_ID >= 50000
-    my_bool reconnect=false;
+    mysql_bool reconnect=false;
     uint connectTimeout = 0;
     uint readTimeout = 0;
     uint writeTimeout = 0;
