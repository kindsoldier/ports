# Created by: vanilla
# $FreeBSD: head/devel/protobuf/Makefile 497411 2019-03-31 13:41:02Z sunpoet $

PORTNAME=	protobuf
PORTVERSION=	3.7.1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Data interchange format library

BROKEN_sparc64=	fails to compile: no atomic ops available

USES=		autoreconf compiler:c++11-lang gmake libtool localbase pathfix pkgconfig

CFLAGS+=	-D_THREAD_SAFE -DGOOGLE_PROTOBUF_NO_RTTI -I${WRKSRC}/src
CONFIGURE_ENV=	CC_FOR_BUILD="${CC}"
CONFIGURE_ENV+=	CFLAGS_FOR_BUILD="${CFLAGS}"
CONFIGURE_ENV+=	CPPFLAGS_FOR_BUILD="${CPPFLAGS}"
CONFIGURE_ENV+=	CXX_FOR_BUILD="${CXX}"
CONFIGURE_ENV+=	CXXFLAGS_FOR_BUILD="${CXXFLAGS}"
CONFIGURE_ENV+=	LDFLAGS_FOR_BUILD="${LDFLAGS}"
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

TEST_ARGS=	${MAKE_ARGS} ${_MAKE_JOBS}
TEST_TARGET=	check

USE_CXXSTD=	c++11
USE_LDCONFIG=	yes

GH_ACCOUNT=	protocolbuffers
USE_GITHUB=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|^check-local:|disabled-&|' ${WRKSRC}/Makefile.am
	@${REINPLACE_CMD} -Ee '/gtest|mock/ s|[^ ]*lib(.*)\.la|-l\1|' ${WRKSRC}/src/Makefile.am

.include <bsd.port.mk>
