#
# $Id$
#
PORTNAME?=	wireshark
PORTVERSION=	1.12.13
CATEGORIES=	net
MASTER_SITES+=	http://www.wireshark.org/download/src/
MASTER_SITES+=	http://www.wireshark.org/download/src/all-versions/
MASTER_SITES+=	https://www.wireshark.org/download/src/all-versions/
MASTER_SITES+=	http://wireshark.osmirror.nl/download/src/
MASTER_SITES+=	http://ftp.uni-kl.de/pub/wireshark/src/
MASTER_SITES+=	http://wireshark.askapache.com/download/src/
MASTER_SITES+=	http://wireshark.dsmirror.nl/download/src/
MASTER_SITES+=	ftp://ftp.uni-kl.de/pub/wireshark/src/
DISTNAME=	${DATADIR_NAME}-${PORTVERSION}

MAINTAINER=	onborodin@gmail.com
COMMENT=	A powerful network analyzer/capture tool


LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libadns.so:net/libadns


RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils


DATADIR_NAME=	wireshark

USES+=		tar:bzip2
USES+=		gmake
CONFIGURE_ARGS+= --program-transform-name="" 
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
USE_LDCONFIG=	yes
DATADIR=	${PREFIX}/share/${DATADIR_NAME}
USE_LDCONFIG=	yes
CFLAGS+=	-funit-at-a-time
LIBS+=		-L${LOCALBASE}/lib

GNU_CONFIGURE=	yes
PLIST_SUB+=	VERSION=${PORTVERSION}

CONFIGURE_ARGS+= --with-qt=no
CONFIGURE_ARGS+= --enable-threads
#CONFIGURE_ARGS+= --with-adns=${LOCALBASE}/lib
#CONFIGURE_ARGS+= --with-adns=no
#CONFIGURE_ARGS+= --with-geoip=${LOCALBASE}/lib
#CONFIGURE_ARGS+= --with-libsmi=${LOCALBASE}
#CONFIGURE_ARGS+= --with-ssl=/usr
#CONFIGURE_ARGS+=--with-portaudio=${LOCALBASE}
CONFIGURE_ARGS+= --enable-airpcap
CONFIGURE_ARGS+= --enable-ipv6=yes
CONFIGURE_ARGS+= --enable-setuid-install
CONFIGURE_ARGS+= --enable-threads
CONFIGURE_ARGS+= --with-dumpcap-group=wheel
CONFIGURE_ARGS+= --with-gcrypt=yes
CONFIGURE_ARGS+= --with-geoip=no
CONFIGURE_ARGS+= --with-gnutls=yes
CONFIGURE_ARGS+= --with-libgcrypt-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libsmi=no
CONFIGURE_ARGS+= --with-pcre=${LOCALBASE}/lib
CONFIGURE_ARGS+= --without-lua
CONFIGURE_ARGS+= --with-libgcrypt-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libgnutls-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --without-portaudio

CONFIGURE_ARGS+= --disable-glibtest
CONFIGURE_ARGS+= --disable-gtktest
CONFIGURE_ARGS+= --with-gtk2=yes
CONFIGURE_ARGS+= --with-gtk3=no


post-patch:
	@${REINPLACE_CMD} -e 's|lua5\.1|lua${LUA_VER_STR}|g ; \
	    	s|-llua${LUA_VER_STR}|${LUA_LIBDIR}/liblua.a|g' \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${WRKSRC}/configure


ICON_SRC_DIR = ${WRKSRC}/image/

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/applications ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.desktop ${STAGEDIR}${PREFIX}/share/applications/
	${INSTALL_DATA} ${ICON_SRC_DIR}/WiresharkDoc-48.png \
	    ${STAGEDIR}${PREFIX}/share/pixmaps/${PORTNAME}.png

.for N in 16 24 32 48 64 128 256
	${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/${N}x${N}/apps
	${INSTALL_DATA} ${ICON_SRC_DIR}/WiresharkDoc-${N}.png \
	    ${STAGEDIR}${PREFIX}/share/icons/hicolor/${N}x${N}/apps/${PORTNAME}.png
.endfor



.include <bsd.port.mk>
#EOF
