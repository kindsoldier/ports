--- ./src/corelib/corelib.pro.orig	2019-01-28 19:11:52.000000000 +0200
+++ ./src/corelib/corelib.pro	2019-03-17 19:22:28.508051000 +0200
@@ -133,7 +133,7 @@
     $$cmake_umbrella_config_version_file.output \
     $$cmake_umbrella_config_module_location_for_install.output
 
-cmake_qt5_umbrella_module_files.path = $$[QT_INSTALL_LIBS]/cmake/Qt5
+cmake_qt5_umbrella_module_files.path = $$[QT_INSTALL_PREFIX]/lib/cmake/Qt5
 
 QMAKE_SUBSTITUTES += \
     ctest_macros_file \
@@ -146,7 +146,7 @@
 
 ctest_qt5_module_files.files += $$ctest_macros_file.output $$cmake_extras_mkspec_dir_for_install.output
 
-ctest_qt5_module_files.path = $$[QT_INSTALL_LIBS]/cmake/Qt5Core
+ctest_qt5_module_files.path = $$[QT_INSTALL_PREFIX]/lib/cmake/Qt5Core
 
 INSTALLS += ctest_qt5_module_files cmake_qt5_umbrella_module_files
 
