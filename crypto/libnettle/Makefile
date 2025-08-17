#
# $Id$
#
PORTNAME=	nettle
PORTVERSION=	3.5.1
CATEGORIES=	security
MASTER_SITES=	https://ftp.gnu.org/gnu/nettle/ #${MASTER_SITE_GNU}
#		http://www.lysator.liu.se/~nisse/archive/:liu
#		ftp://ftp.lysator.liu.se/pub/security/lsh/:liu
MASTER_SITE_SUBDIR=	${PORTNAME}/:DEFAULT
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	A low-level cryptographic library

LIB_DEPENDS+=	libgmp.so:math/libgmp

USES+=		gmake
USE_OPENSSL=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV+=	M4="/usr/bin/m4 -g"
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --disable-assembler
CONFIGURE_ARGS+= --enable-public-key
CPPFLAGS+=	-I${LOCALBASE}/include
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes

INFO=		nettle

.include <bsd.port.mk>
#EOF

