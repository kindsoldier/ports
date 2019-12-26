#
# $Id$
#
PORTNAME=	obexapp
PORTVERSION=	1.4.15
CATEGORIES=	comms net
MASTER_SITES=	http://people.freebsd.org/~emax/obexapp/

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Obex application to transfer objects to mobile equipment

LIB_DEPENDS+=	libopenobex.so:comm/libopenobex
#LIB_DEPENDS+=	libexpat.so:text/libexpat2

WRKSRC=		${WRKDIR}/${PORTNAME}

USES+=	uidfix

MAKE_ENV+= NO_WERROR=yes

#post-patch:
#	${REINPLACE_CMD} -e 's/-liconv/${ICONV_LIB}/' ${WRKSRC}/Makefile

.include <bsd.port.mk>
#EOF
