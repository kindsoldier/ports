# Created by: Olivier Duchateau
# $FreeBSD: head/net/py-ndg_httpsclient/Makefile 426451 2016-11-19 17:07:06Z sunpoet $

PORTNAME=	ndg_httpsclient
PORTVERSION=	0.4.2
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP/source/n/ndg-httpsclient
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Enhance HTTPS support for httplib and urllib2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyasn1>=0.1.4:python/py-pyasn1@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}openssl>=0.13:python/py-openssl@${PY_FLAVOR}

NO_ARCH=	yes
USE_PYTHON=	autoplist  distutils
USES=		python

.include <bsd.port.mk>
#EOF
