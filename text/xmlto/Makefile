# Created by: Sergei Kolobov <sergei@kolobov.com>
# $FreeBSD: head/textproc/xmlto/Makefile 361979 2014-07-15 17:03:31Z adamw $

PORTNAME=	xmlto
PORTVERSION=	0.0.26
CATEGORIES=	textproc
MASTER_SITES+=	https://fedorahosted.org/releases/x/m/xmlto/:xmlto
MASTER_SITES+=	LOCAL/mandree/:xmlto
MASTER_SITES+=	http://www.antennahouse.com/XSLsample/sample-xsl-xhtml2fo/:xsl
MASTER_SITES+=	LOCAL/mandree/:xsl
DISTFILES=	${PORTNAME}-${PORTVERSION}${EXTRACT_SUFX}:xmlto \
		xhtml2fo.xsl:xsl
DIST_SUBDIR=	${PORTNAME}
EXTRACT_ONLY=	${PORTNAME}-${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Front-end to an XSL toolchain

BUILD_DEPENDS+=	${BASH_CMD}:lang/bash
BUILD_DEPENDS+=	${GETOPT_CMD}:system/getopt
BUILD_DEPENDS+=	xmllint:text/libxml2
BUILD_DEPENDS+=	xsltproc:text/libxslt
#		${XSL_DIR}:textproc/docbook-xsl
#		paperconf:print/libpaper
#		w3m:www/w3m
#		${LOCALBASE}/share/xml/docbook/4.2:textproc/docbook-xml
RUN_DEPENDS:=	${BUILD_DEPENDS}

SUB_FILES=	pkg-message

USES+=		tar:bzip2
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	BASH=${BASH_CMD} GETOPT=${GETOPT_CMD} PDFXMLTEX=${PDFXMLTEX_CMD}
MAKE_ENV+=	HOME=/dev/null

BASH_CMD=	${LOCALBASE}/bin/bash
GETOPT_CMD=	${LOCALBASE}/bin/getopt
XSL_DIR=	${LOCALBASE}/share/xsl/docbook
PDFXMLTEX_CMD=	${LOCALBASE}/bin/pdftex


post-patch:
	# get rid of nonstandard "type" option -t:
	cd ${WRKSRC} && ${FIND} . -type f -exec ${REINPLACE_CMD} -i '' -e 's/type -t/which/;' '{}' '+'
	# get rid of GNU-make-ism (BSD make defines $< only in suffix rules)
	${REINPLACE_CMD} -e '/^GEN_MANPAGE/{s/\$$</$$>/;}' ${WRKSRC}/Makefile.in

post-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${DISTDIR}/${DIST_SUBDIR}/xhtml2fo.xsl ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
#EOF
