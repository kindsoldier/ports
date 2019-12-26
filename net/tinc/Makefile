# Created by: ijliao
# $FreeBSD: head/security/tinc/Makefile 484628 2018-11-10 18:12:57Z bapt $

PORTNAME=	tinc
PORTVERSION=	1.0.35
CATEGORIES=	security
MASTER_SITES=	https://www.tinc-vpn.org/packages/ \
		http://www.tinc-vpn.org/packages/

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	Virtual Private Network (VPN) daemon

LIB_DEPENDS=	liblzo2.so:arch/liblzo2

USES=		gmake
CPE_VENDOR=	tinc-vpn
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--localstatedir=/var
USE_RC_SUBR=	tincd
INFO=		tinc

.include <bsd.port.mk>
