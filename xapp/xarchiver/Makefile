#
# $Id$
#
PORTNAME=	xarchiver
PORTVERSION=	0.5.4.7
CATEGORIES=	archivers
#MASTER_SITES=	SF
#MASTER_SITE_SUBDIR=	${PORTNAME:tl}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Desktop-agnostic GTK+2 frontend to various archiving tools

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils

USE_GITHUB=	yes
GH_ACCOUNT=	ib


USES+=		gmake #tar:bzip2
GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Makefile.in
#FILES+= ${WRKSRC}/*/Makefile.in
#FILES+= ${WRKSRC}/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's|doc||g' ${WRKSRC}/Makefile.in

	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${FILES}
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 	${FILES}
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
	${REINPLACE_CMD} -e 's| po doc perf| po perf|' 	${WRKSRC}/Makefile*

	${REINPLACE_CMD} -e 's|gdk-$$GTK_API_VERSION|gdk|' 	${FILES}
	${REINPLACE_CMD} -e 's|gdk-\\$$GTK_API_VERSION|gdk|' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-$$GTK_API_VERSION|gtk+|' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-\\$$GTK_API_VERSION|gtk+|' 	${FILES}

	${REINPLACE_CMD} -e 's|vte-0.0|vte|' 	${FILES}
	${REINPLACE_CMD} -e 's|-$$(VTE_API_VERSION)||' 	${FILES}
	${REINPLACE_CMD} -e 's|-$$VTE_API_VERSION||' 	${FILES}
	${REINPLACE_CMD} -e 's|-$${VTE_API_VERSION}||' 	${FILES}
	${REINPLACE_CMD} -e 's|-@VTE_API_VERSION@||' 	${FILES}

	${REINPLACE_CMD} -e 's|gladeui-1.0|gladeui|' 	${FILES}

	${REINPLACE_CMD} -e 's|LT_VERSION_INFO=.*|LT_VERSION_INFO="2:0:2"|' 	${FILES}
	${REINPLACE_CMD} -e 's|LIBVTE_LTVERSION=.*|LIBVTE_LTVERSION="2:0:2"|' 	${FILES}


.include <bsd.port.mk>
#EOF

