#
# $Id$
#
PORTNAME=	lcms2
PORTVERSION=	2.6
CATEGORIES=	graphics
MASTER_SITES=	SF/lcms/lcms/${PORTVERSION} http://www.littlecms.com/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Accurate, fast, and small-footprint color management engine

LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libtiff.so:graph/libtiff


CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

#CONFIGURE_ARGS+= --without-jpeg
#CONFIGURE_ARGS+= --without-tiff 
CONFIGURE_ARGS+= --with-jpeg=${LOCALBASE}
CONFIGURE_ARGS+= --with-tiff=${LOCALBASE}

post-install:
	cd ${WRKSRC}/utils/ && ${INSTALL_MAN} linkicc/linkicc.1 psicc/psicc.1 transicc/transicc.1 \
	     ${STAGEDIR}/${PREFIX}/man/man1/

.include <bsd.port.mk>
#EOF
