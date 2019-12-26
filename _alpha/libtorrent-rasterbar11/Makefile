# Created by: Doug Barton <dougb@FreeBSD.org>
# $FreeBSD: head/net-p2p/libtorrent-rasterbar/Makefile 514143 2019-10-09 12:17:15Z bapt $

PORTNAME=	libtorrent-rasterbar
DISTVERSION=	1.1.10
CATEGORIES=	net-p2p
MASTER_SITES=	https://github.com/arvidn/libtorrent/releases/download/libtorrent-${PORTVERSION:S/./_/g}/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ library implementing a BitTorrent client

LIB_DEPENDS=	libboost_chrono.so:devel/libboost \
		libboost_random.so:devel/libboost \
		libboost_system.so:devel/libboost

USES=		compiler:c++14-lang iconv:wchar_t pkgconfig ssl
USE_LDCONFIG=	yes

LDFLAGS+= -L${LOCALBASE}/lib -liconv
CFLAGS+= -I${LOCALBASE}/include 

GNU_CONFIGURE= yes

post-patch:
	${REINPLACE_CMD} -e 's|/usr/local/include|${PREFIX}/include|' \
		${WRKSRC}/Jamfile

post-install:
	${RM} ${STAGEDIR}${PREFIX}/include/libtorrent/tommath.h.orig ${STAGEDIR}${PREFIX}/include/libtorrent/Makefile*


.include <bsd.port.mk>
