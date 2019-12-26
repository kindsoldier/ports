#
# $Id$
#
PORTNAME=	ffs2recov
PORTVERSION=	1.0
CATEGORIES=	sysutils
MASTER_SITES=	http://www.exit.com/Archives/FreeBSD/

MAINTAINER=	sten@blinkenlights.nl
COMMENT=	Utility to recover UFS2 filesystems

USES=		tar:bzip2 uidfix
WRKSRC=		${WRKDIR}/${PORTNAME}

PLIST_FILES+=	sbin/ffs2recov
PLIST_FILES+=	man/man8/ffs2recov.8.gz

MAKE_ENV+=	BINDIR=${PREFIX}/sbin 
MAKE_ENV+=	MANDIR=${MANPREFIX}/man/man
MAKE_ENV+=	WARNS=0

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/sbin
	${MKDIR} ${STAGEDIR}${MANPREFIX}/man/man8

.include <bsd.port.mk>
#EOF
