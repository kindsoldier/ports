#
# $Id$
#
PORTNAME=	newlib
PORTVERSION=	3.1
CATEGORIES=	devel
DIST_SUBDIR=	arm
PKGNAMEPREFIX=	${TARGET}-
#PKGNAMESUFFIX=	-nano

MASTER_SITES=	https://developer.arm.com/-/media/Files/downloads/gnu-rm/9-2019q4/
#https://armkeil.blob.core.windows.net/developer/Files/downloads/gnu-rm/9-2019q4/

DISTNAME=	${ORIGINAL_PACKAGE_NAME}-src

MAINTAINER=	homeunix7@gmail.com
COMMENT=	GNU binary tools for ${TARGET:U}

FULL_VERSION=		9-2019-q4-major
ORIGINAL_TARGET=	arm-none-eabi
ORIGINAL_PACKAGE_NAME=	gcc-${ORIGINAL_TARGET}-${FULL_VERSION}

BUILD_DEPENDS+= 	${TARGET}-gcc:devel/${TARGET}-gcc

USES+= gmake
SSP_UNSAFE=	yes
GNU_CONFIGURE=	yes
LDFLAGS=	#
CFLAGS=         -Os -ffunction-sections -fdata-sections
TARGET=		arm-eabi

CONFIGURE_TARGET= #
CONFIGURE_ARGS+= --target=${TARGET}
CONFIGURE_ENV+= CFLAGS_FOR_TARGET="${CFLAGS}"
CONFIGURE_ENV+= ac_cv_prog_SED=${LOCALBASE}/bin/gsed

CONFIGURE_ARGS+= --enable-multilib
##CONFIGURE_ARGS+= --enable-newlib-nano-malloc
##CONFIGURE_ARGS+= --disable-newlib-supplied-syscalls

#CONFIGURE_ARGS+= --enable-newlib-io-long-long
#CONFIGURE_ARGS+= --enable-newlib-io-c99-formats
#CONFIGURE_ARGS+= --enable-newlib-register-fini
#CONFIGURE_ARGS+= --enable-newlib-retargetable-locking
#CONFIGURE_ARGS+= --disable-newlib-supplied-syscalls
#CONFIGURE_ARGS+= --disable-nls

CONFIGURE_ARGS+= --disable-newlib-supplied-syscalls
CONFIGURE_ARGS+= --enable-newlib-reent-small
CONFIGURE_ARGS+= --enable-newlib-retargetable-locking
CONFIGURE_ARGS+= --disable-newlib-fvwrite-in-streamio
CONFIGURE_ARGS+= --disable-newlib-fseek-optimization
CONFIGURE_ARGS+= --disable-newlib-wide-orient
CONFIGURE_ARGS+= --enable-newlib-nano-malloc
CONFIGURE_ARGS+= --disable-newlib-unbuf-stream-opt
CONFIGURE_ARGS+= --enable-lite-exit
CONFIGURE_ARGS+= --enable-newlib-global-atexit
CONFIGURE_ARGS+= --enable-newlib-nano-formatted-io
CONFIGURE_ARGS+= --disable-nls

SRCDIR=	${WRKDIR}/${ORIGINAL_PACKAGE_NAME}/src
WRKSRC= ${WRKDIR}/${ORIGINAL_PACKAGE_NAME}/src/newlib

post-extract:
	${TAR} -xf ${SRCDIR}/newlib.tar.bz2 -C ${SRCDIR}

post-patch:
	${REINPLACE_CMD} -e 's,-g -O2,-g -Os,' ${WRKSRC}/configure

post-install:
	for file in $$(${FIND} . -name libc.a);do (cd $$(dirname $$file) && ${LN} -s libc.a libc_nano.a);done


.include <bsd.port.mk>
#EOF
