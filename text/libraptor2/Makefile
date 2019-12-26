#
# $Id$
#
PORTNAME=	raptor2
PORTVERSION=	2.0.15
CATEGORIES=	textproc
MASTER_SITES=	http://download.librdf.org/source/ SF/librdf/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	lib

MAINTAINER=	kde@FreeBSD.org
COMMENT=	RDF Parser Toolkit for Redland

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libcurl.so:net/libcurl

LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libicuuc.so:devel/libicu
LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libxslt.so:text/libxslt


GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --with-xml2-config=${LOCALBASE}/bin/xml2-config
CONFIGURE_ARGS+= --with-curl-config=${LOCALBASE}/bin/curl-config
CONFIGURE_ARGS+= --with-icu-config=${LOCALBASE}/bin/icu-config
CONFIGURE_ARGS+= --with-www=curl
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e '/SUBDIRS/s, docs , ,' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF
