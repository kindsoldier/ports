# Created by: Olivier Duchateau
# $FreeBSD: head/net/py-urllib3/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	urllib3
PORTVERSION=	1.22
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	HTTP library with thread-safe connection pooling, file post, and more

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cryptography>=1.3.4:python/py-cryptography@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}idna>=2.0:python/py-idna@${PY_FLAVOR} \
		${PY_IPADDRESS} \
		${PYTHON_PKGNAMEPREFIX}openssl>=16.0:python/py-openssl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pysocks>=1.5.7:python/py-pysocks@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist  distutils
NO_ARCH=	yes
SUB_FILES=	pkg-message

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3400
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}certifi>=0:python/py-certifi@${PY_FLAVOR}
.endif

.include <bsd.port.post.mk>
