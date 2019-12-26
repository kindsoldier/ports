#
# $id$
#
PORTNAME=	epiphany-extensions
PORTVERSION=	2.30.2 #2.32.0 #
CATEGORIES=	www gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	onborodin@gmail.com
COMMENT=	A set of add-ons for the Epiphany web browser

LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgconf.so:gnome/gconf2
LIB_DEPENDS+=	libsoup.so:gnome/libsoup
LIB_DEPENDS+=	libwebkitgtk.so:gnome/libwebkit-gtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libglade.so:gnome/libglade2

RUN_DEPENDS+= epiphany:xapp/epiphany
BUILD_DEPENDS+= epiphany:xapp/epiphany

RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils
RUN_DEPENDS+=	gconftool:gnome/gconf2
BUILD_DEPENDS+=	gnome-doc-tool:gnome/gnome-doc-utils


USES+=		tar:bzip2
GNU_CONFIGURE=	yes
USES+=		gmake
CPPFLAGS+=	-I${LOCALBASE}/include ${PTHREAD_CFLAGS}
LDFLAGS+=		-L${LOCALBASE}/lib ${PTHREAD_LIBS}
EPHY_EXTENSIONS=really-all

CONFIGURE_ARGS+= --disable-opensp
#CONFIGURE_ARGS+= --with-extensions="${EPHY_EXTENSIONS}"

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in

post-patch:
	${REINPLACE_CMD} -e 's|$$($$PKG_CONFIG --variable=extensionsdir epiphany-$$_epiphany_api_version)|${PREFIX}/lib/epiphany/extensions|g' \
		-e 's|$$($$PKG_CONFIG --variable=icondir epiphany-$$EPIPHANY_API_VERSION)|${PREFIX}/share/epiphany/icons|g' \
		-e 's|EPIPHANY_API_VERSION=2.29|EPIPHANY_API_VERSION=2.30|g' \
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

	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g'	${FILES}

	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g'	${FILES}

	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' ${FILES}
	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' ${FILES}
	${REINPLACE_CMD} -e 's|webkit-1.0|webkit|g' ${FILES}
	${REINPLACE_CMD} -e 's|libsoup-gnome-2.4|libsoup-gnome|g' ${FILES}
	${REINPLACE_CMD} -e 's|gnome-keyring-1|gnome-keyring|g' ${FILES}

	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gmodule-no-export-2.0|gmodule-no-export|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gio-unix-2.0|gio-unix|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gnome-keyring-1|gnome-keyring|g' 	${FILES}
	${REINPLACE_CMD} -e 's|libsoup-gnome-2.4|libsoup-gnome|g' 	${FILES}

	${REINPLACE_CMD} -e 's|ORBit-2.0|ORBit|g' 	${FILES}
	${REINPLACE_CMD} -e 's|ORBit-CosNaming-2.0|ORBit-CosNaming|g' 	${FILES}

	${REINPLACE_CMD} -e 's|orbit-2.0|orbit|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconf-2|gconf|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconfd-2|gconfd|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconf-sanity-check-2|gconf-sanity-check|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gconftool-2|gconftool|g' 	${FILES}

	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' 	${FILES}

	${REINPLACE_CMD} -e 's|name-server-2|name-server|g' 	${FILES}

	${REINPLACE_CMD} -e 's|bonobo-activation-2.0|bonobo-activation|g'	${FILES}
	${REINPLACE_CMD} -e 's|bonobo-2.0|bonobo|g'	${FILES}

	${REINPLACE_CMD} -e 's|gnome-2.0|gnome|g'	${FILES}
	${REINPLACE_CMD} -e 's|gnome-2|gnome|g'	${FILES}


	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g'	${FILES}

	${REINPLACE_CMD} -e 's|-$$(EPIPHANY_API_VERSION)||g'	${FILES}
	${REINPLACE_CMD} -e 's|-$$EPIPHANY_API_VERSION||g'	${FILES}
	${REINPLACE_CMD} -e 's|-$${EPIPHANY_API_VERSION}||g'	${FILES}
	${REINPLACE_CMD} -e 's|/$$(EPIPHANY_MAJOR)||g'	${FILES}
	${REINPLACE_CMD} -e 's|-$$_epiphany_api_version||g'	${FILES}

	${REINPLACE_CMD} -e 's|/@EPIPHANY_MAJOR@||g'	${FILES}

	${REINPLACE_CMD} -e 's|/@EPIPHANY_API_VERSION@||g'	${FILES}

#	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/doc*/*/Makefile.in

.include <bsd.port.mk>
#EOF
