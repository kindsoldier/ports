# Created by: Michael Haro <mharo@area51.fremont.ca.us>
# $FreeBSD: head/audio/libmikmod/Makefile 424427 2016-10-21 15:21:13Z mat $

PORTNAME=	libmikmod
PORTVERSION=	3.3.8
CATEGORIES=	audio
MASTER_SITES=	SF/mikmod/libmikmod/${PORTVERSION}/

MAINTAINER=	neuroworker@gmail.com
COMMENT=	MikMod Sound Library

USES=		cpe gmake pathfix pkgconfig
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-esd
USE_LDCONFIG=	yes

INFO=		mikmod

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/${PORTNAME}.so.*

.include <bsd.port.mk>
