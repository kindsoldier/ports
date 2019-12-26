# Created by: Pav Lucistnik <pav@FreeBSD.org>
# $FreeBSD: head/net/bird/Makefile 508496 2019-08-10 15:39:20Z olivier $

PORTNAME=	bird
PORTVERSION=	1.6.7
CATEGORIES=	net
MASTER_SITES=	ftp://bird.network.cz/pub/bird/

MAINTAINER=	olivier@FreeBSD.org
COMMENT?=	Dynamic IP routing daemon (${FLAVOR:Uipv4:S/ip/IP/} version)

USES=		autoreconf bison gmake ncurses readline

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--localstatedir=/var

MAKE_JOBS_UNSAFE=	yes

USE_RC_SUBR=	${PKGBASE}

#GROUPS=		birdvty

#PORTSCOUT=	limit:^1\.

#CONFIGURE_ARGS+=	--enable-ipv6

PORTEXAMPLES= *

post-install:
	${MKDIR} -p ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/bird.conf.example ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
