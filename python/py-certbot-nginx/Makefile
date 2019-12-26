# $FreeBSD: head/security/py-certbot-nginx/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	certbot-nginx
PORTVERSION=	${ACME_VERSION}
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}


ACME_VERSION=	0.26.1


MAINTAINER=	python@FreeBSD.org
COMMENT=	NGINX plugin for Certbot

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}acme>=${ACME_VERSION}:python/py-acme@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}certbot>=${ACME_VERSION}:python/py-certbot@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mock>0:python/py-mock@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}openssl>0:python/py-openssl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyparsing>=1.5.5:python/py-pyparsing@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>0:python/py-zope.interface@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

post-patch:
	${REINPLACE_CMD} -e '/server_root=/ s|/etc/nginx|${LOCALBASE}&|' ${WRKSRC}/certbot_nginx/constants.py

.include <bsd.port.mk>
