# $FreeBSD: head/ports-mgmt/pkg/Makefile 562140 2021-01-20 14:35:40Z manu $

PORTNAME=	pkg
DISTVERSION=	2.2.2
_PKG_VERSION=	${DISTVERSION}
CATEGORIES=	ports-mgmt

MAINTAINER=	pkg@FreeBSD.org
COMMENT=	Package manager

USE_GITHUB=	yes
GH_ACCOUNT=	freebsd

USE_LDCONFIG=	${PREFIX}/lib/compat/pkg
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--mandir=${PREFIX}/man --prefix="${PREFIX}"
CONFIGURE_ENV=	CC_FOR_BUILD="${CC}"

# Use a submake as 'deinstall install' needs to reevaluate PKG_REGISTER
# so that pkg-static is used from the wrkdir
USE_SUBMAKE=	yes
CFLAGS+=	-Wno-error
PKG_DEPENDS=    #
#LIBLZMA_LIBS=	-llzma

post-patch:
#	${REINPLACE_CMD} -e "s|-llzma|${LIBLZMA_LIBS}|g" ${WRKSRC}/auto.def \
#		${WRKSRC}/src/Makefile.autosetup ${WRKSRC}/tests/Makefile.autosetup
##	${REINPLACE_CMD} -e 's,libdata/pkgconfig,lib/pkgconfig,' ${WRKSRC}/auto.def

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/compat/pkg


.include <bsd.port.mk>
