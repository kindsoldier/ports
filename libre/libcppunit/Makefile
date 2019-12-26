#
# $Id$
#
PORTNAME=	cppunit
PORTVERSION=	1.13.2
CATEGORIES=	devel
PKGNAMEPREFIX=	lib
MASTER_SITES=	http://dev-www.libreoffice.org/src/


MAINTAINER=	bdrewery@FreeBSD.org
COMMENT=	C++ port of the JUnit framework for unit testing

GNU_CONFIGURE=	yes
USES+=		gmake
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS+= --disable-doc --disable-doxygen --disable-html-docs

.include <bsd.port.mk>
#EOF

