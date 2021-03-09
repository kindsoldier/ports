# Created by: John Polstra <jdp@FreeBSD.org>
# $FreeBSD: head/net/pptpclient/Makefile 523541 2020-01-19 11:10:13Z sunpoet $

PORTNAME=	pptpclient
DISTVERSION=	1.10.0
CATEGORIES=	net net-vpn
MASTER_SITES=	SF/${PORTNAME}/pptp/pptp-${PORTVERSION}
DISTNAME=	pptp-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PPTP client for establishing a VPN link with an NT server

USES=		perl5 gmake

CFLAGS+=	-DUSER_PPP
MAKE_ARGS=	CC="${CC}" DEBUG="" OPTIMIZE="${CFLAGS}" PPPD=/usr/sbin/ppp
USE_RC_SUBR=	pptp

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/pptp ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_MAN} ${WRKSRC}/pptp.8 ${STAGEDIR}${PREFIX}/man/man8
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${FILESDIR}/README ${FILESDIR}/ppp.conf ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
