#
# $Id$
#
PORTNAME=	libsexy
PORTVERSION=	0.1.11
CATEGORIES=	x11-toolkits devel
#MASTER_SITES+=	http://freebsd.unixfreunde.de/sources/
#MASTER_SITES+=	http://releases.chipx86.com/libsexy/libsexy/
MASTER_SITES=	http://releases.chipx86.com/libsexy/libsexy/


MAINTAINER=	onborodin@gmail.com
COMMENT=	Extension widgets for GTK+

LIB_DEPENDS+=	libenchant.so:text/libenchant
LIB_DEPENDS+=	libgdk-pixbuf.so:gnome/libgtk2
LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

BUILD_DEPENDS+= ${LOCALBASE}/lib/pkgconfig/iso-codes.pc:misc/iso-codes
RUN_DEPENDS+= ${LOCALBASE}/lib/pkgconfig/iso-codes.pc:misc/iso-codes


USES+=		gmake
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USES+=		gmake
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
#CONFIGURE_ARGS+= --disable-python
#CONFIGURE_ARGS+= --disable-freetypetest
#CONFIGURE_ARGS+= --disable-gnome-pty-helper


post-patch:
	${REINPLACE_CMD} -e 's|g_strncasecmp|g_ascii_strncasecmp|' \
		${WRKSRC}/libsexy/sexy-spell-entry.c

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
	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-pixbuf-xlib-2.0|gdk-pixbuf-xlib|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gimp-2.0|gimp|' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gimpui-2.0|gimpui|' 	${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/docs/Makefile.in


.include <bsd.port.mk>
#EOF
