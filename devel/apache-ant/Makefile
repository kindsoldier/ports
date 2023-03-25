#
# $Id$
#
PORTNAME=	apache-ant
PORTVERSION=	1.10.6
CATEGORIES=	devel java
MASTER_SITES=	APACHE/ant/binaries/:bin LOCAL/hq:man
DISTFILES=	${ANT_DISTFILE}:bin \
		${MANPAGE_DISTFILE}:man
EXTRACT_ONLY=	${ANT_DISTFILE}

MAINTAINER=	java@FreeBSD.org
COMMENT=	Java- and XML-based build tool, conceptually similar to make


ANT_DISTFILE=	${PORTNAME}-${PORTVERSION}-bin.tar.bz2
MANPAGE_DISTFILE=	${PORTNAME}-manpage-${MANPAGE_VERSION}.tgz
MANPAGE_VERSION=	20030908
USES=		tar:bzip2
USE_JAVA=	yes

NO_BUILD=	yes
DATADIR=	${JAVASHAREDIR}/${PORTNAME}

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

MANPAGE_SUBDIR=	apache-ant-manpage
MANPAGE_WRKSRC=	${WRKSRC}/${MANPAGE_SUBDIR}

SUB_FILES=	ant.sh

post-extract:
	@${TAR} -C ${WRKSRC} -xzf ${DISTDIR}/${MANPAGE_DISTFILE}

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/bin
	${MKDIR} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKDIR}/ant.sh ${STAGEDIR}${PREFIX}/bin/ant
	${INSTALL_SCRIPT} ${WRKSRC}/bin/antRun ${STAGEDIR}${DATADIR}/bin/

.for data in etc lib
	cd ${WRKSRC} && ${COPYTREE_SHARE} ${data} ${STAGEDIR}${DATADIR}/
.endfor
	${MKDIR}  ${STAGEDIR}${PREFIX}/man/man1
	${INSTALL_MAN} ${MANPAGE_WRKSRC}/ant.1 ${STAGEDIR}${PREFIX}/man/man1
	${MKDIR}  ${STAGEDIR}${PREFIX}/man/man5
	${INSTALL_MAN} ${MANPAGE_WRKSRC}/build.xml.5 ${STAGEDIR}${PREFIX}/man/man5

.include <bsd.port.mk>
#EOF
