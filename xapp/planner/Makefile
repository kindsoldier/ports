#
# $Id$
#
PORTNAME=	planner
PORTVERSION=	0.14.6
CATEGORIES=	deskutils gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	onborodin@gmail.com
COMMENT=	Project management application for GNOME 2


LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt

LIB_DEPENDS+=	libpopt.so:devel/libpopt
LIB_DEPENDS+=	libltdl.so:devel/libtool
LIB_DEPENDS+=	libgconf.so:gnome/gconf2
LIB_DEPENDS+=	libgnomevfs.so:gnome/gnome-vfs

LIB_DEPENDS+=	libgnome.so:gnome/libgnome
LIB_DEPENDS+=	libgnome-keyring.so:gnome/libgnome-keyring
LIB_DEPENDS+=	libgnomecanvas.so:gnome/libgnomecanvas
LIB_DEPENDS+=	libgnomeui.so:gnome/libgnomeui
LIB_DEPENDS+=	libgailutil.so:gnome/libgtk2
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

LIB_DEPENDS+=	libogg.so:media/libogg
LIB_DEPENDS+=	libvorbis.so:media/libvorbis

LIB_DEPENDS+=	libavahi-glib.so:net/avahi
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libglade.so:gnome/libglade2


USES+=		gmake tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--enable-static
CONFIGURE_ARGS+=	--disable-python
CONFIGURE_ARGS+=	--disable-python-plugin
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

#CONFIGURE_ARGS+= --with-database


CONFIGURE_ARGS+= --enable-simple-priority-scheduling

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

#PLIST_FILES+=	man/man1/planner.1.gz

FILES= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Ma*.in
FILES+= ${WRKSRC}/*.pc.in
FILES+= ${WRKSRC}/*/*.in
FILES+= ${WRKSRC}/*/*/*.in


post-patch:
#	${RM} ${WRKSRC}/plugins/debug-manager/anjuta-debug-manager.schemas

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

	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' 	${FILES}


	${REINPLACE_CMD} -e 's|unique-1.0|unique|g'	${FILES}
	${REINPLACE_CMD} -e 's|gdl-1.0|gdl|g'		${FILES}
	${REINPLACE_CMD} -e 's|libgda-4.0|libgda|g'	${FILES}

	${REINPLACE_CMD} -e 's|gtksourceview-2.0|gtksourceview2|g'	${FILES}

	${REINPLACE_CMD} -e 's|gconftool-2|gconftool|g' 	${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|libgsf-1|libgsf|g' ${FILES}



	${REINPLACE_CMD} -e 's|libgnomecanvas-2.0|libgnomecanvas|g'	${FILES}
	${REINPLACE_CMD} -e 's|libgnomeui-2.0|libgnomeui|g'	${FILES}

	${REINPLACE_CMD} -e 's|planner-1.0|planner|g'	${FILES}
	${REINPLACE_CMD} -e 's|planner-1|planner|g'	${FILES}
	${REINPLACE_CMD} -e 's|planner_1|planner|g'	${FILES}
	cd ${WRKSRC} && ${CP} libplanner-1.pc.in libplanner.pc.in


	${REINPLACE_CMD} -e 's|mrproject-1|mrproject|g'	${FILES}
	${REINPLACE_CMD} -e 's|mrproject_1|mrproject|g'	${FILES}


PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
SUB_FILES+= 	pkg-install pkg-deinstall

.include <bsd.port.mk>
#EOF
