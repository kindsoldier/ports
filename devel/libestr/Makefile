# Created by: Jim Riggs <ports@christianserving.org>
# $FreeBSD: head/devel/libestr/Makefile 505671 2019-07-02 12:13:09Z koobs $

PORTNAME=	libestr
PORTVERSION=	0.1.11
CATEGORIES=	devel
MASTER_SITES=	https://libestr.adiscon.com/files/download/

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Library for some string essentials

USES=		pathfix
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-testbench

INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
