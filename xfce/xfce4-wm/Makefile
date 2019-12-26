#
# $Id$
#
PORTNAME=	xfce4-wm
PORTVERSION=	4.12.4
CATEGORIES=	x11-wm xfce
MASTER_SITES+=	${MASTER_SITE_XFCE}
DISTNAME=	xfwm4-${PORTVERSION}
DIST_SUBDIR=	xfce4
MASTER_SITE_SUBDIR=	src/xfce/xfwm4/${PORTVERSION:R}

MAINTAINER=	onborodin@gmail.com
COMMENT=	XFce 4 window manager

LIB_DEPENDS+=	libintl.so:devel/gettext

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgmodule.so:devel/libglib
LIB_DEPENDS+=	libgobject.so:devel/libglib
LIB_DEPENDS+=	libgthread.so:devel/libglib

LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM

LIB_DEPENDS+=	libXinerama.so:x11/libXinerama
LIB_DEPENDS+=	libXrandr.so:x11/libXrandr
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libXRes.so:x11/libXres
LIB_DEPENDS+=	libXext.so:x11/libXext

LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

LIB_DEPENDS+=	libdbus.so:gnome/dbus
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libstartup-notification.so:xfce/libstartup-notification
LIB_DEPENDS+=	libwnck.so:gnome/libwnck

LIB_DEPENDS+=	libxfconf.so:xfce/libxfce4conf
LIB_DEPENDS+=	libxfce4kbd-private.so:xfce/libxfce4ui
LIB_DEPENDS+=	libxfce4ui.so:xfce/libxfce4ui
LIB_DEPENDS+=	libxfce4util.so:xfce/libxfce4util
#LIB_DEPENDS+=	libdrm.so:x11/libdrm

RUN_DEPENDS+= ${LOCALBASE}/lib/gtk/engines/libxfce.so:xfce/libgtk-xfce-engine
RUN_DEPENDS+= ${LOCALBASE}/lib/pkgconfig/gtk-engines-2.pc:gnome/libgtk-engines2
RUN_DEPENDS+= ${LOCALBASE}/share/themes/Xfce/xfwm4/themerc:xfce/xfce4-wm-themes

RUN_DEPENDS+= ${LOCALBASE}/lib/pkgconfig/gnome-icon-theme.pc:misc/gnome-icon-theme
RUN_DEPENDS+= ${LOCALBASE}/lib/pkgconfig/gnome-icon-theme-symbolic.pc:misc/gnome-icon-theme-symbolic
RUN_DEPENDS+= ${LOCALBASE}/share/icons/gnome/16x16/devices/media-zip.png:misc/gnome-icon-theme-extras
RUN_DEPENDS+= ${LOCALBASE}/lib/pkgconfig/shared-mime-info.pc:misc/shared-mime-info

RUN_DEPENDS+=	xdg-open:xfce/xdg-utils
RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils



GNU_CONFIGURE=	yes
USES+=		tar:bzip2
USES+=		gmake
USE_LDCONFIG=	yes

CONFIGURE_ARGS+= --enable-startup-notification
CONFIGURE_ARGS+= --enable-render
CONFIGURE_ARGS+= --enable-randr
CONFIGURE_ARGS+= --enable-compositor
#CONFIGURE_ARGS+= --enable-xsync
CONFIGURE_ARGS+= --disable-kde-systray
#CONFIGURE_ARGS+= --enable-libdrm
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

FILES= ${WRKSRC}/configure

post-patch:
	${REINPLACE_CMD} -e 's|\(#define ShapeInput 2\);|\1|' \
		${WRKSRC}/src/frame.c

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
	${REINPLACE_CMD} -e 's|exo-0.3|exo|g' 	${FILES}
	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 	${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' 	${FILES}

	${REINPLACE_CMD} -e 's|libwnck-1.0|libwnck|g' 	${FILES}

	${REINPLACE_CMD} -e 's|xfprint-1.0|xfprint|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfcegui4-1.0|xfcegui4|g' ${FILES}

	${REINPLACE_CMD} -e 's|xfce4panel-1.0|xfce4panel|g' 	${FILES}

	${REINPLACE_CMD} -e 's|DATADIRNAME=lib|DATADIRNAME=share|g' 	${FILES}

	${REINPLACE_CMD} -e 's|libxfce4ui-1|libxfce4ui|g' ${FILES}
	${REINPLACE_CMD} -e 's|libxfce4kbd-private-2|libxfce4kbd-private|g' ${FILES}

.include <bsd.port.mk>
#EOF

