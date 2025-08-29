#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
#
PORTNAME=	gcc
PORTVERSION=	14.2.0
DIST_SUBDIR=	gnu
#MASTER_SITES+=	http://ftp.gnu.org/gnu/${PORTNAME}/${PORTNAME}-${PORTVERSION}/
#MASTER_SITES+=	ftp://ftp.fu-berlin.de/unix/languages/gcc/snapshots/9-20190504/
CATEGORIES=	devel
MASTER_SITES=	GCC
PKGNAMEPREFIX=	${TARGET}-

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU C Compiler v${PORTVERSION}


LIB_DEPENDS+=	libgmp.so:math/libgmp
LIB_DEPENDS+=	libmpc.so:math/libmpc
LIB_DEPENDS+=	libmpfr.so:math/libmpfr

BUILD_DEPENDS+= gawk:text/gawk
RUN_DEPENDS+= gas:devel/binutils
RUN_DEPENDS+= gld:devel/binutils
BUILD_DEPENDS+= ${RUN_DEPENDS}

USES+=		bison gmake perl5 tar:xz compiler:c++11-lang

TARGET = arm-eabi
CONFIGURE_TARGET= ${TARGET}
GNU_CONFIGURE=	yes
PATCH_STRIP= -p0
USE_CXXSTD=	gnu++11

.include <bsd.port.pre.mk>

LANGUAGES=	"c,c++"

CFLAGS+=	-I${LOCALBASE}/include -Os

CONFIGURE_ARGS= --target=${TARGET}
CONFIGURE_ARGS+= --with-as=${LOCALBASE}/bin/${TARGET}-as
CONFIGURE_ARGS+= --with-ld=${LOCALBASE}/bin/${TARGET}-ld
CONFIGURE_ARGS+= --enable-languages="${LANGUAGES}"

CONFIGURE_ARGS+= --disable-nls
CONFIGURE_ARGS+= --with-gmp=${LOCALBASE}
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-system-zlib
CONFIGURE_ARGS+= --with-mpfr=${LOCALBASE}
CONFIGURE_ARGS+= --with-gmp=${LOCALBASE}
CONFIGURE_ARGS+= --without-zstd
CONFIGURE_ARGS+= --disable-libssp
CONFIGURE_ARGS+= --disable-shared

CONFIGURE_ARGS+= --with-gxx-include-dir=${TARGLIB}/include/c++
CONFIGURE_ARGS+= --infodir=${PREFIX}/info/${PKGNAMEPREFIX}-${PORTNAME}

CONFIGURE_ARGS+= --disable-bootstrap
CONFIGURE_ARGS+= --disable-libstdcxx
CONFIGURE_ARGS+= --enable-multilib
CONFIGURE_ARGS+= --with-multilib-list=rmprofile


MAKE_ARGS+= infodir=${PREFIX}/info/${PORTNAME}

PLIST_SUB+= TARGET=${CONFIGURE_TARGET}
PLIST_SUB+= VERSION=${PORTVERSION}

post-configure:
	${MKDIR} ${WRKSRC}/gcc/include


.include <bsd.port.post.mk>
#EOF
