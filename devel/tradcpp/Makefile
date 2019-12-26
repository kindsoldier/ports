#
# $Id$
#
PORTNAME=	tradcpp
PORTVERSION=	0.5.1
CATEGORIES=	devel
MASTER_SITES=	http://ftp.NetBSD.org/pub/NetBSD/misc/dholland/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Traditional (K&R-style) C preprocessor

USES=		uidfix

PLIST_FILES+=	bin/${PORTNAME}
PLIST_FILES+=	man/man1/${PORTNAME}.1.gz

MAKE_ARGS+=	BINDIR=${PREFIX}/bin
MAKE_ARGS+=	MANDIR=${MANPREFIX}/man/man

.include <bsd.port.mk>
#EOF
