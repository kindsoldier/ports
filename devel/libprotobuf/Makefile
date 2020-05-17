# Created by: vanilla
# $FreeBSD: head/devel/protobuf/Makefile 515220 2019-10-22 23:33:43Z sunpoet $

PORTNAME=	protobuf
PORTVERSION=	3.11.4
DISTVERSIONPREFIX=	all-
CATEGORIES=	devel
MASTER_SITES=	https://github.com/protocolbuffers/protobuf/releases/download/v${PORTVERSION}/
PKGNAMEPREFIX=  lib

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Data interchange format library

USES=		compiler:c++11-lang gmake localbase pkgconfig

CFLAGS+=	-D_THREAD_SAFE -DGOOGLE_PROTOBUF_NO_RTTI -I${WRKSRC}/src

CONFIGURE_ENV+=	CC_FOR_BUILD="${CC}"
CONFIGURE_ENV+=	CFLAGS_FOR_BUILD="${CFLAGS}"
CONFIGURE_ENV+=	CPPFLAGS_FOR_BUILD="${CPPFLAGS}"
CONFIGURE_ENV+=	CXX_FOR_BUILD="${CXX}"
CONFIGURE_ENV+=	CXXFLAGS_FOR_BUILD="${CXXFLAGS}"
CONFIGURE_ENV+=	LDFLAGS_FOR_BUILD="${LDFLAGS}"

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_CXXSTD=	c++11
USE_LDCONFIG=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

post-patch:
	${REINPLACE_CMD} -e 's|^check-local:|disabled-&|' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -Ee 's,[^ 	]*lib(gtest|gmock.*)\.la,-l\1,' ${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
