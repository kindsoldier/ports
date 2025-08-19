#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
#
PORTNAME=	gcc
PORTVERSION=	10.4.0
DIST_SUBDIR=	gnu
MASTER_SITES+=	http://ftp.gnu.org/gnu/${PORTNAME}/${PORTNAME}-${PORTVERSION}/
MASTER_SITES+=	ftp://ftp.fu-berlin.de/unix/languages/gcc/snapshots/9-20190504/
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
PATCH_STRIP= -p0

.include <bsd.port.pre.mk>

TARGET=	${ARCH:S/amd64/x86_64/}-freebsd${OSREL:R}
LANGUAGES=	"c,fortran,c++"

USE_LDCONFIG=	${TARGLIB}

CFLAGS+= 	-fPIC -I${LOCALBASE}/include
CXXFLAGS+=	-fPIC -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


TARGLIB=	${PREFIX}/lib/gcc/${PORTVERSION}

WRKSRC=            ${WRKDIR}/${PORTNAME}-${DISTVERSION}
PATCH_WRKSRC=      ${WRKDIR}/${PORTNAME}-${DISTVERSION}
CONFIGURE_WRKSRC=  ${WRKDIR}/${PORTNAME}-${DISTVERSION}/build
BUILD_WRKSRC=	   ${WRKDIR}/${PORTNAME}-${DISTVERSION}/build
INSTALL_WRKSRC=	   ${WRKDIR}/${PORTNAME}-${DISTVERSION}/build


#CONFIGURE_SCRIPT= ${WRKSRC}/configure
CONFIGURE_SCRIPT= ../configure

CONFIGURE_ARGS+= --target=${TARGET}

#CONFIGURE_ARGS+= --program-suffix=${SUFFIX}

CFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ARGS+= --disable-nls
CONFIGURE_ARGS+= --libdir=${TARGLIB}
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
MAKE_ARGS+= STAGE1_CXXFLAGS="-fPIC -fbracket-depth=512"

PLIST_SUB+= TARGET=${CONFIGURE_TARGET}
PLIST_SUB+= VERSION=${PORTVERSION}

post-extract:
	${MKDIR} ${BUILD_WRKSRC}

pre-configure:
	${MKDIR} ${BUILD_WRKSRC}
	${FIND} ${BUILD_WRKSRC} -name 'config.cache' -delete

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
