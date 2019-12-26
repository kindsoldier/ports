##
#
#
PORTNAME=	libwnck
PORTVERSION=	2.30.7
CATEGORIES=	x11-toolkits gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	onborodin@gmail.com
COMMENT=	Library used for writing pagers and taskslists

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libgthread.so:devel/libglib
LIB_DEPENDS+=	libXRes.so:x11/libXres
LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libstartup-notification.so:xfce/libstartup-notification


USES+=		tar:bzip2
GNU_CONFIGURE=	yes
USES+=		gmake
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--with-html-dir=${PREFIX}/share/doc
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" LDFLAGS="-L${LOCALBASE}/lib"

CONFIGURE_ARGS+= --enable-startup-notification 
CONFIGURE_ARGS+= --enable-introspection=no

FILES= ${WRKSRC}/configure ${WRKSRC}/*.pc.in


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

	${REINPLACE_CMD} -e 's|libstartup-notification-1.0|libstartup-notification|g' 	${FILES}


	${REINPLACE_CMD} -e 's,wnck-1.0,wnck,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES} 
	${REINPLACE_CMD} -e 's,wnck-1,wnck,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES} 
	cd ${WRKSRC} && ${CP} libwnck-1.0-uninstalled.pc.in libwnck-uninstalled.pc.in
	cd ${WRKSRC} && ${CP} libwnck-1.0.pc.in libwnck.pc.in

	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/doc*/Makefile.in


.include <bsd.port.mk>
#EOF
