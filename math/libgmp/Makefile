#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
# $URL: file:///usr2/svn/ports5/math-libs/libgmp/Makefile $
#
PORTNAME=	gmp
PORTVERSION=	6.1.2
CATEGORIES=	math devel
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	gmp
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	A free library for arbitrary precision arithmetic

GNU_CONFIGURE=	yes
USES+=		gmake tar:xz
CONFIGURE_ENV=	MAKEINFO="makeinfo --no-split"
CONFIGURE_ARGS+= --enable-cxx
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

INFO=	gmp

post-extract:
	${RM} -f ${WRKSRC}/gmp.info*

.include <bsd.port.mk>
#EOF
