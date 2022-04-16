#
# $Id: Makefile 2715 2009-11-19 10:26:38Z root $
#
PORTNAME=	coreutils
PORTVERSION=	9.1
DIST_SUBDIR=	gnu
MASTER_SITES+=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR= ${PORTNAME}
CATEGORIES=	sysutils 
PKGNAMEPREFIX=	g

COMMENT= 	The GNU file utilities
MAINTAINER=	onborodin@gmail.com

LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libintl.so:devel/gettext

GNU_CONFIGURE=	yes
USES+=		tar:xz
USES+=		gmake
CONFIGURE_ARGS+= --program-prefix="g"
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info

CONFIGURE_ARGS+= --disable-silent-rules
CONFIGURE_ARGS+= --enable-dependency-tracking
CONFIGURE_ARGS+= --without-gmp
CONFIGURE_ENV+= FORCE_UNSAFE_CONFIGURE=1

INFO=	coreutils


.include <bsd.port.pre.mk>

post-build:
	${REINPLACE_CMD} -e "s/ lib / /g" ${WRKSRC}/Makefile


post-install:
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  gtest.1 g[.1
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/g* \
		${STAGEDIR}${PREFIX}/libexec/coreutils/libstdbuf.so

.include <bsd.port.post.mk>


#EOF
