# $FreeBSD: head/sysutils/samefile/Makefile 364465 2014-08-09 18:55:02Z antoine $

PORTNAME=	samefile
PORTVERSION=	2.15
CATEGORIES=	sysutils
MASTER_SITES=	http://www.schweikhardt.net/

MAINTAINER=	schweikh@FreeBSD.org
COMMENT=	Find files with identical contents

CONFLICTS=	samesame-[0-9]*

GNU_CONFIGURE=	yes
USES+=  gmake

CFLAGS+=	-ansi -pedantic -Wall -Wshadow -Wpointer-arith 
CFLAGS+=	-Wbad-function-cast -Wcast-qual -Wcast-align 
CFLAGS+=	-Wstrict-prototypes -Wmissing-prototypes 
CFLAGS+=	-Wmissing-declarations -Wredundant-decls
CFLAGS+=	-Wnested-externs -Winline -Wno-long-long

post-build:
	cd ${WRKSRC}; ${MAKE} test

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/samefile

.include <bsd.port.mk>
