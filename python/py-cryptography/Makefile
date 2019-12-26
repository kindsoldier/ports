# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/security/py-cryptography/Makefile 476488 2018-08-06 03:25:20Z koobs $

PORTNAME=	cryptography
PORTVERSION=	2.3
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Cryptographic recipes and primitives for Python developers

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>=1.7:python/py-cffi@${PY_FLAVOR}

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}idna>=2.1:python/py-idna@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}asn1crypto>=0.21.0:python/py-asn1crypto@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.4.1:python/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cffi>=1.7:python/py-cffi@${PY_FLAVOR}
#		${PY_ENUM34} ${PY_IPADDRESS}

# Python 2.7, 3.4-3.6
USES=		compiler:env python
USE_PYTHON=	autoplist  distutils

CFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB}

.include <bsd.port.pre.mk>

.if ${CHOSEN_COMPILER_TYPE} == gcc && ${COMPILER_VERSION} <= 42
post-patch:
	${REINPLACE_CMD} -e 's|"-Wno-error=sign-conversion"||' \
		${WRKSRC}/src/_cffi_src/build_openssl.py
.endif

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/cryptography/hazmat/bindings/*.so

.include <bsd.port.post.mk>
