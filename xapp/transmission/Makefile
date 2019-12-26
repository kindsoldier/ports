#
# $Id$
#
PORTNAME=	transmission
PORTVERSION=	2.60
CATEGORIES?=	net
MASTER_SITES+=	https://ftp.osuosl.org/pub/blfs/conglomeration/transmission/

MAINTAINER=	onborodin@gmail.com
COMMENT=	A fast and lightweight CLI (command line) BitTorrent client

LIB_DEPENDS+=	libevent.so:devel/libevent
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libidn.so:net/libidn
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2

RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils

USES+=		gmake
USE_OPENSSL=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --with-ssl=${OPENSSLBASE}
CONFIGURE_ARGS+= --with-zlib=/usr
CONFIGURE_ARGS+= --disable-libappindicator
CONFIGURE_ARGS+= --enable-libnotify
CONFIGURE_ARGS+= --without-inotify
CONFIGURE_ARGS+= --disable-cli
CONFIGURE_ARGS+= --disable-daemon
CONFIGURE_ARGS+= --with-gtk
CONFIGURE_ARGS+= --disable-mac
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --enable-utp


CFLAGS+= -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CPPFLAGS+=	-I${LOCALBASE}/include
USES+=		tar:xz

FILES= ${WRKSRC}/configure

post-patch:
	${REINPLACE_CMD} -e \
		's|_pthread_flags=".*"|_pthread_flags="${PTHREAD_LIBS}"|g ; \
		s|libevent_source=system|libevent_source=bundled|g' \
			${FILES}
	${REINPLACE_CMD} -e 's|doc \\| \\|g' \
		${WRKSRC}/Makefile.in

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
	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 	${FILES}
	${REINPLACE_CMD} -e 's|gdk-pixbuf-xlib-2.0|gdk-pixbuf-xlib|g' 	${FILES}

	${REINPLACE_CMD} -e 's|dbus-glib-1|dbus-glib|g' 	${FILES}
	${REINPLACE_CMD} -e 's|dbus-1|dbus|g' 	${FILES}

.include <bsd.port.mk>
#EOF

