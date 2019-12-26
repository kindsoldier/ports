#
# $Id$
#
PORTNAME=	libxklavier
PORTVERSION=	5.0
CATEGORIES=	x11 gnome
MASTER_SITES=	GNOME

MAINTAINER=	onborodin@gmail.com
COMMENT=	An utility library to make XKB stuff easier

BUILD_DEPENDS=	${LOCALBASE}/lib/pkgconfig/iso-codes.pc:misc/iso-codes
RUN_DEPENDS+=	xkbcomp:xutil/xkbcomp
RUN_DEPENDS+=   ${LOCALBASE}/lib/pkgconfig/iso-codes.pc:misc/iso-codes

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib

LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libxkbfile.so:x11/libxkbfile

LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libintl.so:devel/gettext


#USE_BZIP2=	yes
USES+=		gmake
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --disable-doxygen 
CONFIGURE_ARGS+= --with-xkb-base=${LOCALBASE}/share/X11/xkb
CONFIGURE_ARGS+= --with-xkb-bin-base=${LOCALBASE}/bin
CONFIGURE_ARGS+= --with-xmodmap-base=${LOCALBASE}/share/xmodmap
CONFIGURE_ARGS+= --disable-gtk-doc
CONFIGURE_ARGS+= --with-html-dir=${GNOME_HTML_DIR}
LDFLAGS+=	-L${LOCALBASE}/lib

FILES= ${WRKSRC}/configure ${WRKSRC}/*/Makefile.in ${WRKSRC}/*.pc.in


post-patch:
	${REINPLACE_CMD} -e 's|== "yes|= "yes|g' \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/doc/reference/Makefile.in
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${FILES}
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${FILES}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libart-2.0|libart|g' 	${FILES}

.include <bsd.port.mk>
#EOF

