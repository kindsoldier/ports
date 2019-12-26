#
# $Id$
#
PORTNAME=	liborcus
PORTVERSION=	0.12.1
CATEGORIES=	devel misc
MASTER_SITES=	http://kohei.us/files/orcus/src/

MAINTAINER=	office@FreeBSD.org
COMMENT=	Standalone file import filter library for spreadsheet documents

BUILD_DEPENDS=	${LOCALBASE}/include/mdds/global.hpp:libre/libmdds
#LIB_DEPENDS+=	libzip.so:arch/libzip
LIB_DEPENDS+=	libboost_system.so:devel/libboost

BOOST_PREFIX=   ${LOCALBASE}/boost64
CPPFLAGS+=	-I${BOOST_PREFIX}/include
LDFLAGS+=	-L${BOOST_PREFIX}/lib

GNU_CONFIGURE=	yes
USES+=		gmake
USES+=		tar:xz
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS+=	--disable-spreadsheet-model --disable-werror
CONFIGURE_ARGS+=	--with-boost="${BOOST_PREFIX}/boost64"
CONFIGURE_ARGS+=	--with-boost-system=boost_system
CONFIGURE_ARGS+= --disable-python 
CONFIGURE_ENV=	ZLIB_CFLAGS="-I/usr/include" ZLIB_LIBS="-lz"
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


FILES+=	${WRKSRC}/Makefile.in 
FILES+=	${WRKSRC}/*/Makefile.in 
FILES+=	${WRKSRC}/*/*/Makefile.in 
FILES+=	${WRKSRC}/*/*/*/Makefile.in 
FILES+=	${WRKSRC}/*.pc.in
FILES+=	${WRKSRC}/configure


post-patch:
	${REINPLACE_CMD} -e 's,mdds-1.2,mdds,g' ${FILES}
	${REINPLACE_CMD} -e 's,-@ORCUS_API_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@ORCUS_API_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$ORCUS_API_VERSION,,g' ${FILES}


post-configure:
#	cd ${WRKSRC} && ${CP} liborcus-0.8.pc liborcus.pc

.include <bsd.port.mk>
#EOF
