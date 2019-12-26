#
# $Id$
#
PORTNAME=	clucene
PORTVERSION=	2.3.3.4
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-core-unstable/2.3
DISTNAME=	${PORTNAME}-core-${PORTVERSION}
PKGNAMEPREFIX=  lib
PKGNAMESUFFIX=  -core

MAINTAINER=	office@FreeBSD.org
COMMENT=	CLucene is a C++ port of Lucene

BUILD_DEPENDS=	${LOCALBASE}/lib/libboost_regex.a:devel/libboost

USES=		cmake gmake
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DBUILD_CONTRIBS_LIB=ON
CXXFLAGS+=	-D__LONG_LONG_SUPPORTED -D_WCHAR_H_CPLUSPLUS_98_CONFORMANCE_

post-patch:
	${REINPLACE_CMD} -e 's|%%DATADIR%%|${DATADIR_REL}|' \
	    ${WRKSRC}/src/core/CMakeLists.txt

.include <bsd.port.mk>
#EOF
