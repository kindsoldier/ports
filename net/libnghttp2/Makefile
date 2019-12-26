#
# $Id$
#
PORTNAME=	nghttp2
PORTVERSION=	1.36.0
DISTVERSIONPREFIX=	v
CATEGORIES=	www net
PKGNAMEPREFIX=	lib

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	HTTP/2.0 C Library

BUILD_DEPENDS+=	autoconf:devel/autoconf
BUILD_DEPENDS+=	automake:devel/automake
BUILD_DEPENDS+=	libtool:devel/libtool


BUILD_DEPENDS+=	libev>=4.15:devel/libev
BUILD_DEPENDS+=	libevent>=2.0.8:devel/libevent

#BUILD_DEPENDS+=	libspdylay>=1.3.0:net/libspdylay

#LIB_DEPENDS+=	libev.so:devel/libev
#LIB_DEPENDS+=	libevent_openssl.so:devel/libevent
LIB_DEPENDS+=	libspdylay.so:net/libspdylay

LIB_DEPENDS+=   libcares.so:net/libcares
LIB_DEPENDS+=	libjansson.so:devel/libjansson
LIB_DEPENDS+=	libxml2.so:text/libxml2

USE_GITHUB=	yes

USES=		autoreconf compiler:c++14-lang libtool pkgconfig

CONFIGURE_ARGS=	--enable-lib-only
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_CXXSTD=	c++14
USE_LDCONFIG=	yes

USE_GITHUB=	yes

CFLAGS+= -I${LOCALBASE}/include
LDFLAGS+= -L${LOCALBASE}/lib


CONFIGURE_ARGS+= --disable-python-bindings

#CONFIGURE_ARGS+= --enable-app
#CONFIGURE_ARGS+= --enable-examples
#CONFIGURE_ARGS+= --with-spdylay
CONFIGURE_ENV+=	OPENSSL_CFLAGS="-I/usr/include"
CONFIGURE_ENV+=	OPENSSL_LIBS="-L/usr/lib -lcrypto -lssl"
CONFIGURE_ENV+=	ZLIB_CFLAGS="-I/usr/include"
CONFIGURE_ENV+=	ZLIB_LIBS="-L/usr/lib -lz"

#GNU_CONFIGURE=	yes
#INSTALL_TARGET=	install-strip
#PATHFIX_MAKEFILEIN=	Makefile.am
#USE_CXXSTD=	c++11
#USE_LDCONFIG=	yes
#USES=		compiler:c++11-lib gmake localbase pathfix pkgconfig

#CONFIGURE_ARGS+=	--enable-hpack-tools



#PLIST=	${PKGDIR}/pkg-plist.${ARCH}

#plist-echo:
#	echo ${PLIST}

#.if ${OSVERSION} <= 1000000
#CPPFLAGS+=	-D_GLIBCXX_USE_C99
#.endif

#.if ${OPSYS} == FreeBSD && ${OSVERSION} >= 1000000
#CONFIGURE_ARGS+=--with-jemalloc
#.endif

post-patch:
#	cd ${WRKSRC} && autoreconf -i -v -I./m4
	${REINPLACE_CMD} 's,libxml-2.0,libxml2,g' ${WRKSRC}/configure.ac


post-install:
	${INSTALL_DATA} ${WRKSRC}/lib/libnghttp2.la ${STAGEDIR}${PREFIX}/lib/


.include <bsd.port.mk>
#EOF
