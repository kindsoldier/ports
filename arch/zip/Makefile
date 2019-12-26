#
# $Id: Makefile 2176 2009-08-17 10:16:24Z ziggi $
#
PORTNAME=	zip
PORTVERSION=	3.0
MASTER_SITES=	SF ${MASTER_SITE_SOURCEFORGE}
MASTER_SITE_SUBDIR=	infozip infozip/Zip%203.x%20%28latest%29/${PORTVERSION}
#infozip/Zip%203.x%20%28latest%29/3.0/

DISTNAME=	${PORTNAME}${PORTVERSION:S/.//}
CATEGORIES=	archivers

MAINTAINER=	onborodin@gmail.com
COMMENT=	Create/update ZIP files compatible with pkzip

MAKEFILE=	unix/Makefile
ALL_TARGET=	generic

do-install:
	${MKDIR} -p ${STAGEDIR}${PREFIX}/bin
	${MKDIR} -p ${STAGEDIR}${PREFIX}/man/man1
.for file in zip zipcloak zipnote zipsplit
	${INSTALL_PROGRAM} ${WRKSRC}/${file} ${STAGEDIR}${PREFIX}/bin
.endfor
.for man in zip.1 zipcloak.1 zipnote.1 zipsplit.1
	${INSTALL_MAN} ${WRKSRC}/man/${man} ${STAGEDIR}${PREFIX}/man/man1
.endfor

PKG_PLIST+= bin/zip
PKG_PLIST+= bin/zipcloak
PKG_PLIST+= bin/zipnote
PKG_PLIST+= bin/zipsplit

PLIST_FILES+=	man/man1/zip.1.gz
PLIST_FILES+=	man/man1/zipcloak.1.gz
PLIST_FILES+=	man/man1/zipnote.1.gz
PLIST_FILES+=	man/man1/zipsplit.1.gz

.include <bsd.port.mk>
#EOF
