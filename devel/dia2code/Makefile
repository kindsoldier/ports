# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: head/devel/dia2code/Makefile 435566 2017-03-06 19:38:56Z bofh $

PORTNAME=	dia2code
PORTVERSION=	0.8.8
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Small utility used to generate code from a Dia diagram

PORTSCOUT=	limit:^0\.

LIB_DEPENDS+= libxml2.so:text/libxml2

USES=	gmake 
GNU_CONFIGURE=	yes


CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

post-install:
	${INSTALL_MAN} ${WRKSRC}/dia2code.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
