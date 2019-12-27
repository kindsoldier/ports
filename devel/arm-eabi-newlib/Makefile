#
# $Id$
#
PORTNAME=	newlib
PORTVERSION=	2.5.0
CATEGORIES=	devel
MASTER_SITES+=	http://mirrors.kernel.org/sources.redhat.com/newlib/
MASTER_SITES+=	ftp://sourceware.org/pub/newlib/
MASTER_SITES+=  https://distfiles.macports.org/gcc/
PKGNAMEPREFIX=	${TARGET}-


MAINTAINER=	homeunix7@gmail.com
COMMENT=	GNU binary tools for ${TARGET:U}

USES+= gmake
#MAKE_JOBS_UNSAFE=yes

SSP_UNSAFE=yes
GNU_CONFIGURE=	yes
LDFLAGS=	#
CFLAGS=         -Os -g
TARGET=		arm-eabi

CONFIGURE_TARGET= #
CONFIGURE_ARGS+= --target=${TARGET}
CONFIGURE_ENV+= CFLAGS_FOR_TARGET="${CFLAGS}"

#CONFIGURE_ARGS+= --enable-lite-exit
#CONFIGURE_ARGS+= --enable-malloc-debugging
#CONFIGURE_ARGS+= --enable-newlib_wide_orient
#CONFIGURE_ARGS+= --enable-newlib-atexit-dynamic-alloc
#CONFIGURE_ARGS+= --enable-newlib-elix-level
#CONFIGURE_ARGS+= --enable-newlib-fseek-optimization
#CONFIGURE_ARGS+= --enable-newlib-fvwrite-in-streamio
#CONFIGURE_ARGS+= --enable-newlib-global-atexit
#CONFIGURE_ARGS+= --enable-newlib-iconv
#CONFIGURE_ARGS+= --enable-newlib-iconv-encodings
#CONFIGURE_ARGS+= --enable-newlib-iconv-external-ccs
#CONFIGURE_ARGS+= --enable-newlib-iconv-from-encodings
#CONFIGURE_ARGS+= --enable-newlib-iconv-to-encodings
#CONFIGURE_ARGS+= --enable-newlib-io-c99-formats
#CONFIGURE_ARGS+= --enable-newlib-io-long-double
#CONFIGURE_ARGS+= --enable-newlib-io-long-long
#CONFIGURE_ARGS+= --enable-newlib-io-pos-args
#CONFIGURE_ARGS+= --enable-newlib-mb
#CONFIGURE_ARGS+= --enable-newlib-multithread
#CONFIGURE_ARGS+= --enable-newlib-register-fini
#CONFIGURE_ARGS+= --enable-newlib-supplied-syscalls
#CONFIGURE_ARGS+= --enable-newlib-unbuf-stream-opt
#CONFIGURE_ARGS+= --enable-target-optspace
CONFIGURE_ARGS+= --enable-multilib

#CONFIGURE_ARGS+= --enable-newlib_nano_formatted_io
#CONFIGURE_ARGS+= --enable-newlib-io-float
CONFIGURE_ARGS+= --enable-newlib-nano-malloc
#CONFIGURE_ARGS+= --enable-newlib-reent-small

#PKGNAMESUFFIX= -nano
#PKGNAMESUFFIX= -big

#CONFIGURE_ARGS+= --disable-newlib-atexit-dynamic-alloc
#CONFIGURE_ARGS+= --disable-newlib-fvwrite-in-streamio
#CONFIGURE_ARGS+= --disable-newlib-fseek-optimization
#CONFIGURE_ARGS+= --disable-newlib-wide-orient
#CONFIGURE_ARGS+= --disable-newlib-unbuf-stream-opt
#CONFIGURE_ARGS+= --disable-newlib-io-float
CONFIGURE_ARGS+= --disable-newlib-supplied-syscalls
CONFIGURE_ENV+= ac_cv_prog_SED=${LOCALBASE}/bin/gsed



PLIST_SUB+= TARGET=${TARGET}
PLIST_SUB+= VERSION=${PORTVERSION}

post-patch:
	${REINPLACE_CMD} -e 's,-g -O2,-g -Os,' ${WRKSRC}/configure

.include <bsd.port.mk>
#EOF
