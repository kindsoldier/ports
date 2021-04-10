#
# $id$
#
PORTNAME=	geany-plugins
PORTVERSION=	1.37
CATEGORIES=	devel
MASTER_SITES=	http://plugins.geany.org/geany-plugins/

MAINTAINER= homeunix7@gmail.com
COMMENT=	Plugins for lightwidth editor - geany

BUILD_DEPENDS=	geany:${PORTSDIR}/xapp/geany
RUN_DEPENDS=	geany:${PORTSDIR}/xapp/geany

LIB_DEPENDS+= libexpat.so:${PORTSDIR}/text/libexpat
LIB_DEPENDS+= libxml2.so:${PORTSDIR}/text/libxml2
LIB_DEPENDS+= libenchant.so:${PORTSDIR}/text/libenchant
LIB_DEPENDS+= libgtkspell.so:${PORTSDIR}/gnome/libgtkspell

LIB_DEPENDS+=	libgdk-pixbuf.so:gnome/libgtk2
LIB_DEPENDS+=	libgdk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils


USES+= gmake tar:bz2
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

#CONFIGURE_ARGS+= --enable-plugins="${BUILD_PLUGINS}"
#BUILD_PLUGINS=codenav,geanydoc,geanyextrasel,geanygdb,geanygendoc,geanyinsertnum,geanylatex,geanylipsum,geanyprj,geanysendmail,geanyvc,pretty-printer,shiftcolumn,spellcheck,treebrowser

FILES= ${WRKSRC}/configure # ${WRKSRC}/wscript

post-patch:
	@${REINPLACE_CMD} -e '/^SUBDIRS/ s|doc||' ${WRKSRC}/Makefile.in
#	@${REINPLACE_CMD} -e "s|docs||g" ${WRKSRC}/Makefile.in

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

	${REINPLACE_CMD} -e 's|gtkspell-2.0|gtkspell|g' 	${FILES}


##do-configure:
#	BUILD_PLUGINS=$(${ECHO} ${BUILD_PLUGINS} | ${SED} -e 's/^,//')
#	cd ${WRKSRC} && env ${CONFIGURE_ENV}; ${WRKSRC}/configure \
#		--enable-plugins="${BUILD_PLUGINS}"
# -b ${WRKSRC}/_build_
#${WRKSRC}/waf 

.include <bsd.port.mk>
#EOF
