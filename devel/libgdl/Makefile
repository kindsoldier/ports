#
# $Id$
#
PORTNAME=	gdl
PORTVERSION=	2.30.1
CATEGORIES=	x11-toolkits gnome
MASTER_SITES=	GNOME
PKGNAMEPREFIX=	lib

MAINTAINER= homeunix7@gmail.com
COMMENT=	Components intended to be shared between GNOME development tools


LIB_DEPENDS+= libgtk-x11.so:gnome/libgtk2


USES+= gmake tar:bz2
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/*.pc.in
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in


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

	${REINPLACE_CMD} -e 's|libbonobo-2.0|libbonobo|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libbonoboui-2.0|libbonoboui|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gconftool-2|gconftool|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-desktop-2.0|gnome-desktop|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gdl-1.0|gdl|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdl-1|gdl|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdl_1|gdl|g' 	${FILES}
#	cd ${WRKSRC} && ${CP} gdl-2.0-uninstalled.pc.in  gdl-uninstalled.pc.in
	cd ${WRKSRC} && ${CP} gdl-1.0.pc.in  gdl.pc.in

.include <bsd.port.mk>
#EOF

