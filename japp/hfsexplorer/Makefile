# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/sysutils/hfsexplorer/Makefile 430490 2017-01-03 18:12:13Z mat $

PORTNAME=	hfsexplorer
PORTVERSION=	0.23
DISTVERSIONPREFIX=	${PORTNAME}-
CATEGORIES=	sysutils java

MAINTAINER=	vg@FreeBSD.org
COMMENT=	HFSExplorer read Mac-formatted harddisks and disk images

BUILD_DEPENDS=	ant:devel/apache-ant

DESKTOP_ENTRIES="hfsexplorer" "reader Mac-formatted harddisk" \
		"${DATADIR}/res/icon.png" "${PORTNAME}" \
		"System;Utility;Java;" false

USE_GITHUB=	yes
GH_PROJECT=	${PORTNAME}
GH_ACCOUNT=	unsound

USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_ARCH=	yes

do-configure:
	cd ${WRKSRC}/dist/bin && ${REINPLACE_CMD} -e 's|BASEDIR=".*"|BASEDIR="${DATADIR}/lib"|g' \
		hfsx.sh resview.sh unhfs.sh
	${REINPLACE_CMD} -e 's|BASEDIR=".*"|BASEDIR="${DATADIR}/lib"|g' \
		${WRKSRC}/dist/bin/hfsexplorer.sh

do-build:
	@cd ${WRKSRC} && ${SH} buildall.sh

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/lib
	${MKDIR} ${STAGEDIR}${DATADIR}/res
.for f in hfsx.sh resview.sh unhfs.sh
	cd ${WRKSRC} && ${INSTALL_SCRIPT} dist/bin/${f} ${STAGEDIR}${PREFIX}/bin
.endfor
	cd ${WRKSRC} && ${INSTALL_SCRIPT} dist/bin/hfsexplorer.sh ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	cd ${WRKSRC} && ${INSTALL_DATA} dist/lib/*.jar ${STAGEDIR}${DATADIR}/lib
	cd ${WRKSRC} && ${INSTALL_DATA} dist/res/icon.png ${STAGEDIR}${DATADIR}/res

.include <bsd.port.mk>
#EOF
