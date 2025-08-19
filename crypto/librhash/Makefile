PORTNAME=	rhash
PORTVERSION=	1.4.4
CATEGORIES=	security
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}-${PORTVERSION}-src
PKGNAMEPREFIX=  lib

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Utility and library for computing and checking of file hashes

#PATCH_SITES=	https://github.com/rhash/RHash/commit/
#PATCHFILES+=	c804982d1b24c6533118b3068d2cfdca685076f3.patch:-p1
#PATCHFILES+=	9ef90b958b7ae50aeeb5c269468034d73d6e2efe.patch:-p1
#PATCHFILES+=	b8c91ea6551e99e10352386cd46ea26973bb4a4d.patch:-p1


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
