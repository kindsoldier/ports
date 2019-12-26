#
# $Id$
#
PORTNAME=	dmidecode
PORTVERSION=	3.0
CATEGORIES=	sysutils
MASTER_SITES=	SAVANNAH

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Tool for dumping DMI (SMBIOS) contents in human-readable format

ONLY_FOR_ARCHS=	i386 amd64
USES=		tar:xz
SUB_FILES=	dmidecode

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/periodic/daily
	${INSTALL_SCRIPT} ${WRKDIR}/dmidecode \
		${STAGEDIR}${PREFIX}/etc/periodic/daily/320.dmidecode

.include <bsd.port.mk>
#EOF

