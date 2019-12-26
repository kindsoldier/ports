#
# $Id$
#
PORTNAME=	SOAP
PORTVERSION=	0.13.0
CATEGORIES=	net www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR SOAP Client/Server for PHP

BUILD_DEPENDS=	${PEARDIR}/HTTP/Request.php:pear/pear-HTTP_Request
RUN_DEPENDS=	${BUILD_DEPENDS}

USES=	pear

BUILD_DEPENDS+=	${PEARDIR}/Mail.php:pear/pear-Mail
BUILD_DEPENDS+=	${PEARDIR}/Mail/mime.php:pear/pear-Mail_Mime
BUILD_DEPENDS+=	${PEARDIR}/Net/DIME.php:pear/pear-Net_DIME

.include <bsd.port.mk>
#EOF
