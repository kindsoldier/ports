# $FreeBSD: head/lang/jimtcl/Makefile 447670 2017-08-10 09:54:00Z gahr $

PORTNAME=	jimtcl
PORTVERSION=	0.77
CATEGORIES=	lang tcl

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Small footprint implementation of the Tcl programming language

USE_GITHUB=	yes
GH_ACCOUNT=	msteveb

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX}
CONFIGURE_ARGS+= --full
CONFIGURE_ARGS+= --enable-utf8 
#CONFIGURE_ARGS+= --enable-shared

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/jimsh

.include <bsd.port.mk>
#EOF
