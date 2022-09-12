PORTNAME=	rhash
PORTVERSION=	1.4.3
CATEGORIES=	security
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}-${PORTVERSION}-src
PKGNAMEPREFIX=  lib

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Utility and library for computing and checking of file hashes

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix="${PREFIX}"
CONFIGURE_ARGS+= --mandir="${PREFIX}/man"
CONFIGURE_ARGS+= --enable-lib-static
CONFIGURE_ARGS+= --enable-openssl-runtime
CONFIGURE_ARGS+= --extra-cflags="${CFLAGS}" 
CONFIGURE_ARGS+= --extra-ldflags="${LDFLAGS}"
INSTALL_TARGET=	install install-lib-so-link install-pkg-config

USE_LDCONFIG=	yes

WRKSRC=		${WRKDIR}/RHash-${PORTVERSION}

post-patch:
	${REINPLACE_CMD} -e '/BYTE_ORDER/s,__,_,g' \
		${WRKSRC}/librhash/byte_order.h

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

do-test:
	cd ${WRKSRC}/tests && ${SH} test_rhash.sh --full --shared

.include <bsd.port.mk>
