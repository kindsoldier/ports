#
# $Id: Makefile 2621 2009-09-28 06:39:57Z root $
#
PORTNAME=	mixmos
PORTVERSION=	0.2.0
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_TUCOWS}

MAINTAINER= homeunix7@gmail.com
COMMENT=	A GTK2 audio mixer


LIB_DEPENDS+= libgtk-x11.so:${PORTSDIR}/gnome/libgtk2

GNU_CONFIGURE=	yes
USES=	gmake
CPPFLAGS+= -I${LOCALBASE}/include
LDFLAGS+= -L${LOCALBASE}/lib
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

FILES= ${WRKSRC}/configure

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

ICON_SRC_DIR=	${FILESDIR}

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/applications
	${INSTALL_DATA} ${FILESDIR}/${PORTNAME}.desktop ${STAGEDIR}${PREFIX}/share/applications/

	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${ICON_SRC_DIR}/${PORTNAME}.png \
	    ${STAGEDIR}${PREFIX}/share/pixmaps/${PORTNAME}.png

#.for N in 16 24
#	${MKDIR} ${PREFIX}/share/icons/hicolor/${N}x${N}/apps
#	${INSTALL_DATA} ${ICON_SRC_DIR}/${PORTNAME}_logo_${N}.png \
#	    ${PREFIX}/share/icons/hicolor/${N}x${N}/apps/${PORTNAME}.png
#.endfor

.include <bsd.port.mk>
#EOF

