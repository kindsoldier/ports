#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
#
PORTNAME=	gcc
PORTVERSION=	6.4.0
DIST_SUBDIR=	gnu
#MASTER_SITES+=	 http://ftp.gnu.org/gnu/gcc/gcc-${PORTVERSION}/
MASTER_SITES=	GCC/releases/gcc-${DISTVERSION}

CATEGORIES=	devel
PKGNAMEPREFIX=	${TARGET}-


MAINTAINER= homeunix7@gmail.com
COMMENT=	GNU Compiler Collection for bare metal arm cross-development

LIB_DEPENDS+=	libgmp.so:math/libgmp
LIB_DEPENDS+=	libmpc.so:math/libmpc
LIB_DEPENDS+=	libmpfr.so:math/libmpfr
RUN_DEPENDS+=	${TARGET}-as:devel/${TARGET}-binutils
BUILD_DEPENDS+=	${TARGET}-as:devel/${TARGET}-binutils

GNU_CONFIGURE=	yes
USES+=		gmake tar:xz

TARGET=		arm-eabi

LANGUAGES=	c

CONFIGURE_TARGET= #
CONFIGURE_ARGS+= --target=${TARGET}
CONFIGURE_ARGS+= --enable-languages='${LANGUAGES}'
CONFIGURE_ARGS+= --with-system-zlib
CONFIGURE_ARGS+= --with-mpfr=${LOCALBASE}
CONFIGURE_ARGS+= --with-gmp=${LOCALBASE}
CFLAGS=		-I${WRKSRC}/../include -I${LOCALBASE}/include -Os
CPPFLAGS=	-I${WRKSRC}/../include -I${LOCALBASE}/include -Os
LDFLAGS=	-L${LOCALBASE}/lib
CXXFLAGS+=	-fbracket-depth=512 -Os

CFLAGS+=	-DCROSS_DIRECTORY_STRUCTURE

CONFIGURE_ARGS+= --disable-bootstrap
CONFIGURE_ARGS+= --disable-libssp
CONFIGURE_ARGS+= --without-nls
CONFIGURE_ARGS+= --disable-nls
CONFIGURE_ARGS+= --enable-multilib
CONFIGURE_ARGS+= --disable-shared
CONFIGURE_ARGS+= --infodir=${LOCALBASE}/info/${TARGET}
CONFIGURE_ARGS+= --with-as=${LOCALBASE}/bin/${TARGET}-as
CONFIGURE_ARGS+= --with-ld=${LOCALBASE}/bin/${TARGET}-ld
MAKE_ARGS+=	AWK=${LOCALBASE}/bin/gawk

CONFIGURE_ENV+= ac_cv_path_SED=${LOCALBASE}/bin/gsed
CONFIGURE_ARGS+= --disable-libstdcxx

BUILD_DEPENS+=	gawk:text/gawk
BUILD_DEPENS+=	gawk:text/gsed

post-extract:
	${MKDIR} ${WRKSRC}

post-patch:
	${REINPLACE_CMD} -e 's,-g -O2,-g -O,' ${WRKSRC}/configure
	${REINPLACE_CMD} -e '/LOCAL_INCLUDE_DIR/ d ' ${WRKSRC}/gcc/Makefile.in

PLIST_SUB+= SUFFIX=${GCC_SUFFIX}
PLIST_SUB+= TARGET=${TARGET}
PLIST_SUB+= VERSION=${PORTVERSION}

post-configure:
	${MKDIR} ${WRKSRC}/gcc/include

pre-configure:
	${MKDIR} ${WRKSRC}
	${FIND} ${WRKSRC} -name 'config.cache' | ${XARGS} ${RM} -v


.include <bsd.port.pre.mk>

.if (${OSVERSION} > 1100000)
BUILD_DEPENDS+= makeinfo:system/texinfo
.endif

.include <bsd.port.post.mk>
#EOF
