#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
#
PORTNAME=	gcc
DIST_SUBDIR=	arm
PORTVERSION=	8.2.1
CATEGORIES=	devel
MASTER_SITES=	https://developer.arm.com/-/media/Files/downloads/gnu-rm/8-2018q4/
DISTNAME=	${ORIGINAL_PACKAGE_NAME}-src

CATEGORIES=	devel
PKGNAMEPREFIX=	${TARGET}-

GCC_VERSION=		8.2.1
FULL_VERSION=		8-2018-q4-major
ORIGINAL_TARGET=			arm-none-eabi
ORIGINAL_PACKAGE_NAME=	gcc-${ORIGINAL_TARGET}-${FULL_VERSION}

MAINTAINER= homeunix7@gmail.com
COMMENT=	GNU Compiler Collection for bare metal arm cross-development


LIB_DEPENDS+=	libgmp.so:math/libgmp
LIB_DEPENDS+=	libmpc.so:math/libmpc
LIB_DEPENDS+=	libmpfr.so:math/libmpfr
BUILD_DEPENS+=	gawk:text/gawk
BUILD_DEPENS+=	gawk:text/gsed

RUN_DEPENDS+=	${TARGET}-as:devel/${TARGET}-binutils
BUILD_DEPENDS+=	${TARGET}-as:devel/${TARGET}-binutils


GNU_CONFIGURE=	yes
USES+=		gmake tar:bz2

TARGET=		arm-eabi

LANGUAGES=	c

CONFIGURE_TARGET= #
CONFIGURE_ARGS+= --target=${TARGET}
CONFIGURE_ARGS+= --enable-languages='${LANGUAGES}'
CONFIGURE_ARGS+= --with-system-zlib
CONFIGURE_ARGS+= --with-mpfr=${LOCALBASE}
CONFIGURE_ARGS+= --with-gmp=${LOCALBASE}
LDFLAGS=	-L${LOCALBASE}/lib

CFLAGS=		-I${WRKSRC}/../include -I${LOCALBASE}/include -Os
CPPFLAGS=	-I${WRKSRC}/../include -I${LOCALBASE}/include -Os


CXXFLAGS+=	-fbracket-depth=512 -Os
CXXFLAGS+=	-Wno-error -fbracket-depth=512 -Wno-deprecated-register
CFLAGS+=	-Wno-error -fbracket-depth=512 -Wno-deprecated-register

CONFIGURE_ARGS+= --without-headers

CONFIGURE_ARGS+= --disable-bootstrap
CONFIGURE_ARGS+= --without-nls
CONFIGURE_ARGS+= --disable-nls
CONFIGURE_ARGS+= --disable-shared
CONFIGURE_ARGS+= --infodir=${LOCALBASE}/info/${TARGET}
CONFIGURE_ARGS+= --with-as=${LOCALBASE}/bin/${TARGET}-as
CONFIGURE_ARGS+= --with-ld=${LOCALBASE}/bin/${TARGET}-ld
MAKE_ARGS+=	AWK=${LOCALBASE}/bin/gawk
MAKE_ARGS+=	INHIBIT_LIBC_CFLAGS="-DUSE_TM_CLONE_REGISTRY=0"

CONFIGURE_ARGS+= --disable-decimal-float
CONFIGURE_ARGS+= --disable-libffi
CONFIGURE_ARGS+= --disable-libgomp
CONFIGURE_ARGS+= --disable-libmudflap
CONFIGURE_ARGS+= --disable-libquadmath
CONFIGURE_ARGS+= --disable-libssp
CONFIGURE_ARGS+= --disable-libstdcxx-pch
CONFIGURE_ARGS+= --disable-threads
CONFIGURE_ARGS+=  --disable-tls

CONFIGURE_ARGS+= --enable-multilib
CONFIGURE_ARGS+=  --with-multilib-list=rmprofile


CONFIGURE_ENV+= ac_cv_path_SED=${LOCALBASE}/bin/gsed
CONFIGURE_ARGS+= --disable-libstdcxx


PATCH_WRKSRC= ${WRKDIR}/${ORIGINAL_PACKAGE_NAME}/src
PATCH_STRIP= -p1

SRCDIR=	${WRKDIR}/${ORIGINAL_PACKAGE_NAME}/src
WRKSRC= ${WRKDIR}/${ORIGINAL_PACKAGE_NAME}/src/gcc

CONFIGURE_WRKSRC=  ${WRKSRC}/build
BUILD_WRKSRC=	   ${WRKSRC}/build
INSTALL_WRKSRC=	   ${WRKSRC}/build

CONFIGURE_SCRIPT= ../configure

post-extract:
	${TAR} -xf ${SRCDIR}/gcc.tar.bz2 -C ${SRCDIR}
	${MKDIR} ${WRKSRC}/build

post-patch:
	${REINPLACE_CMD} -e 's,-g -O2,-O,' ${WRKSRC}/configure ${WRKSRC}/*/configure

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
