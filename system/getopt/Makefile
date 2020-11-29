# Created by: Sergei Kolobov <sergei@kolobov.com>
# $FreeBSD: head/misc/getopt/Makefile 423014 2016-09-30 19:24:30Z tijl $

PORTNAME=	getopt
PORTVERSION=	1.1.6
CATEGORIES=	misc
MASTER_SITES+=	http://frodo.looijaard.name/system/files/software/getopt/
MASTER_SITES+=	LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Replacement for getopt(1) that supports GNU-style long options

USES=		gmake
MAKE_ARGS+=	CC=${CC} LIBCGETOPT=0
MAKE_ARGS+=	WITHOUT_GETTEXT=1

post-patch:
	@${RM} ${WRKSRC}/gnu/*.o

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/getopt

.include <bsd.port.mk>
