#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
#
PORTNAME=	gcc
PORTVERSION=	4.8.5
DIST_SUBDIR=	gnu
MASTER_SITES+=	 ftp://ftp.gnu.org/gnu/${PORTNAME}/${PORTNAME}-${PORTVERSION}/
CATEGORIES=	devel
PKGNAMESUFFIX=	${GCC_SUFFIX}

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU C Compiler v${PORTVERSION} with Fortran95/Fortran2003 Compiler

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libgmp.so:math/libgmp
LIB_DEPENDS+=	libmpc.so:math/libmpc
LIB_DEPENDS+=	libmpfr.so:math/libmpfr

RUN_DEPENDS+= gas:devel/binutils
RUN_DEPENDS+= gld:devel/binutils
BUILD_DEPENDS+= ${RUN_DEPENDS}


CONFIGURE_TARGET= ${TARGET}
USES+=		tar:bzip2
GNU_CONFIGURE=	yes
USES+=		gmake


.include <bsd.port.pre.mk>

.if ${ARCH} == "amd64"
TARGET=		x86_64-freebsd
.elif ${ARCH} == "i386"
TARGET=		i386-freebsd
#.elif (${ARCH} == "armv6" || ${ARCH} == "armv6hf")
.elif 
TARGET=		arm-freebsd
IGNORE=		${ARCH} not support
.endif

PLIST=	${PKGDIR}/pkg-plist.${ARCH}

CFLAGS+= 	-I${LOCALBASE}/include -DFBSD_MAJOR=10  -fPIC -DPIC
LDFLAGS+=	-L${LOCALBASE}/lib

GCC_SUFFIX=	${PORTVERSION:R:S/.//}

LANGUAGES=	"c,fortran,c++" # ada,c++,fortran,objc,java

TARGLIB=	${PREFIX}/lib/gcc/${PORTVERSION}

WRKSRC=	${WRKDIR}/${PORTNAME}-${PORTVERSION}/build
PATCH_WRKSRC= ${WRKDIR}/${PORTNAME}-${PORTVERSION}
CONFIGURE_SCRIPT= ../configure

CFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ARGS+= --disable-nls
CONFIGURE_ARGS+= --libdir=${TARGLIB}
CONFIGURE_ARGS+= --program-suffix=${SUFFIX}
CONFIGURE_ARGS+= --with-gmp=${LOCALBASE}
CONFIGURE_ARGS+= --with-gxx-include-dir=${TARGLIB}/include/c++
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-system-zlib

CONFIGURE_ARGS+= --infodir=${PREFIX}/info/${PORTNAME}${PKGNAMESUFFIX}

CONFIGURE_ARGS+= --enable-languages="${LANGUAGES}"
CONFIGURE_ARGS+= --with-system-zlib
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --program-suffix=''
CONFIGURE_ARGS+= --program-transform-name='s,$$,${GCC_SUFFIX},; s,^cpp,gcpp,'
#CONFIGURE_ARGS+= --program-transform-name='s&^cpp&gcpp&'

CONFIGURE_ARGS+= --disable-shared
CONFIGURE_ARGS+= --with-mpfr=${LOCALBASE}
CONFIGURE_ARGS+= --with-gmp=${LOCALBASE}
CONFIGURE_ARGS+= --disable-bootstrap

CONFIGURE_ARGS+= --with-as=${LOCALBASE}/bin/gas
CONFIGURE_ARGS+= --with-ld=${LOCALBASE}/bin/gld

CONFIGURE_ARGS+= --enable-obsolete

MAKE_ARGS+= infodir=${PREFIX}/info/${PORTNAME}${PKGNAMESUFFIX}
MAKE_ARGS+= BOOT_CFLAGS="${CFLAGS} -DFBSD_MAJOR=10 -fPIC -DPIC" GNATLIBCFLAGS="${CFLAGS}" CFLAGS="${CFLAGS} -DFBSD_MAJOR=10 -fPIC -DPIC"
MAKE_ARGS+= AWK=${LOCALBASE}/bin/gawk


PLIST_SUB+= TARGET=${CONFIGURE_TARGET}
PLIST_SUB+= VERSION=${PORTVERSION}
PLIST_SUB+= SUFFIX=${GCC_SUFFIX}

post-extract:
	${MKDIR} ${WRKSRC}

post-patch:
	${FIND} ${WRKDIR} -type f -name '*.[ch]' | \
	    ${XARGS} ${EGREP} -l '(HOST_WIDE|PLUGIN_COND)' | \
	    ${XARGS} ${REINPLACE_CMD} -E -e 's,"(HOST_WIDE|PLUGIN_COND)," \1,g'

pre-configure:
	${MKDIR} ${WRKSRC}
	${FIND} ${WRKSRC} -name 'config.cache' | ${XARGS} ${RM} -v

INFO+= ${PORTNAME}${PKGNAMESUFFIX}/cpp
INFO+= ${PORTNAME}${PKGNAMESUFFIX}/cppinternals
INFO+= ${PORTNAME}${PKGNAMESUFFIX}/gcc
INFO+= ${PORTNAME}${PKGNAMESUFFIX}/gccinstall
INFO+= ${PORTNAME}${PKGNAMESUFFIX}/gccint
INFO+= ${PORTNAME}${PKGNAMESUFFIX}/libgomp
INFO+= ${PORTNAME}${PKGNAMESUFFIX}/libquadmath
INFO+= ${PORTNAME}${PKGNAMESUFFIX}/gfortran

.include <bsd.port.post.mk>
#EOF
