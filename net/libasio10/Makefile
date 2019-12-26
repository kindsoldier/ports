# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/net/asio/Makefile 487266 2018-12-12 00:15:49Z jbeich $

PORTNAME=	asio
PORTVERSION=	1.10.6
CATEGORIES=	net devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}%20(Stable)/
PKGNAMEPREFIX=  lib

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Cross-platform C++ library for network and low-level I/O programming

RUN_DEPENDS=	libboost>=0:devel/libboost64

USES=		tar:bz2
GNU_CONFIGURE=	yes
NO_BUILD=	yes
NO_ARCH=	yes
INSTALL_TARGET=	install-data
CFLAGS+=        -I${LOCALBASE}/include

.include <bsd.port.mk>
