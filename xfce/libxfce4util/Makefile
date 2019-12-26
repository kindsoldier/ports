#
# $Id$
#
PORTNAME=	libxfce4util
PORTVERSION=	4.12.1
CATEGORIES=	x11 xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
DIST_SUBDIR=	xfce4
MASTER_SITE_SUBDIR=	src/xfce/${PORTNAME}/${PORTVERSION:R}

MAINTAINER=	onborodin@gmail.com
COMMENT=	XFce 4 library with non-graphical helper functions

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre

GNU_CONFIGURE=	yes
USES+=		tar:bzip2
USES+=		gmake
USE_LDCONFIG=	yes
CPPFLAGS+=	 -I${LOCALBASE}/include
CFLAGS+=	${CPPFLAGS}
CONFIGURE_ENV+=	CPPFLAGS="${CPPFLAGS}"
CONFIGURE_ENV+=	LDFLAGS="-L${LOCALBASE}/lib"
CONFIGURE_ARGS=	--enable-gtk-doc-html=no 
CONFIGURE_ARGS+= --disable-debug
CONFIGURE_ARGS+= --enable-debug=yes


FILES= ${WRKSRC}/configure ${WRKSRC}/libxfce4util/*.pc.in

post-patch:
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

	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/docs/Makefile.in

	cd ${WRKSRC}/libxfce4util && ${CP} libxfce4util-1.0.pc.in libxfce4util.pc.in
	${REINPLACE_CMD} -e 's,xfce4util-1.0,xfce4util,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}

.include <bsd.port.mk>
#EOF

