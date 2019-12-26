# Created by: Johann Visagie <wjv@FreeBSD.org>
# $FreeBSD: head/textproc/py-ltxml/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	ltxml
PORTVERSION=	1.3
CATEGORIES=	textproc python
MASTER_SITES=	ftp://ftp.cogsci.ed.ac.uk/pub/LTXML/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyLTXML-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python bindings to the LT XML toolkit


BUILD_DEPENDS=	libltxml>=0:text/libltxml
RUN_DEPENDS=	libltxml>=0:text/libltxml

USES=		python:2.7
USE_PYTHON=	distutils autoplist
USE_LDCONFIG=	yes

DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}
EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}

post-install:
	${STRIP_CMD} \
		${STAGEDIR}${PYTHON}${PYTHON_SITELIBDIR}/PyLTXML/LTXMLinter.so

.include <bsd.port.mk>
#EOF
