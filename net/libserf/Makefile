#
# $Id$
#
PORTNAME=	serf
PORTVERSION=	1.3.9
CATEGORIES=	www
MASTER_SITES=	APACHE/serf
PKGNAMEPREFIX=	lib

MAINTAINER=	lev@FreeBSD.org
COMMENT=	Serf HTTP client library

LIB_DEPENDS+=	libapr.so:devel/libapr

USES=		scons tar:bzip2
USE_LDCONFIG=	yes

SCONS_ARGS=	APR=${LOCALBASE}/bin/apr-config
SCONS_ARGS+=	APU=${LOCALBASE}/bin/apu-config
SCONS_ARGS+=	OPENSSL=/usr
SCONS_ARGS+=	PREFIX=${PREFIX}
SCONS_ARGS+=	CC=${CC}
SCONS_ARGS+=	CFLAGS="${CFLAGS}"
INSTALL_TARGET=	install --install-sandbox=${STAGEDIR}

.include <bsd.port.options.mk>

do-build:
	cd ${WRKSRC} && ${SETENV} ${MAKE_CMD} ${SCONS_ARGS}

do-install:
	cd ${WRKSRC} && ${SETENV} ${MAKE_CMD} ${SCONS_ARGS} ${INSTALL_TARGET}

post-install:
	cd ${STAGEDIR}${PREFIX}/lib && ${LN} -sf libserf.so.1 libserf.so

regression-test check: build
	cd ${WRKSRC} && ${MAKE_CMD} check

.include <bsd.port.mk>
#EOF
