#
# $Id$
#
PORTNAME=	nghttp2
PORTVERSION=	1.65.0
DISTVERSIONPREFIX=	v
CATEGORIES=	www net
PKGNAMEPREFIX=	lib

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	HTTP/2.0 C Library

BUILD_DEPENDS+=	autoconf:devel/autoconf
BUILD_DEPENDS+=	automake:devel/automake
BUILD_DEPENDS+=	libtool:devel/libtool


#BUILD_DEPENDS+=	libev>=4.15:devel/libev
#BUILD_DEPENDS+=	libevent>=2.0.8:devel/libevent

#LIB_DEPENDS+=	libspdylay.so:net/libspdylay
#LIB_DEPENDS+=	libcares.so:net/libcares
#LIB_DEPENDS+=	libjansson.so:devel/libjansson
#LIB_DEPENDS+=	libxml2.so:text/libxml2

USE_GITHUB=	yes

USES=		autoreconf gmake compiler:c++14-lang libtool pkgconfig tar:xz

CONFIGURE_ARGS=	 --enable-lib-only
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_CXXSTD=	c++14
USE_LDCONFIG=	yes

#USE_GITHUB=	yes

CFLAGS+= -I${LOCALBASE}/include
LDFLAGS+= -L${LOCALBASE}/lib

CONFIGURE_ARGS+= --disable-python-bindings
CONFIGURE_ARGS+= --without-libnghttp3
CONFIGURE_ARGS+= --with-jemalloc

CONFIGURE_ENV+=	OPENSSL_CFLAGS="-I/usr/include"
CONFIGURE_ENV+=	OPENSSL_LIBS="-L/usr/lib -lcrypto -lssl"
CONFIGURE_ENV+=	ZLIB_CFLAGS="-I/usr/include"
CONFIGURE_ENV+=	ZLIB_LIBS="-L/usr/lib -lz"

post-patch:
	${REINPLACE_CMD} 's,libxml-2.0,libxml2,g' ${WRKSRC}/configure.ac

post-install:
	${INSTALL_DATA} ${WRKSRC}/lib/libnghttp2.la ${STAGEDIR}${PREFIX}/lib/


.include <bsd.port.mk>
#EOF
