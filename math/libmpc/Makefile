#
# $Id$
#
PORTNAME=	mpc
PORTVERSION=	1.0.2
CATEGORIES=	math devel
MASTER_SITES=	http://www.multiprecision.org/mpc/download/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Library of complex numbers with arbitrarily high precision

LIB_DEPENDS+=	libgmp.so:math/libgmp
LIB_DEPENDS+=	libmpfr.so:math/libmpfr

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-gmp=${LOCALBASE}
CONFIGURE_ARGS+=	--with-mpfr=${LOCALBASE}
USE_LDCONFIG=	yes

INFO=	mpc

regression-test: build
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} check

.include <bsd.port.mk>
#EOF

