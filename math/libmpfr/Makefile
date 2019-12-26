#
# $Id: Makefile 2571 2009-09-24 19:59:21Z root $
# $URL: file:///usr2/svn/ports5/math-libs/libmpfr/Makefile $
#
PORTNAME=	mpfr
PORTVERSION=	3.1.2
PKGNAMEPREFIX=	lib
CATEGORIES=	math devel
MASTER_SITES=	http://www.mpfr.org/mpfr-current/ http://www.mpfr.org/mpfr-${PORTVERSION}/

MAINTAINER=	onborodin@gmail.com
COMMENT=	A library for multiple-precision floating-point computations

LIB_DEPENDS+=	libgmp.so:math/libgmp

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+=--with-gmp=${LOCALBASE}
CONFIGURE_ARGS+=--enable-shared
CONFIGURE_ARGS+=--infodir=${LOCALBASE}/info
INSTALLS_SHLIB=	yes

INFO=		mpfr

post-patch:
	${REINPLACE_CMD} -e 's/install-nobase_dist_docDATA$$//' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF
