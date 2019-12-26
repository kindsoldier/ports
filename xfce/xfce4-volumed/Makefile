# Created by: Sergey V. Dyatko <sergey.dyatko@gmail.com>
# $FreeBSD: head/deskutils/xfce4-volumed/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	xfce4-volumed
PORTVERSION=	0.1.13
CATEGORIES=	deskutils xfce
MASTER_SITES=	XFCE/src/apps/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	sergey.dyatko@gmail.com
COMMENT=	Volume management daemon for the Xfce desktop

LIB_DEPENDS=	libnotify.so:gnome/libnotify
LIB_DEPENDS=	libkeybinder.so:xfce/libkeybinder

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils

LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libxfconf.so:xfce/libxfce4conf
LIB_DEPENDS+=	libxfce4ui.so:xfce/libxfce4ui
LIB_DEPENDS+=	libxfce4util.so:xfce/libxfce4util

LIB_DEPENDS+=	libgstaudio01.so:media/libgst-plugins-base01


USES=		pkgconfig gmake tar:bzip2
GNU_CONFIGURE=	yes

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

	${REINPLACE_CMD} -e 's|libxfce4ui-1|libxfce4ui|g' 	${FILES}

	${REINPLACE_CMD} -e 's,gstreamer-audio-0.10,gstreamer-audio01,g'	${FILES}
	${REINPLACE_CMD} -e 's,gstaudio-0.10,gstaudio01,g'	${FILES}
	${REINPLACE_CMD} -e 's,gstinterfaces-0.10,gstinterfaces01,g'	${FILES}
	${REINPLACE_CMD} -e 's|gstreamer-0.10|gstreamer01|g' ${FILES}
	${REINPLACE_CMD} -e 's|gstreamer-base-0.10|gstreamer-base01|g' ${FILES}
	${REINPLACE_CMD} -e 's|gstreamer-plugins-base-0.10|gstreamer-plugins-base01|g' ${FILES}
	${REINPLACE_CMD} -e 's|gstreamer-control-0.10|gstreamer-control01|g' ${FILES}
	${REINPLACE_CMD} -e 's|gstreamer-check-0.10|gstreamer-check01|g' ${FILES}
	${REINPLACE_CMD} -e 's|gstreamer-video-0.10|gstreamer-video01|g' ${FILES}
	${REINPLACE_CMD} -e 's|gstreamer-interfaces-0.10|gstreamer-interfaces01|g' ${FILES}

	${REINPLACE_CMD} -e 's|liboil-0.3|liboil|g' ${FILES}
	${REINPLACE_CMD} -e 's|gconftool-2|gconftool|g' ${FILES}


.include <bsd.port.mk>
