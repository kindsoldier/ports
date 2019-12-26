#
# $Id$
#
PORTNAME=	argyllcms
PORTVERSION=	1.7.0
CATEGORIES=	graphics
MASTER_SITES=	http://www.argyllcms.com/
DISTNAME=	Argyll_V${PORTVERSION}_src

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	ICC compatible color management system


BROKEN_powerpc64=	Does not build

BUILD_DEPENDS=	jam:devel/jam
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libtiff.so:graph/libtiff

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXinerama.so:x11/libXinerama
LIB_DEPENDS+=	libXrandr.so:x11/libXrandr
LIB_DEPENDS+=	libXrender.so:x11/libXrender

WRKSRC=		${WRKDIR}/Argyll_V${PORTVERSION}

USES=		compiler:c11 zip

post-patch:
	${REINPLACE_CMD} 's:711:755:g' ${WRKSRC}/Jambase

do-build:
#	cd ${WRKSRC} && ${MAKE_ENV} jam -a -fJambase -j${MAKE_JOBS_NUMBER}
	cd ${WRKSRC} && ${MAKE_ENV} jam  -fJambase


do-install:
	cd ${WRKSRC} && ${SETENV} DESTDIR=${STAGEDIR} PREFIX=${PREFIX} \
		REFSUBDIR=share/argyll/ref \
		jam  -fJambase -j${MAKE_JOBS_NUMBER} install

post-install:
	${RM} ${STAGEDIR}${PREFIX}/bin/Lic*
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/*

.include <bsd.port.mk>
#EOF
