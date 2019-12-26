#
# $Id$
#
PORTNAME=	lzop
DISTVERSION=	1.04
CATEGORIES=	archivers
MASTER_SITES=	http://www.lzop.org/download/ LOCAL/mandree

MAINTAINER=	mandree@FreeBSD.org
COMMENT=	Fast file compressor similar to gzip, using the LZO library

LIB_DEPENDS+=	liblzo2.so:arch/liblzo2

GNU_CONFIGURE=	yes
USES+=	gmake
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


.include <bsd.port.mk>
#EOF
