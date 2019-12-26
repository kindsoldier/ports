# $FreeBSD: head/devel/qt5-qmake/Makefile 492793 2019-02-12 17:43:00Z tcberner $

PORTNAME=	qt5-base
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=	lib
MASTER_SITES+=  http://download.qt.io/official_releases/qt/${DISTVERSION:R}/${DISTVERSION}/submodules/
DISTNAME=       qtbase-everywhere-src-${PORTVERSION}


MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt Makefile generator

LIB_DEPENDS+= libdbus.so:gnome/dbus

LIB_DEPENDS+= libqtfontconfig.so:xapp/libqtfontconfig
LIB_DEPENDS+= libqtfreetype.so:xapp/libqtfreetype2

LIB_DEPENDS+= libpcre2-16.so:text/libpcre2

LIB_DEPENDS+= libSM.so.6:x11/libSM
LIB_DEPENDS+= libX11-xcb.so:x11/libX11
LIB_DEPENDS+= libX11.so.6:x11/libX11

LIB_DEPENDS+= libXau.so.6:x11/libXau
LIB_DEPENDS+= libXdamage.so:x11/libXdamage
LIB_DEPENDS+= libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+= libXext.so:x11/libXext
LIB_DEPENDS+= libXfixes.so:x11/libXfixes
LIB_DEPENDS+= libICE.so:x11/libICE

LIB_DEPENDS+= libxkbcommon.so:x11/libxkbcommon

LIB_DEPENDS+= libxcb-dri2.so:x11/libxcb
LIB_DEPENDS+= libxcb-icccm.so:x11/libxcb-util-wm
LIB_DEPENDS+= libxcb-image.so:x11/libxcb-util-image
LIB_DEPENDS+= libxcb-keysyms.so:x11/libxcb-util-keysyms
LIB_DEPENDS+= libxcb-render-util.so:x11/libxcb-util-renderutil
LIB_DEPENDS+= libxcb-util.so:x11/libxcb-util


USES=	compiler:c++11-lib gmake pkgconfig python:build shebangfix tar:xz ssl

CONFIGURE_ARGS+=	-c++std c++14

SHEBANG_FILES+=	util/harfbuzz/update-harfbuzz
SHEBANG_FILES+=	util/unicode/x11/makeencodings
SHEBANG_FILES+=	src/3rdparty/freetype/src/tools/afblue.pl
SHEBANG_FILES+=	mkspecs/features/data/mac/objc_namespace.sh
SHEBANG_FILES+=	mkspecs/features/uikit/devices.py
SHEBANG_FILES+=	mkspecs/features/uikit/device_destinations.sh

CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
CXXFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib 
#-liconv -lssl -lcrypto
#LDFLAGS+=       -licudata -licui18n -licuio -licutest -licutu -licuuc

#CONFIGURE_ENV+= ICU_INCDIR="${LOCALBASE}/include"
#CONFIGURE_ENV+= ICU_PREFIX="${LOCALBASE}"
#CONFIGURE_ENV+= ICU_LIBS="-licui18n -licuuc -licudata"
#OPENSSL_LIBS='-lssl -lcrypto'

CONFIGURE_ARGS+= -icu
CONFIGURE_ARGS+= -no-iconv

CONFIGURE_ARGS+= -L "${LOCALBASE}/lib"
CONFIGURE_ARGS+= -I "${LOCALBASE}/include"


REINPLACE_ARGS=	-i ""
HAS_CONFIGURE=	yes

CONFIGURE_ARGS+= -prefix ${PREFIX}
CONFIGURE_ARGS+= -opensource 
CONFIGURE_ARGS+= -confirm-license
CONFIGURE_ARGS+= -no-pch
CONFIGURE_ARGS+= -prefix ${PREFIX}
CONFIGURE_ARGS+= -bindir ${PREFIX}/bin
CONFIGURE_ARGS+= -headerdir ${PREFIX}/include/Qt5
CONFIGURE_ARGS+= -libdir ${PREFIX}/lib
CONFIGURE_ARGS+= -plugindir ${PREFIX}/lib/Qt5/plugins
CONFIGURE_ARGS+= -importdir ${PREFIX}/lib/Qt5/imports
CONFIGURE_ARGS+= -datadir ${PREFIX}/share/Qt5
CONFIGURE_ARGS+= -docdir ${PREFIX}/share/Qt5/docs
CONFIGURE_ARGS+= -translationdir ${PREFIX}/share/Qt5/translations
CONFIGURE_ARGS+= -sysconfdir ${PREFIX}/etc/Qt5

CONFIGURE_ARGS+= -nomake examples
CONFIGURE_ARGS+= -nomake tests
CONFIGURE_ARGS+= -archdatadir ${PREFIX}/share/Qt5
CONFIGURE_ARGS+= -libexecdir ${PREFIX}/libexec/Qt5
CONFIGURE_ARGS+= -qmldir ${PREFIX}/share/Qt5/qml
CONFIGURE_ARGS+= -examplesdir ${PREFIX}/share/examples/Qt5
CONFIGURE_ARGS+= -testsdir ${PREFIX}/share/tests/Qt5

CONFIGURE_ARGS+= -no-use-gold-linker
CONFIGURE_ARGS+= -release -no-separate-debug-info
CONFIGURE_ARGS+= -no-eglfs
CONFIGURE_ARGS+= -no-evdev
CONFIGURE_ARGS+= -no-libudev
CONFIGURE_ARGS+= -cups
CONFIGURE_ARGS+= -dbus
CONFIGURE_ARGS+= -no-glib
CONFIGURE_ARGS+= -no-gtk
CONFIGURE_ARGS+= -no-evdev
CONFIGURE_ARGS+= -fontconfig
CONFIGURE_ARGS+= -system-freetype
CONFIGURE_ARGS+= -openssl-linked
#CONFIGURE_ARGS+= -opengl es2

CONFIGURE_ARGS+= -qt-harfbuzz

#CONFIGURE_ARGS+= -no-xcb #-system-xcb
CONFIGURE_ARGS+= -system-pcre
CONFIGURE_ARGS+= -qt-libpng
CONFIGURE_ARGS+= -gui
#CONFIGURE_ARGS+= -qpa xcb

CONFIGURE_ARGS+= -sql-psql
CONFIGURE_ARGS+= -no-sql-mysql
CONFIGURE_ARGS+= -no-compile-examples

DESTDIRNAME=    INSTALL_ROOT

post-install:
	cd ${STAGEDIR}${PREFIX} && ${FIND} . -name '*.orig' -delete
	cd ${STAGEDIR}${PREFIX}/bin && ${MV} fixqt4headers.pl fixqt4headers
	cd ${STAGEDIR}${PREFIX}/bin && ${MV} syncqt.pl syncqt


.include <bsd.port.mk>
