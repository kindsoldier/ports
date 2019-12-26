#
# $Id$
#
PORTNAME=	libbonoboui
PORTVERSION=	2.24.4
CATEGORIES=	x11-toolkits gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	onborodin@gmail.com
COMMENT=	GUI frontend to the libbonobo component of GNOME 2

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgconf.so:gnome/gconf2
LIB_DEPENDS+=	libgnomevfs.so:gnome/gnome-vfs
LIB_DEPENDS+=	libORBit.so:gnome/libORBit2
LIB_DEPENDS+=	libbonobo.so:gnome/libbonobo

LIB_DEPENDS+=	libcanberra.so:gnome/libcanberra
LIB_DEPENDS+=	libgnome.so:gnome/libgnome
LIB_DEPENDS+=	libgnomecanvas.so:gnome/libgnomecanvas
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libogg.so:media/libogg
LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libavahi-glib.so:net/avahi
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libglade.so:gnome/libglade2

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}
CONFIGURE_ARGS+= --disable-dependency-tracking


FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/*/*.pc.in
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/Makefile.in 
#FILES+= ${WRKSRC}/*/*.pc.in


post-patch:
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
	${REINPLACE_CMD} -e 's|libgnomecanvas-2.0|libgnomecanvas|g'	${FILES}
	${REINPLACE_CMD} -e 's|bonoboui-2.0|bonoboui|g'	${FILES}
	${REINPLACE_CMD} -e 's|bonoboui-2|bonoboui|g'	${FILES}
	${REINPLACE_CMD} -e 's|/libglade/2.0|/libglade|g'	${FILES}
	${REINPLACE_CMD} -e 's|-2.la|.la|g'	${FILES}
	cd ${WRKSRC}/bonobo && ${CP} libbonoboui-2.0.pc.in libbonoboui.pc.in
	cd ${WRKSRC}/bonobo && ${CP} libbonoboui-2.0-uninstalled.pc.in libbonoboui-uninstalled.pc.in 
	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/doc*/*/Makefile.in
	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/sample*/*/*/Makefile.in
	${REINPLACE_CMD} -e '/^SUBDIRS/s| samples||' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's|bonoboui-2|bonoboui|g'	${FILES}


.include <bsd.port.mk>
#EOF
