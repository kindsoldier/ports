#
# $Id$
#
PORTNAME=	xfce4-parole
PORTVERSION=	0.5.4
CATEGORIES=	multimedia xfce
MASTER_SITES=	http://archive.xfce.org/src/apps/parole/${PORTVERSION:R}/
DISTNAME=	parole-${PORTVERSION}
DIST_SUBDIR=	xfce4

MAINTAINER=	onborodin@gmail.com
COMMENT=	Lightweight media player for Xfce4 based on the gstreamer engine


LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libglib.so:devel/libglib

LIB_DEPENDS+=	libtag.so:media/libtag

LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libnotify.so:gnome/libnotify
LIB_DEPENDS+=	libxfconf.so:xfce/libxfce4conf
LIB_DEPENDS+=	libxfce4ui.so:xfce/libxfce4ui
LIB_DEPENDS+=	libxfce4util.so:xfce/libxfce4util

LIB_DEPENDS+= libgstaudio.so:media/libgst-plugins-base
LIB_DEPENDS+= libgstbase.so:media/libgstreamer


GNU_CONFIGURE=	yes
USES+=		tar:bzip2
USES+=		gmake

CONFIGURE_ARGS=	--disable-power-manager-plugin
CONFIGURE_ARGS+=--with-gstreamer=0.10

CONFIGURE_ARGS=	--enable-notify-plugin \
		--enable-tray-plugin \
		--enable-taglib \
		--without-html-dir
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --with-gstreamer=1.0

FILES+=  ${WRKSRC}/configure 
FILES+=  ${WRKSRC}/Makefile.in  
FILES+=  ${WRKSRC}/*/Makefile.in  
FILES+=  ${WRKSRC}/*/*/Makefile.in
FILES+=  ${WRKSRC}/*/*/*/Makefile.in


CONFIGURE_ARGS+= --with-gstreamer=1.0

post-patch:
	cd ${WRKSRC}/data && ${LN} -sf gtk-2.0 gtk

	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${FILES}

	${REINPLACE_CMD} -e 's|-$${gstreamer_api_version}||g' 	${FILES}

	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 		${FILES}
	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' ${FILES}

	${REINPLACE_CMD} -e 's|libxfce4util-1.0|libxfce4util|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libxfce4ui-1|libxfce4ui|g' 	${FILES}
	${REINPLACE_CMD} -e 's|xfconf-0|xfconf|g' 	${FILES}

	${REINPLACE_CMD} -e 's|-$$GST_API_VERSION||g' ${FILES}
	${REINPLACE_CMD} -e 's|gtk-2.0|gtk|g' ${FILES}
	${REINPLACE_CMD} -e 's|parole-0|parole|g' 	${FILES} 
	${REINPLACE_CMD} -e 's|parole-plugins-0|parole-plugins|g' 	${FILES}
	${REINPLACE_CMD} -e 's|-$$(PAROLE_VERSION_API)||g' 	${FILES}

.include <bsd.port.mk>
#EOF
