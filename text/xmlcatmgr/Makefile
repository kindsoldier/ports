#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
#
PORTNAME=	xmlcatmgr
PORTVERSION=	2.2
CATEGORIES=	textproc
MASTER_SITES=	SF


MAINTAINER=	onborodin@gmail.com
COMMENT=	SGML and XML catalog manager

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= DEFAULT_CATALOG_SGML="${CATALOG_SGML}"
CONFIGURE_ARGS+= DEFAULT_CATALOG_XML="${CATALOG_XML}"
CONFIGURE_ARGS+= --disable-docs

PLIST_FILES+=	man/man1/xmlcatmgr.1.gz

XMLCATMGR=	${PREFIX}/bin/xmlcatmgr
CATALOG_SGML=	${LOCALBASE}/share/sgml/catalog
CATALOG_XML=	${LOCALBASE}/share/xml/catalog.xml


SUB_FILES+= pkg-install pkg-deinstall
PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install

LIST_SUB+= XMLCATMGR=${XMLCATMGR} 
LIST_SUB+= CATALOG_SGML=${CATALOG_SGML}
LIST_SUB+= CATALOG_XML=${CATALOG_XML}

SUB_LIST+= ${LIST_SUB}
PLIST_SUB+= ${LIST_SUB}

.include <bsd.port.mk>
#EOF
