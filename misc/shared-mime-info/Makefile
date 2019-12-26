#
# $Id$
#
PORTNAME=	shared-mime-info
PORTVERSION=	0.91
CATEGORIES=	misc gnome
MASTER_SITES=	http://people.freedesktop.org/~hadess/

MAINTAINER=	onborodin@gmail.com
COMMENT=	A MIME type database from the FreeDesktop project


LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre


USES+=		tar:xz
GNU_CONFIGURE=	yes
USES+=		gmake
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

MIMEDIRS=	${LOCALBASE}/share/mime ${PREFIX}/share/mime
#MIMESUBDIRS=	application audio image inode message model multipart \
#		packages text video x-epoc x-content

PKGINSTALL=	${WRKDIR}/pkg-install
SUB_FILES+= 	pkg-install

SUB_LIST+= MIMEDIRS="${MIMEDIRS}"

PLIST_FILES+=	man/man1/update-mime-database.1.gz

post-patch:
	${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' \
		${WRKSRC}/update-mime-database.c

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

	${REINPLACE_CMD} -e 's|^pkgconfigdir = .*|pkgconfigdir = $$(libdir)/pkgconfig|' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF
