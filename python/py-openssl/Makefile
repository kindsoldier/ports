# Created by: ijliao
# $FreeBSD: head/security/py-openssl/Makefile 508146 2019-08-05 09:11:10Z kai $

PORTNAME=	openssl
PORTVERSION=	19.0.0
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pyOpenSSL-${PORTVERSION}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Python interface to the OpenSSL library

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cryptography>=2.2.1:python/py-cryptography@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.5.2:python/py-six@${PY_FLAVOR}

USES=		cpe python
USE_PYTHON=	autoplist concurrent distutils pythonprefix

NO_ARCH=	yes

.include <bsd.port.mk>
