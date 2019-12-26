#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
# $URL$
#
PORTNAME=	docbook-xsl
PORTVERSION=	1.71.1
CATEGORIES=	textproc
MASTER_SITES=	SF/docbook/${PORTNAME}/${PORTVERSION}:src \
		SF/docbook/${PORTNAME}-doc/${PORTVERSION}:doc
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}:src
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}:src ${PORTNAME}-doc-${PORTVERSION}${EXTRACT_SUFX}:doc
DIST_SUBDIR=	sgml

MAINTAINER=	onborodin@gmail.com
COMMENT=	XSL DocBook stylesheets

BUILD_DEPENDS+=	xmlcatmgr:text/xmlcatmgr
RUN_DEPENDS+=	xmlcatmgr:text/xmlcatmgr

NO_BUILD=	yes

XSL_DIRREL=	share/xsl/docbook
XSL_DIR=	${PREFIX}/${XSL_DIRREL}

XMLCATMGR=	${LOCALBASE}/bin/xmlcatmgr

CATALOG_XML=	${LOCALBASE}/share/xml/catalog.xml
CATALOG_XSL=	${XSL_DIR}/catalog.xml

PKGINSTALL=		${WRKDIR}/pkg-install
PKGDEINSTALL=		${WRKDIR}/pkg-deinstall

SUB_FILES = pkg-install pkg-deinstall

SUB_LIST+= XMLCATMGR=${XMLCATMGR}
SUB_LIST+= XSL_DIR=${XSL_DIR}
SUB_LIST+= CATALOG_XSL=${CATALOG_XSL}
SUB_LIST+= CATALOG_XML=${CATALOG_XML}
PLIST_SUB+= XSL_DIR=${XSL_DIRREL}


do-install:
	${MKDIR} -p ${STAGEDIR}${XSL_DIR}
.for file in *.xsl *.xml *.dtd *.html *.css *.gif *.png *.tif *.svg
	cd ${WRKSRC} && ${FIND} . -name '[a-z]${file}' -and -type f \
	     | ${CPIO} -d -p ${STAGEDIR}${XSL_DIR}
.endfor
	${INSTALL_DATA} ${WRKSRC}/VERSION  ${STAGEDIR}${XSL_DIR}/
.for file in *.orig ChangeLog README* RELEASE* BUGS* WhatsNew* NEWS*
	cd ${STAGEDIR}${XSL_DIR} && \
	    ${FIND} ${STAGEDIR}${XSL_DIR} -name '${file}' -exec ${RM} {} \;
.endfor
	cd ${STAGEDIR}${XSL_DIR} && ${RM} -rf extensions
#	cd ${STAGEDIR}${XSL_DIR} && ${RM} catalog.xml
	${CHOWN} -R ${SHAREOWN}:${SHAREGRP} ${STAGEDIR}${XSL_DIR}

.include <bsd.port.mk>
#EOF
