# Created by: Aaron Hurt <ahurt@anbcs.com>
# $FreeBSD: head/devel/protobuf-c/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=		protobuf-c
PORTVERSION=		1.3.1
DISTVERSIONPREFIX=	v
CATEGORIES=		devel

MAINTAINER=	truckman@FreeBSD.org
COMMENT=	Code generator and libraries to use Protocol Buffers from pure C

LIB_DEPENDS=	libprotobuf.so:devel/libprotobuf

USES=		autoreconf compiler:c++11-lang gmake libtool
GNU_CONFIGURE=	yes
USE_GITHUB=	yes
USE_LDCONFIG=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

ALL_TARGET=	all
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
