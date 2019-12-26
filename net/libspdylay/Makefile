# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/spdylay/Makefile 413813 2016-04-23 06:47:00Z sunpoet $

PORTNAME=	spdylay
PORTVERSION=	1.3.2
CATEGORIES=	www net
MASTER_SITES+=	https://github.com/tatsuhiro-t/${PORTNAME}/releases/download/v${PORTVERSION}/
MASTER_SITES+=	LOCAL/sunpoet
PKGNAMEPREFIX=	lib

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	SPDY protocol version 2, 3 and 3.1 implementation in C

BUILD_DEPENDS=	libevent>=2.0.8:devel/libevent
RUN_DEPENDS=	libevent>=2.0.8:devel/libevent
LIB_DEPENDS=	libevent_openssl.so:devel/libevent

BROKEN_powerpc64=	does not build

CONFIGURE_ARGS=	--enable-examples --enable-src
CONFIGURE_ENV+=	OPENSSL_CFLAGS="-I/usr/include"
CONFIGURE_ENV+=	OPENSSL_LIBS="-L/usr/lib -lcrypto -lssl"
CONFIGURE_ENV+=	ZLIB_CFLAGS="-I/usr/include"
CONFIGURE_ENV+=	ZLIB_LIBS="-L/usr/lib -lz"
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_CXXSTD=	c++11
USES=		compiler:c++11-lang pathfix pkgconfig tar:xz
CFLAGS+= -I${LOCALBASE}/include/libxml2


.include <bsd.port.pre.mk>

.if ${OSVERSION} < 1000000 && !defined(WITH_OPENSSL_PORT)
IGNORE=		spdylay requires OpenSSL 1.0.1+
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|^Requires.private: zlib$$|Libs.private: -L${LIBDIR} -lz|' ${WRKSRC}/lib/libspdylay.pc.in

post-install:
	${INSTALL_SCRIPT} ${WRKSRC}/examples/spdycli ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_DATA} ${WRKSRC}/shrpx.conf.sample ${STAGEDIR}${PREFIX}/etc/

.include <bsd.port.post.mk>
#EOF
