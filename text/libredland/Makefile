#
# $Id$
#
PORTNAME=	redland
PORTVERSION=	1.0.17
CATEGORIES=	textproc
MASTER_SITES=	http://download.librdf.org/source/
PKGNAMEPREFIX=	lib

MAINTAINER=	kde@FreeBSD.org
COMMENT=	High-level interface for RDF


LIB_DEPENDS+=	libltdl.so:devel/libtool
LIB_DEPENDS+=	libraptor2.so:text/libraptor2
LIB_DEPENDS+=	librasqal.so:text/librasqal
LIB_DEPENDS+=	libsqlite3.so:data/sqlite3


GNU_CONFIGURE=	yes
USES+=		gmake
USE_LDCONFIG=	yes

CONFIGURE_ARGS+= --with-threestore=no
CONFIGURE_ARGS+= --with-mysql=no
CONFIGURE_ARGS+= --with-postgresql=no
CONFIGURE_ARGS+= --with-sqlite=yes
CONFIGURE_ARGS+= --with-virtuoso=no
CONFIGURE_ARGS+= --with-bdb=no

post-patch:
	${REINPLACE_CMD} -e '/SUBDIRS/s, docs , ,' ${WRKSRC}/Makefile.in


.include <bsd.port.mk>
#EOF

