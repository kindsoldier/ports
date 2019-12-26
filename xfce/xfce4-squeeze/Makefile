#
#
#
PORTNAME=	squeeze
PORTVERSION=	0.2.3
CATEGORIES=	archivers xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=	src/apps/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4
PKGNAMEPREFIX=	xfce4-

MAINTAINER=	onborodin@gmail.com
COMMENT=	Squeeze is a modern and advanced archive manager

LIB_DEPENDS+=	libgamin.so:devel/libgamin
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libexo.so:xfce/libexo
LIB_DEPENDS+=	libxfce4util.so:xfce/libxfce4util
LIB_DEPENDS+=	libthunar-vfs.so:xfce/xfce4-thunar-vfs


MAKE_JOB_SAFE=	yes
GNU_CONFIGURE=	yes
USES+=		tar:bzip2
USES+=		gmake
USE_LDCONFIG=	yes

CONFIGURE_ARGS+= --program-transform-name=''
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	-I${LOCALBASE}/include 
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I${LOCALBASE}/include


FILES= ${WRKSRC}/configure ${WRKSRC}/*/*.pc.in

post-patch:
	${REINPLACE_CMD} -e "s|docs||g" ${WRKSRC}/Makefile.in

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

	${REINPLACE_CMD} -e 's|libglade-2.0|libglade|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gladeui-1.0|gladeui|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxfce4util-1.0|libxfce4util|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libstartup-notification-1.0|libstartup-notification|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfconf-0|xfconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|exo-0.3|exo|g' 		${FILES}
	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 		${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' ${FILES}
	${REINPLACE_CMD} -e 's|libwnck-1.0|libwnck|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfprint-1.0|xfprint|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfcegui4-1.0|xfcegui4|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxfce4menu-0.1|libxfce4menu|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfce4panel-1.0|xfce4panel|g' 	${FILES}
	${REINPLACE_CMD} -e 's|thunarx-1|thunarx|g' 		${FILES}
	${REINPLACE_CMD} -e 's|thunar-vfs-1|thunar-vfs|g' 	${FILES}

#	${REINPLACE_CMD} -e 's|install:.*|install:|' $$(${FIND} ${WRKSRC}/doc -name Makefile.in)
	${REINPLACE_CMD} -e 's|squeeze-0.2|squeeze|g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's|squeeze_0_2|squeeze|g' $$(${FIND} ${WRKSRC} -name Makefile.in)

	cd ${WRKSRC}/libsqueeze && ${CP} libsqueeze-0.2.pc.in libsqueeze.pc.in
#	cd ${WRKSRC}/thunarx && ${CP}  thunarx-1.pc.in  thunarx.pc.in

.include <bsd.port.mk>
#EOF
