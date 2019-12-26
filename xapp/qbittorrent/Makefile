#
# $Id$
#
PORTNAME=	qbittorrent
PORTVERSION=	3.3.16
DISTVERSIONPREFIX=	release-
CATEGORIES=	net-p2p

MAINTAINER=	ports@FreeBSD.org
COMMENT?=	Bittorrent client using Qt4 and libtorrent-rasterbar

LIB_DEPENDS+=	libtorrent-rasterbar.so:net/libtorrent-rasterbar
LIB_DEPENDS+=	libboost_system.so:devel/libboost


LIB_DEPENDS+=	libGeoIP.so:net/libGeoIP
LIB_DEPENDS+=	libQtCore.so:xapp/libqt4
LIB_DEPENDS+=	libQtDBus.so:xapp/libqt4
LIB_DEPENDS+=	libQtGui.so:xapp/libqt4
LIB_DEPENDS+=	libQtNetwork.so:xapp/libqt4
LIB_DEPENDS+=	libQtXml.so:xapp/libqt4
LIB_DEPENDS+=	libdbus.so:gnome/dbus

UN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils


USE_GITHUB=	yes
GH_ACCOUNT=	qBittorrent
GH_PROJECT=	qBittorrent

CXX=		clang++
#USES=		compiler:c++11-lang
USES+=		tar:xz gmake
DESTDIRNAME=	INSTALL_ROOT

CXXFLAGS+= -I${LOCALBASE}/boost64/include
CPPFLAGS+= -I${LOCALBASE}/boost64/include
LDFLAGS+= -L${LOCALBASE}/boost64/lib
CONFIGURE_ARGS+= --with-boost=${LOCALBASE}/boost64

CONFIGURE_ENV+=		zlib_CFLAGS=-I/usr/include
CONFIGURE_ENV+=		zlib_LIBS=-lz
#CONFIGURE_ARGS+=	CXXFLAGS=-DBOOST_ASIO_DYN_LINK
CONFIGURE_ARGS+= --with-qt4

GNU_CONFIGURE=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/qbittorrent
	${MKDIR} ${STAGEDIR}${MAN1PREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/doc/qbittorrent.1 \
		${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
#EOF

