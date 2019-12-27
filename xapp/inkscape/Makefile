# Created by: Alexander Nedotsukov <bland@FreeBSD.org>
# $FreeBSD: head/graphics/inkscape/Makefile 473116 2018-06-23 08:27:13Z tcberner $

PORTNAME=	inkscape
PORTVERSION=	0.92.3
CATEGORIES=	graphics gnome
MASTER_SITES=	https://inkscape.org/en/gallery/item/12187/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Full featured open source SVG editor

BUILD_DEPENDS=	libboost>=0:devel/libboost64

LIB_DEPENDS+=   libcdr.so:libre/libcdr
LIB_DEPENDS+=   librevenge.so:libre/librevenge
LIB_DEPENDS+=   libdbus.so:gnome/dbus

LIB_DEPENDS+=	libpopt.so:devel/libpopt
LIB_DEPENDS+=	libgc.so:devel/libboehm-gc
LIB_DEPENDS+=	libgsl.so:math/libgsl

LIB_DEPENDS+=	liblcms2.so:graph/liblcms2
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libMagick++.so:graph/imagemagick
LIB_DEPENDS+=	libgtkmm.so:graph/imagemagick

LIB_DEPENDS+=   libgtkspell.so:gnome/libgtkspell
LIB_DEPENDS+=   libharfbuzz.so:gnome/libharfbuzz
LIB_DEPENDS+=   libpoppler.so:graph/libpoppler
LIB_DEPENDS+=   libpangomm.so:gnome/libpangomm
LIB_DEPENDS+=   libcairomm.so:gnome/libcairomm

LIB_DEPENDS+=   libatkmm.so:gnome/libatkmm

##LIB_DEPENDS+=	libpotrace.so:graph/libpotrace

LDFLAGS+=       -L${LOCALBASE}/lib -L${LOCALBASE}/boost64/lib
CPPFLAGS=	-I${LOCALBASE}/include -I${LOCALBASE}/boost64/include

USES+=  tar:bz2 python:2.7,build compiler:c++11-lib cmake pathfix

SHEBANG_FILES+=	cxxtest/cxxtestgen.pl share/extensions/*.p[lm]
SHEBANG_FILES+=	share/extensions/*.py share/extensions/genpofiles.sh
SHEBANG_FILES+=	fix-roff-punct

CMAKE_ARGS+=	-DBOOST_ROOT=${LOCALBASE}/boost64

CMAKE_ARGS+=	-DWITH_GNOME_VFS:BOOL=NO
CMAKE_ARGS+=	-DWITH_LIBCDR:BOOL=YES
CMAKE_ARGS+=	-DWITH_OPENMP:BOOL=NO
CMAKE_ARGS+=	-DWITH_LIBVISIO:BOOL=NO
CMAKE_ARGS+=	-DWITH_NLS:BOOL=NO
CMAKE_ARGS+=	-DWITH_DBUS:BOOL=YES
CMAKE_ARGS+=	-DWITH_LIBWPG:BOOL=NO

CFLAGS+= -I${LOCALBASE}/include
LDFLAGS+= -L${LOCALBASE}/lib

post-patch:
	${REINPLACE_CMD} -e 's|COMMAND python|COMMAND ${PYTHON_VERSION}|g' \
		${WRKSRC}/share/*/CMakeLists.txt

.include <bsd.port.mk>
#EOF
