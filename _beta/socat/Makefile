# Created by: ijliao
# $FreeBSD: head/net/socat/Makefile 522208 2020-01-06 08:09:40Z ehaupt $

PORTNAME=	socat
PORTVERSION=	1.7.3.4
CATEGORIES=	net
MASTER_SITES=	http://www.dest-unreach.org/socat/download/ \
		LOCAL/ehaupt

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Multipurpose relay and more

USES=		compiler gmake tar:bzip2
#USE_RC_SUBR=	socat

GNU_CONFIGURE=	yes

PORTSCOUT=	skipv:2.0.0-b2

.include <bsd.port.pre.mk>

.if ${COMPILER_TYPE} == "clang"
CFLAGS+=	-Wno-unused-comparison
.endif

.include <bsd.port.post.mk>
