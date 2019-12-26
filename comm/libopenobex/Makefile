#
# $Id$
#
PORTNAME=	openobex
PORTVERSION=	1.7.1
CATEGORIES=	comms net
MASTER_SITES=	http://www.hendrik-sattler.de/downloads/${PORTNAME}/${PORTVERSION}/
DISTNAME=	${PORTNAME}-${PORTVERSION}-Source
PKGNAMEPREFIX=	lib

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Open source implementation of the OBEX protocol

USE_LDCONFIG=	yes
USES=		cmake dos2unix
DOS2UNIX_FILES=	CMakeLists.txt
CMAKE_ARGS+=	-DPKGCONFIG_INSTALL_DIR:STRING="${PREFIX}/lib/pkgconfig"
CMAKE_ARGS+=	-DBUILD_DOCUMENTATION=OFF

.include <bsd.port.mk>
#EOF
