#
# $Id$
#
PORTNAME=	rasqal
PORTVERSION=	0.9.33
CATEGORIES=	textproc
MASTER_SITES=	http://download.librdf.org/source/ SF/librdf/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	lib

MAINTAINER=	kde@FreeBSD.org
COMMENT=	High-level interface for RDF

LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libgmp.so:math/libgmp
#LIB_DEPENDS+=	libmpfr.so:math/libmpfr
LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libicudata.so:devel/libicu
LIB_DEPENDS+=	libicuuc.so:devel/libicu
LIB_DEPENDS+=	libpcre.so:text/libpcre

LIB_DEPENDS+=	libraptor2.so:text/libraptor2

LIB_DEPENDS+=	libxml2.so:text/libxml2
LIB_DEPENDS+=	libxslt.so:text/libxslt

GNU_CONFIGURE=	yes
USES+=		gmake
USE_LDCONFIG=	yes


CONFIGURE_ARGS+= --with-decimal=gmp --with-gmp=${LOCALBASE}
#CONFIGURE_ARGS+= --with-decimal=mpfr --with-mpfr=${LOCALBASE}
CFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/pcre

post-patch:
	${REINPLACE_CMD} -e '/SUBDIRS/s, docs , ,' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF

