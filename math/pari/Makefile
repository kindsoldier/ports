# Created by: Yoshiaki UCHIKAWA <yoshiaki@kt.rim.or.jp>
# $FreeBSD: head/math/pari/Makefile 417685 2016-06-27 21:30:34Z rene $

PORTNAME=	pari
PORTVERSION=	2.3.5
CATEGORIES=	math
MASTER_SITES=	http://pari.math.u-bordeaux.fr/pub/pari/unix/OLD/ \
		http://mirrors.rit.edu/zi/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Mathematics library and advanced calculator package

LIB_DEPENDS=	libgmp.so:math/libgmp

MAKE_JOBS_UNSAFE=	yes

ALL_TARGET=	gp
CONFIGURE_ENV=	ld="${LD}" perl="${PERL}" ranlib="${RANLIB}"
CONFIGURE_SCRIPT=	Configure
CONFIGURE_ARGS+=	--mandir=${MANPREFIX}/man/man1
CONFIGURE_ARGS+=	--prefix=${PREFIX} 
CONFIGURE_ARGS+=	--share-prefix=${PREFIX}/share
CONFIGURE_ARGS+=	--with-gmp=${LOCALBASE}
CONFIGURE_ARGS+=	--graphic=none
HAS_CONFIGURE=	yes
MAKE_ENV+=	STRIP="${STRIP_CMD}"
USE_LDCONFIG=	yes
USE_PERL5=	build
USES=		perl5


#PORTDATA=	*
PORTEXAMPLES=	*

GP_VERSION=	${PORTVERSION:R}

post-patch:
	${REINPLACE_CMD} -E '/^list=/s/(ld|ranlib|perl|emacs)//g' \
		${WRKSRC}/Configure
	${REINPLACE_CMD} -e '/^CFLAGS=/s/\$$cflags//' \
		${WRKSRC}/config/get_cc

post-build:
	${STRIP_CMD} ${WRKSRC}/*/libpari-gmp.so.*

.include <bsd.port.mk>
#EOF
