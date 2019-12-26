#
# $Id$
#
PORTNAME=	openproj
PORTVERSION=	1.4
CATEGORIES=	deskutils editors java
MASTER_SITES=	SF/${PORTNAME}/OpenProj%20Binaries/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Free, open source Project Manager

USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_BUILD=	yes

#DESKTOP_ENTRIES="OpenProject" "" "openproj" "openproj" "" ""

DATADIR=	${PREFIX}/share/${PORTNAME}
DATAFILES=	lib license openproj.jar readme.html

SUB_FILES=	openproj.sh

do-install:
	cd ${WRKSRC} \
	  && ${FIND} ${DATAFILES} -type d -exec ${MKDIR} ${STAGEDIR}${DATADIR}/{} \; \
	  && ${FIND} ${DATAFILES} -type f -exec ${INSTALL_DATA} {} ${STAGEDIR}${DATADIR}/{} \;
	${INSTALL_SCRIPT} ${WRKDIR}/openproj.sh ${STAGEDIR}${PREFIX}/bin/openproj
	${MKDIR} ${STAGEDIR}${PREFIX}/share/applications
	${INSTALL_DATA} ${FILESDIR}/*.desktop ${STAGEDIR}${PREFIX}/share/applications
	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${FILESDIR}/*.png ${STAGEDIR}${PREFIX}/share/pixmaps


.include <bsd.port.mk>
##EOF
