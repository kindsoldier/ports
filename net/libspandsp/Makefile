#
# $Id$
#
PORTNAME=	spandsp
DISTVERSION=	0.0.6pre21
PORTVERSION=	${DISTVERSION:S/pre/./}
CATEGORIES=	comms
MASTER_SITES=	http://www.soft-switch.org/downloads/spandsp/
PKGNAMEPREFIX=	lib
EXTRACT_SUFX=	.tgz


MAINTAINER=	onborodin@gmail.com
COMMENT=	DSP library and software FAX machine

LIB_DEPENDS+=	libtiff.so:graph/libtiff


WRKSRC=		${WRKDIR}/spandsp-${DISTVERSION:C/pre.*//}

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+=	CPPFLAGS="-I${LOCALBASE}/include"
CONFIGURE_ARGS+=	LDFLAGS="-L${LOCALBASE}/lib" -C
USE_LDCONFIG=	yes

CONFLICTS=	*spandsp-[0-9]*

CONFIGURE_ARGS+=--disable-doc

.include <bsd.port.mk>
#EOF

