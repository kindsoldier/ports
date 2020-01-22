# Created by: Peter Ankerstal <peter@pean.org>
# $FreeBSD: head/sysutils/zfs-periodic/Makefile 407685 2016-02-01 06:27:54Z pi $

PORTNAME=	zfs-periodic
PORTVERSION=	1.0.20130213
CATEGORIES=	sysutils

MAINTAINER=	peter@pean.org
COMMENT=	Simple way of maintaining zfs snapshots using the periodic system

USE_GITHUB=	yes
GH_ACCOUNT=	ross
GH_TAGNAME=	a481121

NO_ARCH=	yes
NO_BUILD=	yes

PERIODIC_DIRS+=	etc/periodic/hourly
PERIODIC_DIRS+=	etc/periodic/daily
PERIODIC_DIRS+=	etc/periodic/weekly
PERIODIC_DIRS+=	etc/periodic/monthly
PERIODIC_DIRS+=	etc/periodic

PERIODIC_FILES+= etc/periodic/hourly/000.zfs-snapshot
PERIODIC_FILES+= etc/periodic/daily/000.zfs-snapshot
PERIODIC_FILES+= etc/periodic/weekly/000.zfs-snapshot
PERIODIC_FILES+= etc/periodic/monthly/000.zfs-snapshot

post-patch:
.for FILE in ${PERIODIC_FILES}
	${REINPLACE_CMD} -e "s|/etc/periodic/zfs-snapshot|${PREFIX}/etc/periodic/zfs-snapshot|" \
		${WRKSRC}/${FILE}
.endfor

do-install:
.for DIR in ${PERIODIC_DIRS}
	${MKDIR} ${STAGEDIR}${PREFIX}/${DIR}
.endfor
	${INSTALL_SCRIPT} ${WRKSRC}/etc/periodic/zfs-snapshot ${STAGEDIR}${PREFIX}/etc/periodic/

.for FILE in ${PERIODIC_FILES}
	${INSTALL_SCRIPT} ${WRKSRC}/${FILE} ${STAGEDIR}${PREFIX}/${FILE}
.endfor

.include <bsd.port.mk>
