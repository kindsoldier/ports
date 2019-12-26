#
# $Id$
#
PORTNAME=	t1lib
PORTVERSION=	5.1.2
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	libs/graphics
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	A Type 1 Rasterizer Library for UNIX/X11

USES+=		gmake
ALL_TARGET=	without_doc
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+=	--without-x
LIBTOOL= ${LOCALBASE}/bin/libtool

post-patch:
	${FIND} ${WRKSRC} -name "Makefile.in" | ${XARGS} ${REINPLACE_CMD} -e \
		's|^LIBTOOL[ ]*=.*|LIBTOOL=${LIBTOOL}|g'
	${REINPLACE_CMD} -e \
		'/ALLSUBDIRS/s|$$(DOCSUBDIRS)||g' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e \
		's|_LT_CURRENT=.*$$|_LT_CURRENT=5|g' ${WRKSRC}/configure


.include <bsd.port.mk>
#EOF
