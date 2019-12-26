# $FreeBSD: head/sysutils/uefi-edk2-bhyve/Makefile 418285 2016-07-09 16:10:08Z novel $

PORTNAME=	uefi-edk2-bhyve
PORTVERSION=	20190128 #20160704
CATEGORIES=	sysutils

MAINTAINER=	fabian.freyer@physik.tu-berlin.de
COMMENT?=	UEFI-EDK2 firmware for bhyve

BUILD_DEPENDS+=	bash:lang/bash
BUILD_DEPENDS+=	nasm:devel/nasm
BUILD_DEPENDS+=	gcc48:devel/gcc48

USES=		gmake python:2.7,build
USE_GITHUB=	yes
GH_ACCOUNT=	freebsd
GH_PROJECT=	uefi-edk2
#GH_TAGNAME=	a36132939e259df79b16699c03c6f1d63c7454b9
GH_TAGNAME=	aa8d718

ONLY_FOR_ARCHS=	amd64

MAKE_ARGS= AS=${LOCALBASE}/bin/gas
MAKE_ARGS+= AR=${LOCALBASE}/bin/gar
MAKE_ARGS+= LD=${LOCALBASE}/bin/gld
MAKE_ARGS+= OBJCOPY=${LOCALBASE}/bin/gobjcopy
MAKE_ARGS+= CC=${LOCALBASE}/bin/gcc48
MAKE_ARGS+= CXX=${LOCALBASE}/bin/g++48

BUILD_ARGS=-DDEBUG_ON_SERIAL_PORT=TRUE -D FD_SIZE_2MB

.include <bsd.port.options.mk>

UEFI_TARGET=RELEASE

.if defined(WITH_CSM)
PLIST=	${PKGDIR}/pkg-plist.csm
BUILD_ARGS+=	-DCSM_ENABLE=TRUE
PKGNAMESUFFIX= -csm
_SUFFIX=_CSM
.endif

#PLIST_FILES=	${PREFIX}/share/uefi-firmware/BHYVE_UEFI${PLIST_SUFFIX}.fd

post-extract:
	${REINPLACE_CMD} -e 's|python|${PYTHON_CMD}|' ${WRKSRC}/BaseTools/Tests/GNUmakefile
	${REINPLACE_CMD} -e 's|python|${PYTHON_CMD}|' ${WRKSRC}/BaseTools/BinWrappers/PosixLike/*

do-build:
	unset ARCH; unset MAKEFLAGS; ${MAKE_CMD} ${MAKE_ARGS} -C ${BUILD_WRKSRC}/BaseTools
	${MKDIR} ${BUILD_WRKSRC}/Build;
	${LN} -sf ${LOCALBASE}/bin/gcc48 ${BUILD_WRKSRC}/Build/gcc
	${LN} -sf ${LOCALBASE}/bin/gld ${BUILD_WRKSRC}/Build/ld
	${LN} -sf ${LOCALBASE}/bin/gmake ${BUILD_WRKSRC}/Build/make
	${LN} -sf ${LOCALBASE}/bin/gar ${BUILD_WRKSRC}/Build/ar
	${LN} -sf ${LOCALBASE}/bin/gobjcopy ${BUILD_WRKSRC}/Build/objcopy
	${LN} -sf ${LOCALBASE}/bin/nasm ${BUILD_WRKSRC}/Build/nasm
.if defined(WITH_CSM)
	bash -c "cd ${BUILD_WRKSRC}; \
		source edksetup.sh;\
		unset ARCH; unset MAKEFLAGS; \
	        ${MAKE_CMD} ${MAKE_ARGS} GCC48_BIN=${BUILD_WRKSRC}/Build/ -C ${BUILD_WRKSRC}/BhyvePkg/Csm/BhyveCsm16/ \
	"
.endif
	bash -c "cd ${BUILD_WRKSRC}; \
		source edksetup.sh;\
		unset ARCH; unset MAKEFLAGS; \
		export GCC48_BIN=${BUILD_WRKSRC}/Build/; \
		build -t GCC48 -a X64 -b ${UEFI_TARGET} -p BhyvePkg/BhyvePkgX64.dsc ${BUILD_ARGS} \
	"

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/uefi-firmware
	${INSTALL} ${BUILD_WRKSRC}/Build/BhyveX64/${UEFI_TARGET}_GCC48/FV/BHYVE.fd \
		${STAGEDIR}${PREFIX}/share/uefi-firmware/BHYVE_UEFI${_SUFFIX}.fd

.include <bsd.port.mk>
