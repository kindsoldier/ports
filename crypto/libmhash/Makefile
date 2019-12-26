#
# $Id$
#
PORTNAME=	mhash
PORTVERSION=	0.9.9.9
CATEGORIES=	security
MASTER_SITES=	SF
PKGNAMEPREFIX=	lib

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Easy-to-use library for strong hashes such as MD5 and SHA1

USES=		gmake tar:bzip2
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--enable-static --with-gnu-ld
TEST_TARGET=	check

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libmhash.so

.include <bsd.port.mk>
#EOF

