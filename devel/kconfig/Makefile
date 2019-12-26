#
# $Id$
#
PORTNAME=	kconfig
PORTVERSION=	2018.02.24
CATEGORIES=	devel
MASTER_SITES=	https://bitbucket.org/nuttx/tools/get/   #75eb4aa5ca64.zip
DISTNAME=       75eb4aa5ca64

MAINTAINER= homeunix7@gmail.com
COMMENT=	NuttX OS tools


WRKSRC= ${WRKDIR}/nuttx-tools-75eb4aa5ca64/kconfig-frontends

CONFIGURE_TARGET=#
USES+=		gmake
GNU_CONFIGURE=	yes
CFLAGS+=	-I${WRKSRC}/include -I${LOCALBASE}/include
CPPFLAGS+=	-I${WRKSRC}/include -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	cd ${WRKSRC} && autoreconf -fi


.include <bsd.port.mk>
#EOF
