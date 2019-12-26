#
# $Id$
#
PORTNAME=	libebml
PORTVERSION=	1.3.0
CATEGORIES=	textproc
MASTER_SITES+=	http://dl.matroska.org/downloads/libebml/
MASTER_SITES+=	http://www.bunkus.org/videotools/mkvtoolnix/sources/

MAINTAINER=	onborodin@gmail.com
COMMENT=	EBML (Extensible Binary Meta Language), sort of binary version of XML

USES+=		gmake
USES+=		tar:bzip2
BUILD_WRKSRC=	${WRKSRC}/make/linux
INSTALL_WRKSRC=	${WRKSRC}/make/linux
USE_LDCONFIG=	yes

MAKE_ARGS+=	INSTALL_DIR_OPTS="${INSTALL} -d -m 755" 
MAKE_ARGS+=	INSTALL_OPTS="${INSTALL_DATA}"
MAKE_ARGS+=	INSTALL_OPTS_LIB="${INSTALL_LIB}"
MAKE_ARGS+=	INSTALL=""
MAKE_ARGS+=	prefix=${STAGEDIR}${PREFIX}
MAKE_ARGS+=	CXX="${CXX}"
MAKE_ARGS+=	CXXFLAGS="${CXXFLAGS}"

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib
	${MKDIR} ${STAGEDIR}${PREFIX}/include/ebml


.include <bsd.port.mk>
#EOF

