#
# $Id$
#
PORTNAME=	vino
PORTVERSION=	2.32.2
CATEGORIES=	net gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	onborodin@gmail.com
COMMENT=	VNC server that allows for remote access to your GNOME desktop


LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libgnutls.so:crypto/libgnutls

LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libgconf.so:gnome/gconf2

LIB_DEPENDS+=	libgnome-keyring.so:gnome/libgnome-keyring
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

LIB_DEPENDS+=	libsoup.so:gnome/libsoup
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libpng.so:graph/libpng

LIB_DEPENDS+=	libavahi-glib.so:net/avahi
LIB_DEPENDS+=	libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+=	libnotify.so:gnome/libnotify
LIB_DEPENDS+=	libunique.so:gnome/libunique

LIB_DEPENDS+=	libgnutls.so:crypto/libgnutls
RUN_DEPENDS+=	gconftool:gnome/gconf2


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+=--enable-libnotify=yes
#CONFIGURE_ARGS+=--enable-libnotify=no
CONFIGURE_ARGS+= --enable-gcrypt=yes
CONFIGURE_ARGS+= --enable-gnutls=yes
CONFIGURE_ARGS+= --enable-avahi
CONFIGURE_ARGS+= --disable-gnome-keyring
CONFIGURE_ARGS+= --enable-http-server=no
CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --enable-libnotify
CONFIGURE_ARGS+= --enable-libunique=yes



FILES+=	${WRKSRC}/configure

post-patch:
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g'		${FILES}
	${REINPLACE_CMD} -e 's,gtk+-x11-2.0,gtk+-x11,g'		${FILES}
	${REINPLACE_CMD} -e 's,gconf-2.0,gconf,g'		${FILES}
	${REINPLACE_CMD} -e 's,dbus-1,dbus,g'		${FILES}
	${REINPLACE_CMD} -e 's,dbus-glib-1,dbus-glib,g'		${FILES}

	${REINPLACE_CMD} -e 's,gtk+-2.0,gtk+,g'		${FILES}
	${REINPLACE_CMD} -e 's,libsoup-2.4,libsoup,g'		${FILES}

	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g'		${FILES}
	${REINPLACE_CMD} -e 's,gnome-keyring-1,gnome-keyring,g'		${FILES}
	${REINPLACE_CMD} -e 's,gconftool-2,gconftool,g'		${FILES}

	${REINPLACE_CMD} -e 's,unique-1.0,unique,g'		${FILES}


PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install
SUB_FILES+= 	pkg-install pkg-deinstall


.include <bsd.port.mk>
#EOF
