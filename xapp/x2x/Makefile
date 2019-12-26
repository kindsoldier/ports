#
# $Id$
#
PORTNAME=	x2x
PORTVERSION=	1.27
CATEGORIES=	x11-servers
MASTER_SITES=	GHC

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Program to link multiple X servers together

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXtst.so:x11/libXtst


BUILD_DEPENDS+=	imake:devel/imake
BUILD_DEPENDS+=	tradcpp:devel/tradcpp
BUILD_DEPENDS+=	gccmakedep:devel/gccmakedep
BUILD_DEPENDS+=	xorg-cf-files>=1.0:xmisc/xorg-cf-files

USE_GITHUB=	yes
GH_ACCOUNT=	dottedmag

WRKSRC=		${WRKDIR}/${DISTNAME}
USES=		imake

PLIST_FILES=	bin/x2x man/man1/x2x.1.gz

post-extract:
	${LN} -sf x2x.1 ${WRKSRC}/x2x.man

post-patch:
	${REINPLACE_CMD} -e '/CC =/s|^|XCOMM| ; /CDEBUGFLAGS =/s|^|XCOMM|' ${WRKSRC}/Imakefile

.include <bsd.port.mk>
#EOF
