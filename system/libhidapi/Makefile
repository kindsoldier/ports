# $FreeBSD: head/comms/hidapi/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	hidapi
DISTVERSIONPREFIX=	${PORTNAME}-
DISTVERSION=	0.8.0-rc1
CATEGORIES=	comms
PKGNAMEPREFIX=  lib

MAINTAINER=	tijl@FreeBSD.org
COMMENT=	Library to access USB HID-class devices

USE_GITHUB=	yes
GH_ACCOUNT=	signal11

USES=		autoreconf
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib

#pre-configure:
#	${CP} ${LOCALBASE}/share/gettext/config.rpath ${WRKSRC}

.include <bsd.port.mk>
