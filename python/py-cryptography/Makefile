# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/security/py-cryptography/Makefile 496506 2019-03-21 19:41:59Z sunpoet $

PORTNAME=	cryptography
PORTVERSION=	2.6.1
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Cryptographic recipes and primitives for Python developers

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>=1.8:python/py-cffi@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}asn1crypto>=0.21.0:python/py-asn1crypto@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cffi>=1.8:python/py-cffi@${PY_FLAVOR} \
#		${PY_ENUM34} \
#		${PY_IPADDRESS} \
		${PYTHON_PKGNAMEPREFIX}six>=1.4.1:python/py-six@${PY_FLAVOR}
# Python 2.7, 3.4-3.7
USES=		compiler:env python ssl
USE_PYTHON=	autoplist concurrent distutils

CFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB}

.include <bsd.port.pre.mk>

.if ${CHOSEN_COMPILER_TYPE} == gcc && ${COMPILER_VERSION} <= 42
post-patch:
	@${REINPLACE_CMD} -e 's|"-Wno-error=sign-conversion"||' \
		${WRKSRC}/src/_cffi_src/build_openssl.py
.endif

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/cryptography/hazmat/bindings/*.so

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.post.mk>
