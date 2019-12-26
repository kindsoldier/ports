# $FreeBSD: head/java/openjdk13/Makefile 514682 2019-10-17 20:20:30Z glewis $

PORTNAME=	openjdk
DISTVERSIONPREFIX=	jdk-
DISTVERSION=	${JDK_MAJOR_VERSION}.${JDK_MINOR_VERSION}.${JDK_PATCH_VERSION}+${JDK_BUILD_NUMBER}-${BSD_JDK_VERSION}
CATEGORIES=	java devel
PKGNAMESUFFIX=	${JDK_MAJOR_VERSION}

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

USES=		compiler:features gmake

USE_GITHUB=	yes
GH_ACCOUNT=	battleblow
GH_PROJECT=	openjdk-jdk13u

NO_CCACHE=	yes

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

JDK_MAJOR_VERSION=	13
JDK_MINOR_VERSION=	0
JDK_PATCH_VERSION=	1
JDK_BUILD_NUMBER=	9
BSD_JDK_VERSION=	1

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	CC=${CC} \
		CXX=${CXX} \
		CPP=${CPP}

CONFIGURE_ENV+= JPEG_CFLAGS="-I${LOCALBASE}/include"
CONFIGURE_ENV+= JPEG_LIBS="-L${LOCALBASE}/lib -ljpeg"

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

ALL_TARGET=		images
JDK_BUILD_TYPE=		release

.include <bsd.port.pre.mk>

# Support aarch64 on FreeBSD 12 and up
.if ${OSVERSION} >= 1200500
ONLY_FOR_ARCHS+=aarch64
.endif

BOOTSTRAP_JDKS=	${LOCALBASE}/openjdk12

# do we have valid native jdk installed?
.for BJDK in ${BOOTSTRAP_JDKS}
.  if !defined(BOOTSTRAPJDKDIR) && exists(${BJDK}/bin/javac)
BOOTSTRAPJDKDIR=	${BJDK}
.  endif
.endfor

# if no valid jdk found, set dependency
.if !defined(BOOTSTRAPJDKDIR)
BOOTSTRAPJDKDIR?=	${LOCALBASE}/openjdk12
BUILD_DEPENDS+=		${BOOTSTRAPJDKDIR}/bin/javac:java/openjdk12
.endif

JDK_BUILD_JVM=	server

MAKE_ENV+=		--with-toolchain-type=${COMPILER_TYPE}
CONFIGURE_ARGS+=	--with-toolchain-type=${COMPILER_TYPE}

#.if ${COMPILER_TYPE} == gcc
#USE_GCC=	yes
#CONFIGURE_ARGS+=	--with-extra-ldflags="-Wl,-rpath=${LOCALBASE}/lib/gcc${GCC_DEFAULT} -L/usr/local/lib/gcc${GCC_DEFAULT}" \
#			--with-extra-cflags="-Wl,-rpath=${LOCALBASE}/lib/gcc${GCC_DEFAULT}" \
#			--with-extra-cxxflags="-Wl,-rpath=${LOCALBASE}/lib/gcc${GCC_DEFAULT}"
#.else
MAKE_ENV+=	USE_CLANG=true
#.endif

.if ${ARCH} == aarch64
CONFIGURE_ARGS+=	--disable-warnings-as-errors \
			--disable-dtrace
.endif
.if ${ARCH} != amd64
CONFIGURE_ARGS+=	--enable-aot=no
.endif

#ICONV_CFLAGS=	-DLIBICONV_PLUG
ICONV_CFLAGS=	-I${LOCALBASE}/include
ICONV_LDFLAGS=	-L${LOCALBASE}/lib
ICONV_LIBS=	-liconv

post-patch:
	${FIND} ${WRKSRC} -name '*.orig' -delete
	${CHMOD} 755 ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|' \
		${WRKSRC}/configure \
		${WRKSRC}/src/hotspot/os/bsd/os_bsd.cpp
	${REINPLACE_CMD} -e 's|%%ICONV_CFLAGS%%|${ICONV_CFLAGS}|' \
		-e 's|%%ICONV_LDFLAGS%%|${ICONV_LDFLAGS}|' \
		-e 's|%%ICONV_LIBS%%|${ICONV_LIBS}|' \
		${WRKSRC}/make/autoconf/libraries.m4

SUB_LIST+= PREFIX=${PREFIX}
SUB_LIST+= PORTNAME=${PORTNAME}${PKGNAMESUFFIX}
SUB_FILES+= man.conf

PLIST=	${PKGDIR}/plist.${ARCH}

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
