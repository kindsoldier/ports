#
# $Id$
#
PORTNAME=	libmatroska
PORTVERSION=	1.4.1
CATEGORIES=	multimedia audio
MASTER_SITES+=	http://dl.matroska.org/downloads/libmatroska/
MASTER_SITES+=	http://www.bunkus.org/videotools/mkvtoolnix/sources/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Extensible Multimedia Container Format

LIB_DEPENDS=	libebml.so:text/libebml

USES+=		gmake
USES+=		tar:bzip2
DOS2UNIX_FILES=	make/linux/Makefile
BUILD_WRKSRC=	${WRKSRC}/make/linux
INSTALL_WRKSRC=	${WRKSRC}/make/linux
USE_LDCONFIG=	yes

INSTALL_DATA_DIR=	${INSTALL} -d -m 755

MAKE_ARGS+=	INSTALL_DIR_OPTS="${INSTALL} -d -m 755"
MAKE_ARGS+=	INSTALL_OPTS="${INSTALL_DATA}"
MAKE_ARGS+=	INSTALL_OPTS_LIB="${INSTALL_LIB}"
MAKE_ARGS+=	INSTALL=""
MAKE_ARGS+=	prefix=${PREFIX}
MAKE_ARGS+=	CXX="${CXX}"
MAKE_ARGS+=	CXXFLAGS="${CXXFLAGS}"
MAKE_ARGS+=	LIBEBML_INCLUDE_DIR="${LOCALBASE}/include"
MAKE_ARGS+=	LIBEBML_LIB_DIR="${LOCALBASE}/lib"

post-patch:
	${REINPLACE_CMD} -E \
		-e 's|^(all:.*)test|\1|' \
		${WRKSRC}/make/linux/Makefile

.include <bsd.port.mk>
#EOF
