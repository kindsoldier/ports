# $FreeBSD: head/java/openjdk8/Makefile 514690 2019-10-17 22:39:05Z glewis $

PORTNAME=	openjdk
PORTVERSION=	${JDK_MAJOR_VERSION}.${JDK_UPDATE_VERSION}.${JDK_BUILD_NUMBER}.${BSD_JDK_VERSION}
CATEGORIES=	java devel
MASTER_SITES=	LOCAL/jkim:jtreg
PKGNAMESUFFIX?=	${JDK_MAJOR_VERSION}

MAINTAINER=	java@FreeBSD.org
COMMENT=	Java Development Kit ${JDK_MAJOR_VERSION}

BUILD_DEPENDS+=	unzip:arch/unzip
BUILD_DEPENDS+=	zip:arch/zip
BUILD_DEPENDS+=	${LOCALBASE}/include/cups/cups.h:print/cups-base
BUILD_DEPENDS+=	bash:lang/bash

#LIB_DEPENDS+=	libasound.so:media/libalsa
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
RUN_DEPENDS=	java-zoneinfo>0:java/java-zoneinfo


ONLY_FOR_ARCHS=	aarch64 amd64 armv6 armv7 i386 powerpc powerpc64

USES=		compiler:features gmake shebangfix pkgconfig iconv

USE_GITHUB=	yes
GH_ACCOUNT=	battleblow
GH_PROJECT=	openjdk-jdk8u
GH_TAGNAME=	jdk${JDK_MAJOR_VERSION}u${JDK_UPDATE_VERSION}-b${JDK_BUILD_NUMBER}.${BSD_JDK_VERSION}

SHEBANG_FILES=	configure

_MAKE_JOBS=	#
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAKE_ENV+=	CLASSPATH=""
MAKE_ENV+=	JAVA_HOME=""
MAKE_ENV+=	LD_LIBRARY_PATH=""
MAKE_ENV+=	IGNORE_OLD_CONFIG=true
MAKE_ENV+=	COMPILER_WARNINGS_FATAL="false"

JDK_BUILDDIR=	${WRKSRC}/build/${JDK_OSARCH}-normal-${JDK_BUILD_JVM}-${JDK_BUILD_TYPE}

JDK_IMAGEDIR=	${JDK_BUILDDIR}/images/j2sdk-image
JRE_IMAGEDIR=	${JDK_BUILDDIR}/images/j2sdk-image/jre

JDK_JVMDIR=	lib/${ARCH:C/armv.*/arm/:S/powerpc64/ppc64/}
JDK_OSARCH=	bsd-${ARCH:S/amd64/x86_64/:C/armv.*/arm/:S/i386/x86/:S/powerpc64/ppc64/}
INSTALLDIR=	${PREFIX}/${PKGBASE}

NOPRECIOUSMAKEVARS=	yes

JDK_MAJOR_VERSION=	8
JDK_UPDATE_VERSION=	232
JDK_BUILD_NUMBER=	09
BSD_JDK_VERSION=	1
JTREG_VERSION=		4.1
JTREG_BUILD_NUMBER=	b08

GNU_CONFIGURE=		yes
CONFIGURE_ARGS=		--with-boot-jdk=${BOOTSTRAPJDKDIR}
CONFIGURE_ARGS+=	--with-build-number="b${JDK_BUILD_NUMBER}"
.if ${JDK_UPDATE_VERSION} > 0
CONFIGURE_ARGS+=	--with-update-version=${JDK_UPDATE_VERSION}
.endif
CONFIGURE_ARGS+=	--disable-ccache
CONFIGURE_ARGS+=	--disable-freetype-bundling \
			--disable-zip-debug-info \
			--with-cacerts-file=${FILESDIR}/cacerts \
			--with-cups=${LOCALBASE} \
			--with-debug-level=${JDK_BUILD_TYPE} \
			--with-freetype=${LOCALBASE} \
			--with-freetype-include=${LOCALBASE}/include/freetype2 \
			--with-jobs=${MAKE_JOBS_NUMBER} \
			--with-jvm-variants=${JDK_BUILD_JVM} \
			--with-milestone=fcs \
			--with-package-path=${LOCALBASE} \
			--with-zlib=system
CONFIGURE_SCRIPT=	../../configure
CONFIGURE_WRKSRC=	${WRKSRC}/common/autoconf

CONFIGURE_ENV+=	ALSA_NOT_NEEDED=yes

CONFIGURE+==	--enable-unlimited-crypto


#CONFIGURE_ARGS+=	--disable-headful
#MAKE_ENV+=	BUILD_HEADLESS_ONLY=1 MAKEFLAGS=X_CFLAGS="-I${LOCALBASE}/include"

CONFIGURE_ARGS+= --with-giflib=system
CONFIGURE_ARGS+= --x-includes=${LOCALBASE}/include
CONFIGURE_ARGS+= --x-libraries=${LOCALBASE}/lib

EXTRA_PATCHES=	${PATCHDIR}/fontconfig.patch

JAVAVMS_COMMENT=	OpenJDK${JDK_MAJOR_VERSION}

ALL_TARGET=		images
CONFIGURE_ARGS+=	--disable-debug-symbols
JDK_BUILD_TYPE=		release


.include <bsd.port.pre.mk>

BOOTSTRAP_JDKS=	${LOCALBASE}/openjdk8 \
		${LOCALBASE}/openjdk7 \
		${LOCALBASE}/bootstrap-openjdk8

# do we have valid native jdk installed?
.for BJDK in ${BOOTSTRAP_JDKS}
.  if !defined(BOOTSTRAPJDKDIR) && exists(${BJDK}/bin/javac)
BOOTSTRAPJDKDIR=	${BJDK}
.  endif
.endfor

# if no valid jdk found, set dependency
.if !defined(BOOTSTRAPJDKDIR)
BOOTSTRAPJDKDIR?=	${LOCALBASE}/bootstrap-openjdk8
BUILD_DEPENDS+=		${BOOTSTRAPJDKDIR}/bin/javac:java/bootstrap-openjdk8
.endif

.if ${ARCH} == armv6 || ${ARCH} == armv7 || ${ARCH} == i386
# XXX We must limit max heap size for 32-bit targets.
CONFIGURE_ARGS+=	--with-boot-jdk-jvmargs="-Xmx768m"
MAKE_ENV+=	JAVADOC_CMD_MEM="-Xmx768m"
.endif

.if ${ARCH} == i386
# Fix the build for i386 when WITH_LLD_IS_LD is set
# https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=225741
MAKE_ENV+=	LFLAGS="-Wl,-z,notext"
.endif

.if ${ARCH} == amd64 || ${ARCH} == i386 || ${ARCH} == powerpc64
JDK_BUILD_JVM=	server
.else
JDK_BUILD_JVM=	zero
LIB_DEPENDS+=	libffi.so:devel/libffi
.endif

.if ${COMPILER_TYPE} == clang
.if ${COMPILER_VERSION} >= 35
MAKE_ENV+=	COMPILER_WARNINGS_FATAL=false
.endif
MAKE_ENV+=	USE_CLANG=true
.if ${COMPILER_FEATURES:Mlibc++}
CONFIGURE_ENV+=	LIBCXX="-lc++"
.endif
.endif

# GCC is broken with PCH: https://lists.freebsd.org/pipermail/svn-src-all/2015-March/101722.html
.if ${COMPILER_TYPE} == gcc
CONFIGURE_ARGS+=	--with-toolchain-type=gcc
MAKE_ARGS+=	USE_PRECOMPILED_HEADER=0
.endif

ICONV_CPPFLAGS=	-I${LOCALBASE}/include
ICONV_LDFLAGS=	-L${LOCALBASE}/lib -liconv

post-patch:
	${FIND} ${WRKSRC} -name '*.orig' -delete
	${SED} -e 's|%%LOCALBASE%%|${LOCALBASE}|' \
	    ${FILESDIR}/bsd.fontconfig.properties.in > \
	    ${WRKSRC}/jdk/src/solaris/classes/sun/awt/fontconfigs/bsd.fontconfig.properties
	${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|' \
	    -e 's|%%OBJCOPY%%|${OBJCOPY}|' \
	    ${WRKSRC}/configure \
	    ${WRKSRC}/common/autoconf/toolchain.m4 \
	    ${WRKSRC}/jdk/make/lib/Awt2dLibraries.gmk \
	    ${WRKSRC}/jdk/make/lib/NioLibraries.gmk \
	    ${WRKSRC}/jdk/src/share/classes/com/sun/java/swing/plaf/gtk/Metacity.java \
	    ${WRKSRC}/jdk/src/share/classes/sun/print/PSPrinterJob.java \
	    ${WRKSRC}/jdk/src/solaris/classes/sun/nio/fs/BsdFileSystemProvider.java
	${REINPLACE_CMD} -e 's|/usr/local/share/java/classes|${LOCALBASE}/share/java/classes|' \
	    ${WRKSRC}/jdk/src/bsd/doc/man/*.1
	${REINPLACE_CMD} -e 's|%%ICONV_CPPFLAGS%%|${ICONV_CPPFLAGS}|' \
	    -e 's|%%ICONV_LDFLAGS%%|${ICONV_LDFLAGS}|' \
	    ${WRKSRC}/jdk/make/lib/Awt2dLibraries.gmk \
	    ${WRKSRC}/jdk/make/lib/CoreLibraries.gmk \
	    ${WRKSRC}/jdk/make/lib/ServiceabilityLibraries.gmk
	${CHMOD} 755 ${WRKSRC}/configure

	${REINPLACE_CMD} '/EXTRA_SOUND_JNI_LIBS += jsoundalsa/d' \
	    ${WRKSRC}/jdk/make/lib/SoundLibraries.gmk

post-build:
	${BOOTSTRAPJDKDIR}/bin/jar cfe \
	    ${JRE_IMAGEDIR}/lib/compilefontconfig.jar \
	    build.tools.compilefontconfig.CompileFontConfig \
	    -C ${JDK_BUILDDIR}/jdk/btclasses build/tools/compilefontconfig
	${BOOTSTRAPJDKDIR}/bin/jar cfe \
	    ${JRE_IMAGEDIR}/lib/javazic.jar \
	    build.tools.tzdb.TzdbZoneRulesCompiler \
	    -C ${JDK_BUILDDIR}/jdk/btclasses build/tools/tzdb

	${RM} -r ${JRE_IMAGEDIR}/lib/zi
	${LN} -sf ${LOCALBASE}/share/java/zi ${JRE_IMAGEDIR}/lib

SUB_LIST+= PREFIX=${PREFIX}
SUB_LIST+= PORTNAME=${PORTNAME}${PKGNAMESUFFIX}
SUB_FILES+= man.conf

PLIST=	${PKGDIR}/plist.${ARCH}


do-install:
	${MKDIR} ${STAGEDIR}${INSTALLDIR}
	cd ${JDK_IMAGEDIR} && ${COPYTREE_SHARE} . ${STAGEDIR}${INSTALLDIR}

	cd ${STAGEDIR}${INSTALLDIR} && \
	    ${FIND} bin jre/bin -type f | ${XARGS} ${CHMOD} ${BINMODE}

	cd ${STAGEDIR}${INSTALLDIR} && \
	    ${CHMOD} ${BINMODE} jre/${JDK_JVMDIR}/jexec \
		jre/${JDK_JVMDIR}/jspawnhelper ${JDK_JVMDIR}/jexec

	${INSTALL_DATA} ${WRKDIR}/man.conf \
	    ${STAGEDIR}${PREFIX}/etc/man.d/${PORTNAME}${PKGNAMESUFFIX}.conf
	cd ${STAGEDIR}${INSTALLDIR}/man/man1 && ${GZIP_CMD} *.1

.include <bsd.port.post.mk>
