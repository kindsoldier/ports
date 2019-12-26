#
# $Id$
#
PORTNAME=	libxfce4ui
PORTVERSION=	4.12.1
CATEGORIES=	x11-toolkits xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
DIST_SUBDIR=	xfce4
MASTER_SITE_SUBDIR=	src/xfce/${PORTNAME}/${PORTVERSION:R}

MAINTAINER=	onborodin@gmail.com
COMMENT=	XFce 4 widget library required by xfce4 and xfwm4


LIB_DEPENDS+=	libgio.so:devel/libglib
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libgthread.so:devel/libglib
LIB_DEPENDS+=	libgdk-pixbuf.so:gnome/libgdk-pixbuf
LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libdbus.so:gnome/dbus
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libstartup-notification.so:xfce/libstartup-notification
LIB_DEPENDS+=	libxfconf.so:xfce/libxfce4conf
LIB_DEPENDS+=	libxfce4util.so:xfce/libxfce4util

RUN_DEPENDS+=	${LOCALBASE}/bin/update-desktop-database:xfce/desktop-file-utils
BUILD_DEPENDS+=	${LOCALBASE}/bin/update-desktop-database:xfce/desktop-file-utils

BUILD_DEPENDS+=	${LOCALBASE}/share/icons/hicolor/index.theme:misc/hicolor-icon-theme
RUN_DEPENDS+=	${LOCALBASE}/share/icons/hicolor/index.theme:misc/hicolor-icon-theme


GNU_CONFIGURE=	yes
USES+=		tar:bzip2
USES+=		gmake
USE_LDCONFIG=	yes
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	${CPPFLAGS}
CONFIGURE_ARGS+= --disable-gtk-doc
CONFIGURE_ARGS+= --enable-startup-notification
CONFIGURE_ARGS+= --disable-gladeui
CONFIGURE_ARGS+= --with-libglade-module-path=${LOCALBASE}/lib/libglade

FILES= ${WRKSRC}/configure ${WRKSRC}/*/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's|$$(GMSGFMT)|$$(MSGFMT)|g' \
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
	cd ${WRKSRC}/libxfce4ui && ${CP} libxfce4ui-1.pc.in  libxfce4ui.pc.in
	${REINPLACE_CMD} -e 's,xfce4ui-1,xfce4ui,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	cd ${WRKSRC}/libxfce4kbd-private && ${CP} libxfce4kbd-private-2.pc.in libxfce4kbd-private.pc.in
	${REINPLACE_CMD} -e 's,xfce4kbd-private-2,xfce4kbd-private,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,-@LIBXFCE4KBD_PRIVATE_VERSION_API@,,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,-@LIBXFCE4UI_VERSION_API@,,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,-$$(LIBXFCE4KBD_PRIVATE_VERSION_API),,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,-$$(LIBXFCE4UI_VERSION_API),,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,_1_la,_la,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}


.include <bsd.port.mk>
##EOF
