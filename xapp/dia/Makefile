#
# $Id: Makefile 2621 2009-09-28 06:39:57Z root $
# $URL$
#
PORTNAME=	dia
PORTVERSION= 0.97.3
CATEGORIES=	graphics gnome

MASTER_SITES=	${MASTER_SITE_GNOME}

MASTER_SITE_SUBDIR=	sources/${PORTNAME}/0.97 #${PORTVERSION}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Diagram creation program, similar to Visio

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/manpages/docbook.xsl:text/docbook-xsl
BUILD_DEPENDS+=	intltool-extract:devel/intltool
BUILD_DEPENDS+=	scrollkeeper-config:gnome/scrollkeeper
BUILD_DEPENDS+=	gnome-doc-tool:gnome/gnome-doc-utils

LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libglib.so:devel/libglib

LIB_DEPENDS+=	libpopt.so:devel/libpopt
LIB_DEPENDS+=	libltdl.so:devel/libtool

LIB_DEPENDS+=	libgconf.so:gnome/gconf2
LIB_DEPENDS+=	libgnomevfs.so:gnome/gnome-vfs

LIB_DEPENDS+=	libgnome.so:gnome/libgnome
LIB_DEPENDS+=	libgnome-keyring.so:gnome/libgnome-keyring
LIB_DEPENDS+=	libgnomecanvas.so:gnome/libgnomecanvas
LIB_DEPENDS+=	libgnomeui.so:gnome/libgnomeui
LIB_DEPENDS+=	libgailutil.so:gnome/libgtk2

LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libogg.so:media/libogg
LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libvorbisfile.so:media/libvorbis

LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libxslt.so:text/libxslt

LIB_DEPENDS+=	libavahi-glib.so:net/avahi
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib

LIB_DEPENDS+=   libcairo.so:gnome/libcairo
LIB_DEPENDS+=   libharfbuzz.so:gnome/libharfbuzz
LIB_DEPENDS+=   libpango.so:gnome/libpango


USES+=		tar:xz
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS=	-I${LOCALBASE}/include -I${WRKSRC}/lib
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ENV+=	LOCALBASE="${LOCALBASE}"
CONFIGURE_ARGS+= --with-hardbooks=no
CONFIGURE_ARGS+= --enable-gnome
#CONFIGURE_ARGS+= --with-python
CONFIGURE_ARGS+= --disable-libemf

post-patch:
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libart-2.0|libart|g' 	${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g' 	${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|glib/gstrfuncs.h>|glib.h>|g' \
		-e 's|glib/gtestutils.h|glib.h|g' \
		${WRKSRC}/objects/custom/shape_typeinfo.c \
		${WRKSRC}/tests/test-objects.c \
		${WRKSRC}/tests/test-boundingbox.c
	${FIND} ${WRKSRC} -name Makefile.in | \
		${XARGS} ${REINPLACE_CMD} -e \
		's,\(^GTK_LIBS.*\),\1 ${PTHREAD_LIBS}, ; \
		 s,\(^GTK_CFLAGS = \),\1 ${PTHREAD_CFLAGS} ,'
	${REINPLACE_CMD} -e 's|echo aout|echo elf|g ; s|/usr/include/libEMF|${LOCALBASE}/include/libEMF|g ; s|-lstdc++||g'  ${WRKSRC}/configure


post-install:
	cd ${STAGEDIR}${PREFIX}/share/dia && ${FIND} . -type d -empty | ${XARGS} ${RMDIR}

.include <bsd.port.mk>
#EOF
