#
# $Id: Makefile 2645 2009-10-02 09:25:34Z root $
#
PORTNAME=	qt
PORTVERSION=	4.8.7
CATEGORIES=	x11-toolkits
MASTER_SITES+=	http://download.qt.io/archive/qt/${PORTVERSION:R}/${PORTVERSION}/
DISTNAME=	${PORTNAME}-everywhere-opensource-src-${PORTVERSION}
PKGNAMEPREFIX=  lib
PKGNAMESUFFIX=  ${PORTVERSION:R:R}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Multiplatform C++ application framework

LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
LIB_DEPENDS+=	libintl.so:devel/gettext

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libtiff.so:graph/libtiff

LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libxml2.so:text/libxml2

LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11-xcb.so:x11/libX11
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXcursor.so:x11/libXcursor
LIB_DEPENDS+=	libXdamage.so:x11/libXdamage
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXfixes.so:x11/libXfixes
LIB_DEPENDS+=	libXinerama.so:x11/libXinerama
LIB_DEPENDS+=	libXrandr.so:x11/libXrandr
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libXxf86vm.so:x11/libXxf86vm
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libGL.so:graph/libmesa
LIB_DEPENDS+=	libglapi.so:graph/libmesa

LIB_DEPENDS+=	libdbus.so:gnome/dbus
LIB_DEPENDS+=	libcups.so:print/cups-base

BUILD_DEPENDS+= postgresql>=0:data/postgresql
BUILD_DEPENDS+= mariadb>=0:data/mariadb


HAS_CONFIGURE=	yes
USES+=		gmake
INSTALLS_SHLIB=	yes
NO_MTREE=	yes
CONFIGURE_ENV+=	QTDIR=${WRKSRC} 
CONFIGURE_ENV+=	PATH=${WRKSRC}/bin:$$PATH
LDFLAGS+=	-L${LOCALBASE}/lib -liconv
CPPFLAGS+=	-I${LOCALBASE}/include/dbus -I${LOCALBASE}/include/dbus/include
CPPFLAGS+=	-I${LOCALBASE}/include/glib -I${LOCALBASE}/lib/glib/include -I${LOCALBASE}/include
CFLAGS+=	${CPPFLAGS} 

USE_CXXSTD=	gnu++98


CONFIGURE_ARGS+= -fast
CONFIGURE_ARGS+= -gtkstyle
CONFIGURE_ARGS+= -dbus-linked
CONFIGURE_ARGS+= -glib
CONFIGURE_ARGS+= -system-freetype
CONFIGURE_ARGS+= -fontconfig
#CONFIGURE_ARGS+= -no-openssl
CONFIGURE_ARGS+= -openssl-linked
CONFIGURE_ARGS+= -qt3support
CONFIGURE_ARGS+= -system-libpng
CONFIGURE_ARGS+= -system-libjpeg
CONFIGURE_ARGS+= -system-zlib
CONFIGURE_ARGS+= -stl
CONFIGURE_ARGS+= -system-sqlite
CONFIGURE_ARGS+= -xcursor
CONFIGURE_ARGS+= -xfixes
CONFIGURE_ARGS+= -xrandr
CONFIGURE_ARGS+= -xrender
CONFIGURE_ARGS+= -xinerama
CONFIGURE_ARGS+= -xshape
CONFIGURE_ARGS+= -sm
CONFIGURE_ARGS+= -shared 
CONFIGURE_ARGS+= -verbose 

CONFIGURE_ARGS+= -I '${LOCALBASE}/include'
CONFIGURE_ARGS+= -L '${LOCALBASE}/lib'

LIBS+= -L${LOCALBASE}/lib -iconv

CONFIGURE_ARGS+= -qt-sql-sqlite
CONFIGURE_ARGS+= -plugin-sql-sqlite
CONFIGURE_ARGS+= -no-sql-ibase
CONFIGURE_ARGS+= -plugin-sql-mysql
CONFIGURE_ARGS+= -no-sql-odbc
CONFIGURE_ARGS+= -plugin-sql-psql
CONFIGURE_ARGS+= -xmlpatterns
CONFIGURE_ARGS+= -no-nis
CONFIGURE_ARGS+= -no-webkit
CONFIGURE_ARGS+= -no-3dnow
CONFIGURE_ARGS+= -no-sse3
CONFIGURE_ARGS+= -no-ssse3
CONFIGURE_ARGS+= -no-sse4.1
CONFIGURE_ARGS+= -no-sse4.2
CONFIGURE_ARGS+= -no-avx
CONFIGURE_ARGS+= -no-neon
CONFIGURE_ARGS+= -no-phonon
CONFIGURE_ARGS+= -no-phonon-backend
CONFIGURE_ARGS+= -no-javascript-jit
CONFIGURE_ARGS+= -no-separate-debug-info

CONFIGURE_ARGS+= -opensource -confirm-license

SHORTNAME= Qt4
DOC_SUBDIR= 		share/docs/${SHORTNAME}
INCLUDE_SUBDIR=		include/${SHORTNAME}
SYSCONF_SUBDIR=		etc/${SHORTNAME}
TRANS_SUBDIR=		share/${SHORTNAME}/translations
PLUGIN_SUBDIR=		lib/${SHORTNAME}/plugin
EXAMPLES_SUBDIR=	share/examples/${SHORTNAME}
DEMOS_SUBDIR=		libexec/${SHORTNAME}/demos
DATA_SUBDIR=		share/${SHORTNAME}
IMPORTS_SUBDIR=		lib/${SHORTNAME}/imports

PLIST_SUB+= DOC_SUBDIR=${DOC_SUBDIR}
PLIST_SUB+= INCLUDE_SUBDIR=${INCLUDE_SUBDIR}
PLIST_SUB+= SYSCONF_SUBDIR=${SYSCONF_SUBDIR}
PLIST_SUB+= PLUGIN_SUBDIR=${PLUGIN_SUBDIR}
PLIST_SUB+= TRANS_SUBDIR=${TRANS_SUBDIR}
PLIST_SUB+= SHORTNAME=${SHORTNAME}
PLIST_SUB+= EXAMPLES_SUBDIR=${EXAMPLES_SUBDIR}
PLIST_SUB+= DEMOS_SUBDIR=${DEMOS_SUBDIR}
PLIST_SUB+= DATA_SUBDIR=${DATA_SUBDIR}

CONFIGURE_ARGS+= -prefix ${PREFIX}
CONFIGURE_ARGS+= -bindir ${PREFIX}/bin
CONFIGURE_ARGS+= -datadir ${PREFIX}/${DATA_SUBDIR}
CONFIGURE_ARGS+= -demosdir ${PREFIX}/${DEMOS_SUBDIR}
CONFIGURE_ARGS+= -docdir ${PREFIX}/${DOC_SUBDIR}
CONFIGURE_ARGS+= -examplesdir ${PREFIX}/${EXAMPLES_SUBDIR}
CONFIGURE_ARGS+= -headerdir ${PREFIX}/${INCLUDE_SUBDIR}
CONFIGURE_ARGS+= -libdir ${PREFIX}/lib
CONFIGURE_ARGS+= -plugindir ${PREFIX}/${PLUGIN_SUBDIR}
CONFIGURE_ARGS+= -sysconfdir ${PREFIX}/${SYSCONF_SUBDIR}
CONFIGURE_ARGS+= -translationdir ${PREFIX}/${TRANS_SUBDIR}
CONFIGURE_ARGS+= -importdir ${PREFIX}/${IMPORTS_SUBDIR}

MAKE_ENV+= TMPDIR=${TMPDIR}
MAKE_ENV+= QTDIR=${WRKSRC}
MAKE_ENV+= LD_LIBRARY_PATH=${WRKSRC}/lib
MAKE_ENV+= PATH=${WRKSRC}/bin:$$PATH

CXX=	clang++
CONFIGURE_ENV+= CXX='${CXX} ${CFLAGS}'

DESTDIRNAME=	INSTALL_ROOT

post-patch:
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,gthread-2.0,gthread,g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,dbus-1,dbus,g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,gtk+-2.0,gtk+,g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,gstreamer-0.10,gstreamer,g'	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,gstreamer-plugins-base-0.10,gstreamer-plugins-base,g'	${WRKSRC}/configure

.include <bsd.port.pre.mk>

PLIST=	${PKGDIR}/pkg-plist.${ARCH}

.include <bsd.port.post.mk>
#EOF

