# Created by: Marc Lagrange <rhaamo@gruik.at>
# $FreeBSD: head/sysutils/hwstat/Makefile 514793 2019-10-19 12:21:22Z rakuco $

PORTNAME=	hwstat
PORTVERSION=	0.5.1
CATEGORIES=	sysutils
MASTER_SITES=	https://BSDforge.com/projects/source/sysutils/hwstat/

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Command line tool to display CPU temp and battery infos

USES=		uidfix
MAKE_ARGS+=	BINDIR=${PREFIX}/bin MANDIR=${PREFIX}/man/man
PLIST_FILES=	bin/hwstat man/man1/hwstat.1.gz

.include <bsd.port.mk>
