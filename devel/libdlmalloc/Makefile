# Created by: roberto
# $FreeBSD: head/devel/libdlmalloc/Makefile 485591 2018-11-22 10:14:55Z rene $

PORTNAME=	dlmalloc
PORTVERSION=	2.8.6
CATEGORIES=	devel
MASTER_SITES=	ftp://gee.cs.oswego.edu/pub/misc/
DISTFILES=	malloc-${PORTVERSION}.c malloc-${PORTVERSION}.h
PKGNAMEPREFIX=	lib

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Small, fast malloc library by Doug Lea

NO_WRKSUBDIR=	yes
USE_LDCONFIG=	yes

do-extract:
	${MKDIR} ${WRKSRC}
	cd ${DISTDIR} && ${INSTALL_DATA} ${DISTFILES} ${WRKSRC}
	${INSTALL_DATA} -p ${FILESDIR}/Makefile ${WRKSRC}

.include <bsd.port.mk>
