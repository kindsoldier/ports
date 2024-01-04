# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: head/devel/sbt/Makefile 553897 2020-11-02 11:35:41Z ale $

PORTNAME=	sbt
PORTVERSION=	1.4.2
CATEGORIES=	devel java
MASTER_SITES=	https://github.com/sbt/sbt/releases/download/v${PORTVERSION}/

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Build tool for Scala projects

USES=		tar:tgz

#OPTIONS_DEFINE=	ADVANCED # PRELOADED
#OPTIONS_DEFAULT=ADVANCED
#ADVANCED_DESC=	Install advanced bash shell-script (required for Java 11+)
#PRELOADED_DESC=	Install preloaded jars for offline usage

NO_BUILD=	yes
NO_ARCH=	yes
USE_JAVA=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}

#ADVANCED_RUN_DEPENDS+=	bash:shells/bash
#PRELOADED_RUN_DEPENDS+=	rsync:net/rsync
#ADVANCED_SUB_FILES_OFF=	sbt.sh

PLIST_FILES=	bin/sbt

PORTDATA=	*

.include <bsd.port.options.mk>

post-patch:
	${REINPLACE_CMD} 's|%%PREFIX%%|${PREFIX}|' ${WRKSRC}/bin/sbt

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/bin/sbt-launch.jar ${STAGEDIR}${DATADIR}

	${INSTALL_DATA} ${WRKSRC}/bin/java9-rt-export.jar ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/bin/sbt ${STAGEDIR}${DATADIR}
	${MKDIR} ${STAGEDIR}${DATADIR}/conf
	${INSTALL_DATA} ${FILESDIR}/sbtopts ${STAGEDIR}${DATADIR}/conf
#.if ${PORT_OPTIONS:MPRELOADED}
#	cd ${WRKSRC}/lib && ${COPYTREE_SHARE} local-preloaded ${STAGEDIR}${DATADIR}
#.endif
	${LN} -s ../${DATADIR_REL}/sbt ${STAGEDIR}${PREFIX}/bin/
#	${INSTALL_SCRIPT} ${WRKDIR}/sbt.sh ${STAGEDIR}${PREFIX}/bin/sbt

.include <bsd.port.mk>
