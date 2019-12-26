# Created by: Doug Barton <dougb@FreeBSD.org>
# $FreeBSD: head/net-p2p/qbittorrent/Makefile 516210 2019-11-01 07:20:08Z yuri $

PORTNAME=	qbittorrent
DISTVERSION=	4.1.9.1
CATEGORIES=	net-p2p
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Bittorrent client using Qt5 and libtorrent-rasterbar

#LIB_DEPENDS=	libtorrent-rasterbar.so:net-p2p/libtorrent-rasterbar \
#		libboost_system.so:devel/boost-libs


USES=		gmake compiler:c++11-lib pkgconfig tar:xz
GNU_CONFIGURE=	yes
#USE_QT=			core network xml buildtools_build linguisttools_build qmake_build
CONFIGURE_ARGS=		CFLAGS="${CFLAGS}" CXXFLAGS="${CXXFLAGS}"
DESTDIRNAME=		INSTALL_ROOT

#.if ${FLAVOR} == default
#USES+=			desktop-file-utils gl
#USE_QT+=		concurrent gui svg widgets
#USE_GL=			gl
#.endif

#DBUS_USE=		qt=dbus

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/qbittorrent${SUFFIX}
	${INSTALL_MAN} ${WRKSRC}/doc/qbittorrent${SUFFIX}.1 \
		${STAGEDIR}${MAN1PREFIX}/man/man1/
	${RM} -r ${STAGEDIR}${PREFIX}/share/man

.include <bsd.port.mk>
