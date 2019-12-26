#
# $Id$
#
PORTNAME=	HTTP_Request
PORTVERSION=	1.4.4
CATEGORIES=	www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR classes providing an easy way to perform HTTP requests

BUILD_DEPENDS+=	${PEARDIR}/Net/URL.php:pear/pear-Net_URL
BUILD_DEPENDS+=	${PEARDIR}/Net/Socket.php:pear/pear-Net_Socket
RUN_DEPENDS+=	${BUILD_DEPENDS}

USES=	pear

.include <bsd.port.mk>
#EOF
