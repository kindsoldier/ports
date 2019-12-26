#
#
#
PORTNAME=	libxfcegui4
PORTVERSION=	4.10.0 #4.8.1
#PORTEPOCH=	12
CATEGORIES=	x11-toolkits xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
DISTNAME=	libxfcegui4-${PORTVERSION}
DIST_SUBDIR=	xfce4
#http://archive.xfce.org/src/xfce/libxfcegui4/4.8/
MASTER_SITE_SUBDIR=	src/archive/${PORTNAME}/${PORTVERSION:R}

MAINTAINER=	onborodin@gmail.com
COMMENT=	XFce 4 widget library required by xfce4 and xfwm4

LIB_DEPENDS+=	libglade.so:gnome/libglade2
LIB_DEPENDS+=	libstartup-notification.so:xfce/libstartup-notification
LIB_DEPENDS+=	libxfce4util.so:xfce/libxfce4util

RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils

GNU_CONFIGURE=	yes
USES+=		tar:bzip2
USES+=		gmake
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
CFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ARGS+= --disable-gtk-doc
CONFIGURE_ARGS+= --enable-startup-notification
CONFIGURE_ARGS+= --disable-gladeui
CONFIGURE_ARGS+= --with-libglade-module-path=${LOCALBASE}/lib/libglade

FILES= ${WRKSRC}/configure ${WRKSRC}/*/*.pc.in

post-patch:
	@${REINPLACE_CMD} -e 's|$$(GMSGFMT)|$$(MSGFMT)|g' \
		${WRKSRC}/po/Makefile.in.in
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

#	${REINPLACE_CMD} -e 's||libart|g' 	${FILES}

	${REINPLACE_CMD} -e 's|libglade-2.0|libglade|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gladeui-1.0|gladeui|g' 	${FILES}

	${REINPLACE_CMD} -e 's|libxfce4util-1.0|libxfce4util|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libstartup-notification-1.0|libstartup-notification|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfconf-0|xfconf|g' 	${FILES}


	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/docs/Makefile.in

	cd ${WRKSRC}/libxfcegui4 && ${CP} libxfcegui4-1.0.pc.in  libxfcegui4.pc.in
	${REINPLACE_CMD} -e 's,xfcegui4-1.0,xfcegui4,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}

	${REINPLACE_CMD} -e 's|DATADIRNAME=lib|DATADIRNAME=share|g' ${FILES}



.include <bsd.port.mk>
##EOF
