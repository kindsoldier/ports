#
# $Id$
#
PORTNAME=	liferea
PORTVERSION=	1.8.16
CATEGORIES=	net gnome
#MASTER_SITES+=	SF/${PORTNAME}/Liferea%20Stable/${PORTVERSION}
MASTER_SITES+=	https://github.com/lwindolf/liferea/releases/download/v${PORTVERSION}/ \
		http://rainbow-runner.nl/~kwm/distfiles/

LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgconf.so:gnome/gconf2
LIB_DEPENDS+=	libjson-glib.so:gnome/libjson-glib
LIB_DEPENDS+=	libsoup.so:gnome/libsoup
LIB_DEPENDS+=	libwebkitgtk.so:gnome/libwebkit-gtk2
LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libxslt.so:text/libxslt
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libglade.so:gnome/libglade2
LIB_DEPENDS+=	libunique.so:gnome/libunique


RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils
RUN_DEPENDS+=	gconftool:gnome/gconf2
BUILD_DEPENDS+=	gnome-doc-tool:gnome/gnome-doc-utils

MAINTAINER=	onborodin@gmail.com
COMMENT=	Simple RSS/RDF feed reader

USES+=		gmake
GNU_CONFIGURE=	yes
USES+=		tar:bzip2

CONFIGURE_ARGS+= --disable-libnotify
CONFIGURE_ARGS+= --disable-sm
CONFIGURE_ARGS+= --enable-dbus
CONFIGURE_ARGS+= --disable-lua

#CPPFLAGS!= pkg-config --cflags libxml2 glib gtk+ libsoup webkit libglade gconf
#LDFLAGS!= pkg-config --libs libxml2 glib gtk+ libsoup webkit libglade gconf


FILES= ${WRKSRC}/configure

post-patch:
	${REINPLACE_CMD} -e 's,DATADIRNAME=lib,DATADIRNAME=share,g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconftool-2|gconftool|g' ${FILES}

	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${FILES}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${FILES}
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${FILES}
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${FILES}
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${FILES}
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
	    ${REINPLACE_CMD} -e 's|gstreamer-0.10|gstreamer|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-base-0.10|gstreamer-base|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-control-0.10|gstreamer-control|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-check-0.10|gstreamer-check|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-video-0.10|gstreamer-video|g' ${FILES}
	    ${REINPLACE_CMD} -e 's|gstreamer-interfaces-0.10|gstreamer-interfaces|g' ${FILES}

	${REINPLACE_CMD} -e 's|parole-0|parole|g' 	${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|parole-plugins-0|parole-plugins|g' 	${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)
	${REINPLACE_CMD} -e 's|-$$(PAROLE_VERSION_API)||g' 	${FILES}  $$(${FIND} ${WRKSRC} -name Makefile.in)

	${REINPLACE_CMD} -e 's|libsoup-2.4|libsoup|g' ${FILES}

	${REINPLACE_CMD} -e 's|webkit-1.0|webkit|g' ${FILES}
	${REINPLACE_CMD} -e 's|unique-1.0|unique|g' ${FILES}


	${REINPLACE_CMD} -e 's|json-glib-1.0|json-glib|g' ${FILES}

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
SUB_FILES+= 	pkg-install pkg-deinstall

.include <bsd.port.mk>
#EOF

