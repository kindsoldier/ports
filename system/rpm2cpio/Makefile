# Created by: Juergen Lock <nox@jelal.kn-bremen.de>
# $FreeBSD: head/archivers/rpm2cpio/Makefile 408590 2016-02-09 20:06:21Z ak $

PORTNAME=	rpm2cpio
PORTVERSION=	1.4
CATEGORIES=	archivers
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	ak@FreeBSD.org
COMMENT=	Convert .rpm files to cpio format

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	bin/rpm2cpio

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/rpm2cpio

.include <bsd.port.mk>
