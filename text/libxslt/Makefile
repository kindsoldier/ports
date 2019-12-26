#
# $Id: Makefile 2666 2009-10-10 19:11:01Z root $
# $URL$
#
PORTNAME=	libxslt
PORTVERSION=	1.1.28
CATEGORIES=	textproc
MASTER_SITES+=	ftp://xmlsoft.org/libxml2/ 

MAINTAINER=	onborodin@gmail.com
COMMENT=	The XSLT C library for GNOME

BUILD_DEPENDS+= python2.7:lang/python27
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libxml2.so:text/libxml2

USES+=	python:2.7,build
PYTHON_VER=	2.7
PYTHON_SUFFIX?=	${PYTHON_VER:S/.//}
PYTHON_VERSION?= python${PYTHON_VER}
CONFIGURE_OPTION+=	--withh-python=${LOCALBASE}/bin/python${PYTHON_VERSION}
BUILD_DEPENDS+= python${PYTHON_VER}:lang/python${PYTHON_SUFFIX}


USES+=		gmake
GNU_CONFIGURE=	yes
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --with-html-dir=${PREFIX}/share/doc
CONFIGURE_ARGS+= --with-libxml-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --without-crypto
CPPFLAGS+=	-I${LOCALBASE}/include
#  -DXML_SGML_DEFAULT_CATALOG=\\\"file://${PREFIX}/share/xml/catalog.xml\\\" "
LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	${REINPLACE_CMD} -e 's|-2.0|2|g' ${WRKSRC}/*.pc.in
	${REINPLACE_CMD} -e 's|install-data-local install-man|install-man|g' ${WRKSRC}/doc/Makefile.in
	${REINPLACE_CMD} -e 's|install-binSCRIPTS install-confexecDATA|install-binSCRIPTS |g' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF

