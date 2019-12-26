#
# $Id: Makefile 1787 2008-09-17 18:27:01Z root $
# $URL$
#
PORTNAME=	libxml2
PORTVERSION= 2.9.7
CATEGORIES=	textproc gnome devel
MASTER_SITES+=	ftp://xmlsoft.org/libxml2/
MASTER_SITES+=	${MASTER_SITE_GNOME}
MASTER_SITE_SUBDIR=	sources/libxml2/${PORTVERSION:R}/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Xml parser library for GNOME

LIB_DEPENDS+=	libiconv.so:text/libiconv

USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --with-iconv=${LOCALBASE}
CONFIGURE_ARGS+= --with-html-dir=${PREFIX}/share/doc
CONFIGURE_ENV+=	CPPFLAGS="-fPIC -I${LOCALBASE}/include \
 -DXML_XML_DEFAULT_CATALOG=\\\"file://${PREFIX}/share/xml/catalog.xml\\\" \
 -DXML_SGML_DEFAULT_CATALOG=\\\"file://${PREFIX}/share/sgml/catalog\\\" " 
CFLAGS+=	-fPIC
LIBS+=		-L${LOCALBASE}/lib
LDFLAGS+=	-L${LOCALBASE}/lib -L${WRKSRC}
INSTALLS_SHLIB=	yes

USES+=	python:2.7
PYTHON_VER?=	2.7
PYTHON_SUFFIX?=	${PYTHON_VER:S/.//}
PYTHON_VERSION?= python${PYTHON_VER}
CONFIGURE_OPTION+=	--withh-python=${LOCALBASE}/bin/python${PYTHON_VERSION}
BUILD_DEPENDS+= python${PYTHON_VER}:lang/python${PYTHON_SUFFIX}


CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --with-c14n
CONFIGURE_ARGS+= --with-catalog
CONFIGURE_ARGS+= --with-docbook
CONFIGURE_ARGS+= --with-ftp
CONFIGURE_ARGS+= --with-html
CONFIGURE_ARGS+= --with-http
CONFIGURE_ARGS+= --with-iconv
CONFIGURE_ARGS+= --with-modules
CONFIGURE_ARGS+= --with-output
CONFIGURE_ARGS+= --with-pattern
CONFIGURE_ARGS+= --with-push
CONFIGURE_ARGS+= --with-python=${LOCALBASE}/bin/python${_PYTHON_VER:S/.//g}
CONFIGURE_ARGS+= --with-reader
CONFIGURE_ARGS+= --with-readline
CONFIGURE_ARGS+= --with-regexps
CONFIGURE_ARGS+= --with-sax1
CONFIGURE_ARGS+= --with-schemas
CONFIGURE_ARGS+= --with-schematron
CONFIGURE_ARGS+= --with-threads
CONFIGURE_ARGS+= --with-valid
CONFIGURE_ARGS+= --with-writer
CONFIGURE_ARGS+= --with-xinclude
CONFIGURE_ARGS+= --with-xpath
CONFIGURE_ARGS+= --with-xptr

post-patch:
	${REINPLACE_CMD} -e 's/^SUBDIRS =.*$$/SUBDIRS = include . doc python/' \
	  ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's/^SUBDIRS =.*$$/SUBDIRS = . /' \
	  ${WRKSRC}/doc/Makefile.in
	${REINPLACE_CMD} -e 's/install-data-am: install-data-local/install-data-am:/' \
	  ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's/install-confexecDATA install-libLTLIBRARIES/install-libLTLIBRARIES/' \
	  ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's/install-data-local install-man/install-man/' \
	  ${WRKSRC}/doc/Makefile.in
	${REINPLACE_CMD} -e 's/xml-2.0/xml2/g' \
	  ${WRKSRC}/configure ${WRKSRC}/libxml*.pc.in \
	  ${WRKSRC}/Makefile.in
	cd ${WRKSRC} && ${CP} libxml-2.0.pc.in libxml2.pc.in
	cd ${WRKSRC} && ${CP} libxml-2.0-uninstalled.pc.in libxml2-uninstalled.pc.in

post-install:
	${RM} -f ${STAGEDIR}/${PREFIX}/lib/xml2Conf.sh
	${PYTHON_VERSION} -m compileall ${STAGEDIR}/${PYTHON_SITELIBDIR}
	${PYTHON_VERSION} -O -m compileall ${STAGEDIR}/${PYTHON_SITELIBDIR}

.include <bsd.port.mk>
#EOF
