# $FreeBSD: head/java/openjdk14/Makefile 528626 2020-03-18 03:33:51Z glewis $

PORTNAME=	openjdk
DISTVERSIONPREFIX=	jdk-
#DISTVERSION=	${JDK_MAJOR_VERSION}+${JDK_BUILD_NUMBER}-${BSD_JDK_VERSION}
DISTVERSION=	${JDK_MAJOR_VERSION}.${JDK_MINOR_VERSION}.${JDK_PATCH_VERSION}+${JDK_BUILD_NUMBER}-${BSD_JDK_VERSION}

CATEGORIES=	java devel
PKGNAMESUFFIX?=	${JDK_MAJOR_VERSION}

MAINTAINER=	java@FreeBSD.org
COMMENT=	Java Development Kit ${JDK_MAJOR_VERSION}

ONLY_FOR_ARCHS=	amd64 i386 powerpc64

BUILD_DEPENDS+=	unzip:arch/unzip
BUILD_DEPENDS+=	zip:arch/zip
BUILD_DEPENDS+=	${LOCALBASE}/include/cups/cups.h:print/cups-base
BUILD_DEPENDS+=	bash:lang/bash

LIB_DEPENDS+=	libasound.so:media/libalsa
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libgif.so:graph/libgif
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libpng.so:graph/libpng

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXt.so:x11/libXt
LIB_DEPENDS+=	libXi.so:x11/libXi
LIB_DEPENDS+=	libXtst.so:x11/libXtst
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libXrandr.so:x11/libXrandr

RUN_DEPENDS+=	javavm:java/javavmwrapper
RUN_DEPENDS+=	xf-dejavu>0:xfont/xf-dejavu

USE_GITHUB=	yes
GH_ACCOUNT=	battleblow
GH_PROJECT=	jdk17u


NO_CCACHE=	yes

USES+=	gmake compiler:features pkgconfig

_MAKE_JOBS=	#
MAKE_ENV=	LANG="C" \
		LC_ALL="C" \
		CLASSPATH="" \
		JAVA_HOME="" \
		LD_LIBRARY_PATH="" \
		CC=${CC} \
		CXX=${CXX} \
		CPP=${CPP} \
		MAKEFLAGS=""

JDK_OSARCH=	bsd-${ARCH:S/amd64/x86_64/:S/i386/x86/:S/powerpc64/ppc64/}
JDK_BUILDDIR=	${WRKSRC}/build/${JDK_OSARCH}-${JDK_BUILD_JVM}-${JDK_BUILD_TYPE}

JDK_IMAGEDIR=	${JDK_BUILDDIR}/images/jdk
INSTALLDIR=	${PREFIX}/${PKGBASE}

NOPRECIOUSMAKEVARS=	yes

JDK_MAJOR_VERSION=	17
JDK_MINOR_VERSION=	0
JDK_PATCH_VERSION=	3
JDK_BUILD_NUMBER=	7
BSD_JDK_VERSION=	1


GNU_CONFIGURE=	yes
CONFIGURE_ENV=	CC=${CC} \
		CXX=${CXX} \
		CPP=${CPP}
CONFIGURE_ARGS=	--with-boot-jdk=${BOOTSTRAPJDKDIR} \
		--disable-ccache \
		--disable-javac-server \
		--disable-hotspot-gtest \
		--with-alsa=${LOCALBASE} \
		--with-cups=${LOCALBASE} \
		--with-fontconfig=${LOCALBASE} \
		--with-freetype=system \
		--with-freetype-include=${LOCALBASE}/include/freetype2 \
		--with-freetype-lib=${LOCALBASE}/lib \
		--with-libjpeg=system \
		--with-giflib=system \
		--with-giflib-include=${LOCALBASE}/include \
		--with-giflib-lib=${LOCALBASE}/lib \
		--with-libpng=system \
		--with-zlib=system \
		--x-includes=${LOCALBASE}/include \
		--x-libraries=${LOCALBASE}/lib \
		--with-cacerts-file=${FILESDIR}/cacerts \
		--with-version-string=${JDK_MAJOR_VERSION}.${JDK_MINOR_VERSION}.${JDK_PATCH_VERSION}+${JDK_BUILD_NUMBER}-${BSD_JDK_VERSION} \
		--with-native-debug-symbols=none \
		--with-debug-level=release
CONFIGURE_ARGS+= --disable-dtrace
CONFIGURE_ARGS+= --with-lcms=bundled

JAVAVMS_COMMENT=	OpenJDK${JDK_MAJOR_VERSION}

#.if defined(BUILD_JRE)
#ALL_TARGET=		legacy-images
#.else
ALL_TARGET=		images
#.endif
JDK_BUILD_TYPE=		release

.include <bsd.port.pre.mk>

BOOTSTRAP_JDKS=	${LOCALBASE}/openjdk17 ${LOCALBASE}/bootstrap-openjdk17

# do we have valid native jdk installed?
.for BJDK in ${BOOTSTRAP_JDKS}
.  if !defined(BOOTSTRAPJDKDIR) && exists(${BJDK}/bin/javac)
BOOTSTRAPJDKDIR=	${BJDK}
.  endif
.endfor

# if no valid jdk found, set dependency
.if !defined(BOOTSTRAPJDKDIR)
BOOTSTRAPJDKDIR?=	${LOCALBASE}/bootstrap-openjdk17
BUILD_DEPENDS+=		${BOOTSTRAPJDKDIR}/bin/javac:java/bootstrap-openjdk17
.endif

JDK_BUILD_JVM=	server

MAKE_ENV+=		--with-toolchain-type=${COMPILER_TYPE}
CONFIGURE_ARGS+=	--with-toolchain-type=${COMPILER_TYPE}

#.if ${COMPILER_TYPE} == gcc
#USE_GCC=	yes
#CONFIGURE_ARGS+=	--with-extra-ldflags="-Wl,-rpath=${LOCALBASE}/lib/gcc${GCC_DEFAULT} -L${LOCALBASE}/lib/gcc${GCC_DEFAULT}" \
#			--with-extra-cflags="-Wl,-rpath=${LOCALBASE}/lib/gcc${GCC_DEFAULT}" \
#			--with-extra-cxxflags="-Wl,-rpath=${LOCALBASE}/lib/gcc${GCC_DEFAULT}"
#.else
MAKE_ENV+=	USE_CLANG=true
#.if ${COMPILER_VERSION} >= 130
EXTRA_CFLAGS+=		-Wno-unused-but-set-parameter
#.if ${COMPILER_VERSION} >= 140
#EXTRA_CFLAGS+=		-Wno-bitwise-instead-of-logical
#.endif
CONFIGURE_ARGS+=	--with-extra-cflags="${EXTRA_CFLAGS}"
CONFIGURE_ARGS+=	--with-extra-cxxflags="${EXTRA_CFLAGS}"
#.endif
#.endif

.if ${ARCH} == aarch64 || ${ARCH:Mpowerpc64*}
CONFIGURE_ARGS+=	--disable-warnings-as-errors
.endif
.if ${ARCH} == aarch64 || (defined(PPC_ABI) && ${PPC_ABI} == ELFv1)
CONFIGURE_ARGS+=	--disable-dtrace
.endif
.if ${ARCH} == powerpc64 && ${OSREL:C/\.[0-9]//} == 12
EXTRA_PATCHES=		${PATCHDIR}/extra-patch-src_hotspot_cpu_ppc_vm__version__ppc.hpp
.endif

#.if empty(ICONV_LIB)
#ICONV_CFLAGS=	-DLIBICONV_PLUG
#.else
ICONV_CFLAGS=	-I${LOCALBASE}/include
ICONV_LDFLAGS=	-L${LOCALBASE}/lib
ICONV_LIBS=	${ICONV_LIB}
#.endif

post-patch:
	@${FIND} ${WRKSRC} -name '*.orig' -delete
	@${CHMOD} 755 ${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|' \
		${WRKSRC}/configure \
		${WRKSRC}/src/hotspot/os/bsd/os_bsd.cpp
	@${REINPLACE_CMD} -e 's|%%ICONV_CFLAGS%%|${ICONV_CFLAGS}|' \
		-e 's|%%ICONV_LDFLAGS%%|${ICONV_LDFLAGS}|' \
		-e 's|%%ICONV_LIBS%%|${ICONV_LIBS}|' \
		${WRKSRC}/make/autoconf/libraries.m4


SUB_LIST+= PREFIX=${PREFIX}
SUB_LIST+= PORTNAME=${PORTNAME}${PKGNAMESUFFIX}
SUB_FILES+= man.conf

PLIST=	${PKGDIR}/pkg-plist.${ARCH}

do-install:
	${MKDIR} ${STAGEDIR}${INSTALLDIR}
	cd ${JDK_IMAGEDIR} && ${COPYTREE_SHARE} . ${STAGEDIR}${INSTALLDIR}
	cd ${STAGEDIR}${INSTALLDIR} && \
		${FIND} bin -type f | ${XARGS} ${CHMOD} ${BINMODE}
	${CHMOD} ${BINMODE} ${STAGEDIR}${INSTALLDIR}/lib/jspawnhelper
	${INSTALL_DATA} ${WRKDIR}/man.conf \
	    ${STAGEDIR}${PREFIX}/etc/man.d/${PORTNAME}${PKGNAMESUFFIX}.conf
	cd ${STAGEDIR}${INSTALLDIR}/man/man1 && ${GZIP_CMD} *.1

.include <bsd.port.post.mk>
