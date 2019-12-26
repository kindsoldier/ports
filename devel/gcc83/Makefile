#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
#
PORTNAME=	gcc
PORTVERSION=	8.3.0
DIST_SUBDIR=	gnu
MASTER_SITES+=	 http://ftp.gnu.org/gnu/${PORTNAME}/${PORTNAME}-${PORTVERSION}/
CATEGORIES=	devel

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU C Compiler v${PORTVERSION}


LIB_DEPENDS+=	libgmp.so:math/libgmp
LIB_DEPENDS+=	libmpc.so:math/libmpc
LIB_DEPENDS+=	libmpfr.so:math/libmpfr

BUILD_DEPENDS+= gawk:text/gawk

RUN_DEPENDS+= gas:devel/binutils
RUN_DEPENDS+= gld:devel/binutils
BUILD_DEPENDS+= ${RUN_DEPENDS}


CONFIGURE_TARGET= ${TARGET}
USES+=		tar:xz
GNU_CONFIGURE=	yes
USES+=		gmake

.include <bsd.port.pre.mk>

TARGET=	${ARCH:S/amd64/x86_64/}-freebsd${OSREL:R}
LANGUAGES=	"c,fortran,c++"

CFLAGS+= 	-I${LOCALBASE}/include -fPIC
CXXFLAGS+=	-I${LOCALBASE}/include -fPIC
LDFLAGS+=	-L${LOCALBASE}/lib

TARGLIB=	${PREFIX}/lib/gcc/${PORTVERSION}

USE_LDCONFIG=	${TARGLIB}

WRKSRC=	${WRKDIR}/${PORTNAME}-${PORTVERSION}/build
PATCH_WRKSRC= ${WRKDIR}/${PORTNAME}-${PORTVERSION}
CONFIGURE_SCRIPT= ../configure


CONFIGURE_ARGS+= --target=${TARGET}

CFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ARGS+= --disable-nls
CONFIGURE_ARGS+= --libdir=${TARGLIB}
#CONFIGURE_ARGS+= --program-suffix=${SUFFIX}
CONFIGURE_ARGS+= --with-gmp=${LOCALBASE}
CONFIGURE_ARGS+= --with-gxx-include-dir=${TARGLIB}/include/c++
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-system-zlib

CONFIGURE_ARGS+= --infodir=${PREFIX}/info/${PORTNAME}

CONFIGURE_ARGS+= --enable-languages="${LANGUAGES}"
CONFIGURE_ARGS+= --with-system-zlib
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --program-suffix=''
CONFIGURE_ARGS+= --program-transform-name='s&^cpp&gcpp&'

#CONFIGURE_ARGS+= --disable-shared
CONFIGURE_ARGS+= --with-mpfr=${LOCALBASE}
CONFIGURE_ARGS+= --with-gmp=${LOCALBASE}

CONFIGURE_ARGS+= --disable-bootstrap
CONFIGURE_ARGS+= --disable-multilib
CONFIGURE_ARGS+= --enable-gnu-indirect-function

CONFIGURE_ARGS+= --with-as=${LOCALBASE}/bin/gas
CONFIGURE_ARGS+= --with-ld=${LOCALBASE}/bin/gld

MAKE_ARGS+= infodir=${PREFIX}/info/${PORTNAME}
MAKE_ARGS+= BOOT_CFLAGS="${CFLAGS}"
MAKE_ARGS+= CFLAGS="${CFLAGS}"
MAKE_ARGS+= AWK=${LOCALBASE}/bin/gawk
MAKE_ARGS+= STAGE1_CXXFLAGS="-fbracket-depth=512 -fPIC"

PLIST_SUB+= TARGET=${CONFIGURE_TARGET}
PLIST_SUB+= VERSION=${PORTVERSION}

post-extract:
	${MKDIR} ${WRKSRC}

pre-configure:
	${MKDIR} ${WRKSRC}
	${FIND} ${WRKSRC} -name 'config.cache' -delete

INFO+= ${PORTNAME}/cpp
INFO+= ${PORTNAME}/cppinternals
INFO+= ${PORTNAME}/gcc
INFO+= ${PORTNAME}/gccinstall
INFO+= ${PORTNAME}/gccint
INFO+= ${PORTNAME}/libgomp
INFO+= ${PORTNAME}/libquadmath

PLIST= pkg-plist.${ARCH}

.include <bsd.port.post.mk>
#EOF
