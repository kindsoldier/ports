#
# $Id$
#
PORTNAME=	cups-filters
PORTVERSION=	1.10.0
CATEGORIES=	print
MASTER_SITES=	http://www.openprinting.org/download/cups-filters/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Backends, filters and other software (was part of the core CUPS)

LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	liblcms2.so:graph/liblcms2
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libtiff.so:graph/libtiff

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libcups.so:print/cups-base
LIB_DEPENDS+=	libcupsimage.so:print/cups-base
LIB_DEPENDS+=	libqpdf.so:print/libqpdf
LIB_DEPENDS+=	libavahi-glib.so:net/avahi
LIB_DEPENDS+=	libijs.so:print/libijs
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig

#LIB_DEPENDS+=	libdbus.so:gnome/dbus
LIB_DEPENDS+=	libpoppler.so:graph/libpoppler
BUILD_DEPENDS=	pdftops:graph/libpoppler
RUN_DEPENDS=	pdftops:graph/libpoppler

USES+=		gmake tar:xz
SHEBANG_FILES=	filter/textonly
USE_RC_SUBR=	cups-browsed

GNU_CONFIGURE=	yes
CUPS_SOCKET?=	/var/run/cups.sock
CONFIGURE_ARGS=	--with-cups-domainsocket=${CUPS_SOCKET}
CONFIGURE_ENV+=	ZLIB_CFLAGS="-I/usr/include"
CONFIGURE_ENV+=	ZLIB_LIBS="-lz"
CONFIGURE_ARGS+= --with-pdftops-maxres=1200
CONFIGURE_ARGS+= --with-pdftops=gs
CONFIGURE_ARGS+= --disable-braille
CONFIGURE_ARGS+= --disable-dbus
CONFIGURE_ARGS+= --with-shell="/bin/sh"

CONFIGURE_ARGS+= --enable-avahi
CONFIGURE_ARGS+= --with-browseremoteprotocols="dnssd cups"
#CONFIGURE_ARGS+= --disable-foomatic
#CONFIGURE_ARGS+= --disable-ijs
#CONFIGURE_ARGS+= --disable-imagefilters
#CONFIGURE_ARGS+= --enable-braille
#CONFIGURE_ARGS+= --without-jpeg
#CONFIGURE_ARGS+= --without-png
#CONFIGURE_ARGS+= --without-tiff

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes


SHEBANG_FILES+=	filter/braille/drivers/generic/brftoembosser.in
SHEBANG_FILES+=	filter/braille/drivers/index/imageubrltoindexv3.in
SHEBANG_FILES+=	filter/braille/drivers/index/imageubrltoindexv4.in
SHEBANG_FILES+=	filter/braille/drivers/index/textbrftoindexv3.in
SHEBANG_FILES+=	filter/braille/filters/imagetobrf.in
SHEBANG_FILES+=	filter/braille/filters/texttobrf.in



post-patch:
	${REINPLACE_CMD} 's:-std=c++0x:-std=c++11:' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} 's:glib-2.0:glib:' ${WRKSRC}/configure
	${REINPLACE_CMD} 's:gio-2.0:gio:' ${WRKSRC}/configure
	${REINPLACE_CMD} 's:gio-unix-2.0:gio-unix:' ${WRKSRC}/configure
	${REINPLACE_CMD} 's:dbus-1:dbus:' ${WRKSRC}/configure


post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libcupsfilters.so.1
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libfontembed.so.1

.include <bsd.port.mk>
