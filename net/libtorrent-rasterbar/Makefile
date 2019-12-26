#
# $Id$
#
PORTNAME=	libtorrent-rasterbar
PORTVERSION=	1.0.11 #1.0.6
CATEGORIES?=	net
MASTER_SITES=	https://github.com/arvidn/libtorrent/releases/download/libtorrent-${PORTVERSION:S/./_/g}/

MAINTAINER=	ports@FreeBSD.org
COMMENT?=	C++ library implementing a BitTorrent client

LIB_DEPENDS+=	libboost_date_time.so:devel/libboost64
LIB_DEPENDS+=	libGeoIP.so:net/libGeoIP

CXX=		clang++
USES+=		compiler:c++11-lang gmake
USE_OPENSSL=	yes
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

#CONFIGURE_ARGS+= --with-boost=${LOCALBASE}/boost64
CXXFLAGS+= -I${LOCALBASE}/boost64/include
CPPFLAGS+= -I${LOCALBASE}/boost64/include
LDFLAGS+= -L${LOCALBASE}/boost64/lib
#CONFIGURE_ARGS+= --with-boost-libdir=${LOCALBASE}/boost64/lib

CXXFLAGS+= -I${LOCALBASE}/include
CPPFLAGS+= -I${LOCALBASE}/include
LDFLAGS+= -L${LOCALBASE}/lib


CONFIGURE_ARGS=	--disable-static
CONFIGURE_ARGS+= --enable-dht
CONFIGURE_ARGS+= --enable-encryption
CONFIGURE_ARGS+= --enable-pool-allocators
CONFIGURE_ARGS+= --enable-deprecated-functions
CONFIGURE_ARGS+= --with-boost-system=boost_system
CONFIGURE_ARGS+= --enable-geoip
CONFIGURE_ARGS+= --with-libgeoip
CONFIGURE_ARGS+= --with-libiconv
CONFIGURE_ARGS+= --with-openssl=/usr
CONFIGURE_ARGS+= --disable-python-binding
#CONFIGURE_ARGS+= --enable-export-all

post-patch:
	${REINPLACE_CMD} -e 's|/usr/local/include|${PREFIX}/include|' \
		${WRKSRC}/Jamfile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libtorrent-rasterbar.so.*

.include <bsd.port.mk>
#EOF

