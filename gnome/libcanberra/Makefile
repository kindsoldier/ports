#
# $Id$
#
PORTNAME=	libcanberra
PORTVERSION=	0.29
CATEGORIES=	audio devel
MASTER_SITES=	http://0pointer.de/lennart/projects/libcanberra/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Implementation of the Freedesktop sound theme spec

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libogg.so:media/libogg
LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

USES+=		gmake
USE_LDCONFIG=	yes
USES+=		tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-lynx --disable-tdb --disable-gtk3
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --disable-pulse
CONFIGURE_ARGS+= --disable-alsa
CONFIGURE_ARGS+= --disable-dependency-tracking
CONFIGURE_ARGS+= --disable-gtk3
CONFIGURE_ARGS+= --disable-silent-rules

CONFIGURE_ARGS+= --disable-gstreamer
CONFIGURE_ARGS+= --disable-pulse
CONFIGURE_ARGS+= --disable-gtk3
CONFIGURE_ARGS+= --disable-lynx --disable-tdb --disable-alsa

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's|-Wmissing-include-dirs||g' \
	    	${WRKSRC}/configure

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

	    ${REINPLACE_CMD} -e 's|liboil-0.3|liboil|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gconftool-2|gconftool|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-0.10|gstreamer|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-1.0|gstreamer|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-base-0.10|gstreamer-base|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-control-0.10|gstreamer-control|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-check-0.10|gstreamer-check|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-video-0.10|gstreamer-video|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-interfaces-0.10|gstreamer-interfaces|g' ${FILES}

	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/*doc*/Makefile.in

	${REINPLACE_CMD} -e 's|vapi_DATA =.*|vapi_DATA =|' ${WRKSRC}/Makefile.in

	${REINPLACE_CMD} -e 's|gtk-2.0|gtk|g' 		${FILES}
	${REINPLACE_CMD} -e 's|canberra-@PACKAGE_VERSION@|canberra|g' 		${FILES}


PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
SUB_FILES+= 	pkg-install pkg-deinstall

.include <bsd.port.mk>
#EOF
