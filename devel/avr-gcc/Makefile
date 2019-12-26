#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
#
PORTNAME=	gcc
PORTVERSION=	5.4.0
DIST_SUBDIR=	gnu
MASTER_SITES+=	 http://ftp.gnu.org/gnu/gcc/gcc-${PORTVERSION}/
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
USES+=		gmake tar:bz2

TARGET=		avr

LANGUAGES=	c# c++

CONFIGURE_TARGET= #
CONFIGURE_ARGS+= --target=${TARGET}
CONFIGURE_ARGS+= --enable-languages='${LANGUAGES}'
CONFIGURE_ARGS+= --with-system-zlib
CONFIGURE_ARGS+= --with-mpfr=${LOCALBASE}
CONFIGURE_ARGS+= --with-gmp=${LOCALBASE}
CFLAGS=		-I${WRKSRC}/../include -I${LOCALBASE}/include
CPPFLAGS=	-I${WRKSRC}/../include -I${LOCALBASE}/include
LDFLAGS=	-L${LOCALBASE}/lib
CXXFLAGS+=	-fbracket-depth=512

CONFIGURE_ARGS+= --disable-libssp
CONFIGURE_ARGS+= --without-nls
CONFIGURE_ARGS+= --disable-nls
CONFIGURE_ARGS+= --enable-multilib
CONFIGURE_ARGS+= --disable-shared
CONFIGURE_ARGS+= --infodir=${LOCALBASE}/info/${TARGET}
CONFIGURE_ARGS+= --with-as=${LOCALBASE}/bin/${TARGET}-as
CONFIGURE_ARGS+= --with-ld=${LOCALBASE}/bin/${TARGET}-ld
MAKE_ARGS+=	AWK=${LOCALBASE}/bin/gawk

BUILD_DEPENS+=	gawk:text/gawk

post-extract:
	${MKDIR} ${WRKSRC}

PLIST_SUB+= SUFFIX=${GCC_SUFFIX}
PLIST_SUB+= TARGET=${TARGET}
PLIST_SUB+= VERSION=${PORTVERSION}

INFO+= ${TARGET}/cpp
INFO+= ${TARGET}/cppinternals
INFO+= ${TARGET}/gcc
INFO+= ${TARGET}/gccinstall
INFO+= ${TARGET}/gccint

post-patch:
	${FIND} ${WRKSRC} -type f \( -name '*.[ch]' -o -name '*.cc' \) | \
		${XARGS} ${EGREP} -l '"(HOST_WIDE|PLUGIN_COND|PRId64)' | \
		${XARGS} ${REINPLACE_CMD} -E -e 's/"(HOST_WIDE|PLUGIN_COND|PRId64)/" \1/g'


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
