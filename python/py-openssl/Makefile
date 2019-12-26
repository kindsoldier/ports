# Created by: ijliao
# $FreeBSD: head/security/py-openssl/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	openssl
PORTVERSION=	17.5.0
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pyOpenSSL-${PORTVERSION}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Python interface to the OpenSSL library

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cryptography>=2.1.4:python/py-cryptography@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.5.2:python/py-six@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist  distutils pythonprefix

.include <bsd.port.mk>
