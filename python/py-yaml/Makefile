# Created by: ijliao@FreeBSD.org
# $FreeBSD: head/devel/py-yaml/Makefile 474268 2018-07-09 15:21:31Z jpaetzel $

PORTNAME=	yaml
PORTVERSION=	3.13
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyYAML-${PORTVERSION}

MAINTAINER=	jpaetzel@FreeBSD.org
COMMENT=	Python YAML parser

LIBYAML_DESC=	Use textproc/libyaml for faster parsing

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.pre.mk>

PYDISTUTILS_SETUP+=		--with-libyaml
PYDISTUTILS_BUILD_TARGET=	build_ext
PYDISTUTILS_BUILDARGS+=		--include-dirs=${LOCALBASE}/include
PYDISTUTILS_BUILDARGS+=         --library-dirs=${LOCALBASE}/lib
LIB_DEPENDS+=			libyaml.so:text/libyaml

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/_yaml.so

#PYDISTUTILS_SETUP+=		--without-libyaml
#NO_ARCH=			yes

.include <bsd.port.post.mk>
#EOF
