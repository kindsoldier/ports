# Created by: bauerm
# $FreeBSD: head/math/ntl/Makefile 538330 2020-06-09 17:09:46Z yuri $

PORTNAME=	ntl
PORTVERSION=	11.4.3
CATEGORIES=	math
MASTER_SITES=	http://www.shoup.net/ntl/
PKGNAMEPREFIX=  lib

MAINTAINER=	ndowens04@gmail.com
COMMENT=	Victor Shoup's Number Theory Library

USES=		compiler:c11 libtool perl5 gmake
USE_LDCONFIG=	yes
USE_PERL5=	build

LIB_DEPENDS+= libgmp.so:math/libgmp

HAS_CONFIGURE=	yes

CONFIGURE_ARGS+= AR="${AR}" 
CONFIGURE_ARGS+= CXX="${CXX}" 
CONFIGURE_ARGS+= CXXFLAGS="${CXXFLAGS}" 
CONFIGURE_ARGS+= DEF_PREFIX="${LOCALBASE}" 
CONFIGURE_ARGS+= LDFLAGS="${LDFLAGS}"
CONFIGURE_ARGS+= PREFIX="${PREFIX}"
CONFIGURE_ARGS+= RANLIB="${RANLIB}"
CONFIGURE_ARGS+= SHARED=on

CFLAGS+=	-fPIC
WRKSRC_SUBDIR=	src
MAKEFILE=	makefile
TEST_TARGET=	check

CONFIGURE_ON=	NTL_GMP_LIP=on
CONFIGURE_ON=	NTL_GF2X_LIB=on
CONFIGURE_OFF=	NATIVE=off

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libntl.so.*

.include <bsd.port.mk>
