#
# $Id$
#
PORTNAME=	xfce4-session
PORTVERSION=	4.12.1
CATEGORIES=	x11-wm xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
DIST_SUBDIR=	xfce4
MASTER_SITE_SUBDIR=	src/xfce/${PORTNAME}/${PORTVERSION:R}


MAINTAINER=	onborodin@gmail.com
COMMENT=	Session manager for the Xfce 4 desktop environment

#LIB_DEPENDS+=	libgconf.so:x11-gnome/gconf2
#LIB_DEPENDS+=	libORBit.so:x11-gnome/libORBit2
#LIB_DEPENDS+=	libgnome-keyring.so:x11-gnome/libgnome-keyring



LIB_DEPENDS+=	libintl.so:devel/gettext

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libgthread.so:devel/libglib

LIB_DEPENDS+=	libXinerama.so:x11/libXinerama
LIB_DEPENDS+=	libXrandr.so:x11/libXrandr
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libXRes.so:x11/libXres

LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

LIB_DEPENDS+=	libdbus.so:gnome/dbus
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libstartup-notification.so:xfce/libstartup-notification
LIB_DEPENDS+=	libwnck.so:gnome/libwnck
LIB_DEPENDS+=	libxfconf.so:xfce/libxfce4conf
LIB_DEPENDS+=	libxfce4ui.so:xfce/libxfce4ui
LIB_DEPENDS+=	libxfce4util.so:xfce/libxfce4util

LIB_DEPENDS+=	libpolkit-gobject.so:xfce/polkit
LIB_DEPENDS+=	libupower-glib.so:xfce/upower

BUILD_DEPENDS+=	iceauth:xutil/iceauth

GNU_CONFIGURE=	yes
USES+=		tar:bzip2
USES+=		gmake
USE_LDCONFIG=	yes


CONFIGURE_ARGS+= --program-transform-name=''
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+= -L${LOCALBASE}/lib
CFLAGS+=	${CPPFLAGS}
CONFIGURE_ENV+=	CPPFLAGS="${CPPFLAGS}"
CONFIGURE_ARGS+= --enable-legacy-sm
CONFIGURE_ARGS+= --with-xsession-prefix=${PREFIX}
#CONFIGURE_ARGS+= --disable-systemd
CONFIGURE_ARGS+= --with-backend=freebsd
#CONFIGURE_ARGS+= --enable-consolekit
#CONFIGURE_ARGS+= --disable-hal
CONFIGURE_ARGS+= --enable-polkit
CONFIGURE_ARGS+= --enable-upower

#CONFIGURE_ARGS+= --enable-panel-plugin
#CONFIGURE_ARGS+= --enable-session-screenshots


FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/*/*.pc.in
#FILES+= ${WRKSRC}/xfce4-session/Makefile.in


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

	${REINPLACE_CMD} -e 's,xfsm-4.6,xfsm,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,xfsm_4_6,xfsm,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}

	${REINPLACE_CMD} -e 's,xfce4-session-4.6,xfce4-session,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,xfce4-session-2.0,xfce4-session,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,xfce4-session.0,xfce4-session,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}

	cd ${WRKSRC}/libxfsm && ${CP}  xfce4-session-2.0.pc.in   xfce4-session.pc.in 


	${REINPLACE_CMD} -e 's|gnome-keyring-1|gnome-keyring|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}

	${REINPLACE_CMD} -e 's|libxfce4ui-1|libxfce4ui|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxfce4kbd-private-2|libxfce4kbd-private|g' ${FILES}

	${REINPLACE_CMD} -e 's,polkit-gobject-1,polkit-gobject,g'  ${FILES}
#	${REINPLACE_CMD} -e 's,polkit-1,polkit,g'  ${FILES} 

	${REINPLACE_CMD} -e 's,polkit-1,polkit,g' ${WRKSRC}/xfce4-session/Makefile.in



#	${REINPLACE_CMD} -e 's|install:.*|install:|' $$(${FIND} ${WRKSRC}/doc -name Makefile.in)
#	cd ${WRKSRC}/thunarx && ${CP}  thunarx-1.pc.in  thunarx.pc.in

.include <bsd.port.mk>
#EOF
