#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
# $URL$
# 
PORT_BASENAME=  docbook-xml
DOCBOOK_VERSION= 4.5
PORTNAME=	${PORT_BASENAME}${DOCBOOK_VERSION:S/.//}
PORTVERSION=	1.0
CATEGORIES=	textproc
MASTER_SITES=	http://www.oasis-open.org/docbook/xml/${DOCBOOK_VERSION}/
DISTNAME=	${PORT_BASENAME}-${DOCBOOK_VERSION}
DIST_SUBDIR=	sgml

MAINTAINER=	onborodin@gmail.com
COMMENT=	DocBook/XML DTD V${DOCBOOK_VERSION}, designed for technical documentation

EXTRACT_DEPENDS+=	${LOCALBASE}/bin/unzip:arch/unzip


BUILD_DEPENDS+=	unzip:arch/unzip
BUILD_DEPENDS+=	xmlcatmgr:text/xmlcatmgr
RUN_DEPENDS+=	xmlcatmgr:text/xmlcatmgr

PKGNAMEPREFIX=	dtd-
USES+=		zip
NO_BUILD=	yes
NO_WRKSUBDIR=	yes


XMLCATMGR=	${LOCALBASE}/bin/xmlcatmgr
DTD_DIRREL=	share/xml/dtd/docbook/${DOCBOOK_VERSION}
DTD_DIR=	${PREFIX}/${DTD_DIRREL}
DTD_BASE_URI=	"http://www.oasis-open.org/docbook/xml/${DOCBOOK_VERSION}"
MASTER_CATALOG_XML= ${PREFIX}/share/xml/catalog.xml

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install

SUB_FILES+= pkg-install pkg-deinstall

SUB_LIST+=	XMLCATMGR="${XMLCATMGR}"
SUB_LIST+=	MASTER_CATALOG_XML="${MASTER_CATALOG_XML}"
SUB_LIST+=	DTD_DIR="${DTD_DIR}"
SUB_LIST+=	DTD_BASE_URI="${DTD_BASE_URI}"

PLIST_SUB+= DTD_DIRREL="${DTD_DIRREL}"


post-extract:
	${MV} ${WRKSRC}/docbook.cat ${WRKSRC}/catalog

do-install:
	${MKDIR} -p ${STAGEDIR}${DTD_DIR}/ent
.for file in *.dtd *.mod catalog.xml
	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${DTD_DIR}
.endfor
.for file in *.ent
	${INSTALL_DATA} ${WRKSRC}/ent/${file} ${STAGEDIR}${DTD_DIR}/ent
.endfor
	${CHMOD} -R ${SHAREMODE} ${STAGEDIR}${DTD_DIR}/*
	${CHOWN} -R ${SHAREOWN}:${SHAREGRP} ${STAGEDIR}${DTD_DIR}

.include <bsd.port.mk>
#EOF

