#
# $Id$
#
PORTNAME=	openjdk
PORTVERSION=	${JDK_MAJOR_VERSION}.${PORT_MINOR_VERSION}.${PORT_BUILD_NUMBER}
CATEGORIES=	java devel
MASTER_SITES+=	http://download.java.net/openjdk/jdk${JDK_MAJOR_VERSION}u${JDK_MINOR_VERSION}/promoted/b${JDK_BUILD_NUMBER}/ 
MASTER_SITES+=	http://download.java.net/jaxp/1.4.5/:jaxp 
MASTER_SITES+=	http://icedtea.classpath.org/download/drops/:jaxp 
MASTER_SITES+=	http://download.java.net/glassfish/components/jax-ws/openjdk/jdk7/:jaxws 
MASTER_SITES+=	http://icedtea.classpath.org/download/drops/:jaxws 
MASTER_SITES+=	https://java.net/downloads/jax-ws/JDK7/:jaf 
MASTER_SITES+=	http://icedtea.classpath.org/download/drops/:jaf 
MASTER_SITES+=	APACHE/ant/binaries/:ant
PATCH_SITES=	LOCAL/glewis/openjdk7
DISTFILES+=	${JDK_SRC_DISTFILE}${EXTRACT_SUFX} 
DISTFILES+=	${ANT_DISTFILE}${EXTRACT_SUFX}:ant
PKGNAMESUFFIX=	${JDK_MAJOR_VERSION}

EXTRACT_ONLY=	${JDK_SRC_DISTFILE}${EXTRACT_SUFX} ${ANT_DISTFILE}${EXTRACT_SUFX}

BUILD_DEPENDS+=	unzip:arch/unzip
BUILD_DEPENDS+=	zip:arch/zip
BUILD_DEPENDS+=	${LOCALBASE}/include/cups/cups.h:print/cups-base
BUILD_DEPENDS+=	bash:lang/bash

LIB_DEPENDS+=	libasound.so:media/libalsa
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libgif.so:graph/libgif

LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXt.so:x11/libXt
LIB_DEPENDS+=	libXi.so:x11/libXi
LIB_DEPENDS+=	libXtst.so:x11/libXtst
LIB_DEPENDS+=	libXrender.so:x11/libXrender


RUN_DEPENDS+=	javavm:java/javavmwrapper
RUN_DEPENDS+=	xf-dejavu>0:xfont/xf-dejavu

_PATCHFILES=	patch-7u45-b30.xz \
		patch-7u51-b30.xz \
		patch-7u55-b31.xz \
		patch-7u60-b30.xz \
		patch-7u65-b31.xz \
		patch-7u71-b14.xz \
		patch-7u76-b31.xz \
		patch-7u80-b32.xz \
		patch-7u85-b02.xz \
		patch-7u91-b02.xz \
		patch-7u95-b00.xz \
		patch-7u101-b00.xz \
		patch-7u111-b01.xz

PATCHFILES=	patch-7u45-b30.xz \
		patch-7u51-b30.xz \
		patch-7u55-b31.xz \
		patch-7u60-b30.xz \
		patch-7u65-b31.xz \
		patch-7u71-b14.xz \
		patch-7u76-b31.xz \
		patch-7u80-b32.xz \
		patch-7u85-b02.xz \
		patch-7u91-b02.xz \
		patch-7u95-b00.xz \
		patch-7u101-b00.xz \
		patch-7u111-b01.xz \
		patch-7u121-b00.xz \
		patch-7u131-b00.xz \
		patch-7u141-b02.xz \
		patch-7u151-b01.xz \
		patch-7u161-b01.xz


MAINTAINER?=	glewis@FreeBSD.org
COMMENT?=	Java Development Kit 7

WRKSRC=		${WRKDIR}/${PORTNAME}

USES=		compiler dos2unix gmake zip

JAVAVMS_COMMENT=	OpenJDK${JDK_MAJOR_VERSION}

#PORT_MINOR_VERSION=	111
#PORT_BUILD_NUMBER=	01
#JDK_MAJOR_VERSION=	7
#JDK_MINOR_VERSION=	40
#JDK_BUILD_NUMBER=	43
#JDK_BUILD_DATE=		26_aug_2013
#JDK_SRC_DISTFILE=	${PORTNAME}-${JDK_MAJOR_VERSION}u${JDK_MINOR_VERSION}-fcs-src-b${JDK_BUILD_NUMBER}-${JDK_BUILD_DATE}

PORT_MINOR_VERSION=	161
PORT_BUILD_NUMBER=	01
JDK_MAJOR_VERSION=	7
JDK_MINOR_VERSION=	40
JDK_BUILD_NUMBER=	43
JDK_BUILD_DATE=		26_aug_2013
JDK_SRC_DISTFILE=	${PORTNAME}-${JDK_MAJOR_VERSION}u${JDK_MINOR_VERSION}-fcs-src-b${JDK_BUILD_NUMBER}-${JDK_BUILD_DATE}



# Use our own version of ant to avoid circular dependencies
ANT_VERSION=		1.9.7
ANT_DISTFILE=		apache-ant-${ANT_VERSION}-bin

DOS2UNIX_FILES=	jdk/src/share/classes/com/sun/org/apache/xml/internal/security/resource/xmlsecurity_en.properties

OPENJDK_OSARCH=	bsd-${ARCH:S/i386/i586/}
ONLY_FOR_ARCHS=	i386 amd64

NOPRECIOUSMAKEVARS=	yes

#BOOTSTRAPJDKDIR= ${LOCALBASE}/bootstrap-openjdk6

_MAKE_JOBS=	#
MAKE_ENV+=	LANG="C"
MAKE_ENV+=	LC_ALL="C"
MAKE_ENV+=	JAVA_HOME=""
MAKE_ENV+=	CLASSPATH=""
MAKE_ENV+=	LD_LIBRARY_PATH=""
MAKE_ENV+=	MAKEFLAGS=""

MAKE_ENV+=	ALT_BOOTDIR="${BOOTSTRAPJDKDIR}"
MAKE_ENV+=	ALT_FREETYPE_HEADERS_PATH="${LOCALBASE}/include"
MAKE_ENV+=	ALT_FREETYPE_LIB_PATH="${LOCALBASE}/lib"
MAKE_ENV+=	ALT_CUPS_HEADERS_PATH="${LOCALBASE}/include"
MAKE_ENV+=	ALT_X11_PATH="${LOCALBASE}"
MAKE_ENV+=	ALT_PKG_PATH="${LOCALBASE}"
MAKE_ENV+=	ALT_PACKAGE_PATH="${LOCALBASE}"
MAKE_ENV+=	ANT_HOME="${WRKDIR}/apache-ant-${ANT_VERSION}"
MAKE_ENV+=	JAVACMD=${BOOTSTRAPJDKDIR}/bin/java
MAKE_ENV+=	X11DIR="${LOCALBASE}"
MAKE_ENV+=	LOCALDIR="${LOCALBASE}"
MAKE_ENV+=	COMPILER_WARNINGS_FATAL="false"
MAKE_ENV+=	NO_DOCS="true"
MAKE_ENV+=	SKIP_COMPARE_IMAGES="true"
MAKE_ENV+=	SKIP_FASTDEBUG_BUILD="true"
MAKE_ENV+=	SKIP_DEBUG_BUILD="true"
MAKE_ENV+=	ZIP_DEBUGINFO_FILES=0
MAKE_ENV+=	ENABLE_FULL_DEBUG_SYMBOLS=0
MAKE_ENV+=	PTHREAD_LIBS="-lpthread"
MAKE_ENV+=	MILESTONE="fcs"
MAKE_ENV+=	JDK_MICRO_VERSION="0_${PORT_MINOR_VERSION}"
MAKE_ENV+=	BUILD_NUMBER="b${PORT_BUILD_NUMBER}"

MAKE_ENV+=	HOTSPOT_BUILD_JOBS=${MAKE_JOBS_NUMBER}

#MAKE_ENV+=	ALT_PARALLEL_COMPILE_JOBS=1

MAKE_ARGS=	CC=${CC:Q} CXX=${CXX:Q} HOST_CC=${CC:Q}
MAKE_ENV+=	UNLIMITED_CRYPTO=1


BOOTSTRAP_JDKS=	${LOCALBASE}/openjdk7 \
		${LOCALBASE}/bootstrap-openjdk6

# do we have valid native jdk installed?
.for BJDK in ${BOOTSTRAP_JDKS}
.  if !defined(BOOTSTRAPJDKDIR) && exists(${BJDK}/bin/javac)
BOOTSTRAPJDKDIR=	${BJDK}
.  endif
.endfor

# if no valid jdk found, set dependency
.if !defined(BOOTSTRAPJDKDIR)
BOOTSTRAPJDKDIR?=	${LOCALBASE}/bootstrap-openjdk6
BUILD_DEPENDS+=		${BOOTSTRAPJDKDIR}/bin/javac:java/bootstrap-openjdk6
.endif


.include <bsd.port.pre.mk>

# GCC is broken with PCH: https://lists.freebsd.org/pipermail/svn-src-all/2015-March/101722.html
#MAKE_ENV+=	USE_PRECOMPILED_HEADER=0
MAKE_ENV+=	EXTRA_CFLAGS=-DLIBICONV_PLUG

.if ${ARCH} == i386
# Fix the build for i386 when WITH_LLD_IS_LD is set
# https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=225741
MAKE_ENV+=	LFLAGS="-Wl,-z,notext"
.endif

# GCC is broken with PCH: https://lists.freebsd.org/pipermail/svn-src-all/2015-March/101722.html
.if ${COMPILER_TYPE} == gcc
MAKE_ENV+=	USE_PRECOMPILED_HEADER=0
.endif


post-patch:
	${REINPLACE_CMD} "s|%%LOCALBASE%%|${LOCALBASE}|" \
		${WRKSRC}/hotspot/src/os/bsd/vm/os_bsd.cpp \
		${WRKSRC}/jdk/src/share/classes/sun/print/PSPrinterJob.java

JDK_IMAGEDIR=	${WRKSRC}/build/${OPENJDK_OSARCH}/j2sdk-image
INSTALLDIR=	${PREFIX}/${PKGBASE}

PLIST=	${PKGDIR}/plist.${ARCH}

SUB_LIST+= PREFIX=${PREFIX}
SUB_LIST+= PORTNAME=${PORTNAME}${PKGNAMESUFFIX}
SUB_FILES+= man.conf


do-install:
	${MKDIR} ${STAGEDIR}${INSTALLDIR}
	cd ${JDK_IMAGEDIR} && ${COPYTREE_SHARE} . ${STAGEDIR}${INSTALLDIR}

	${INSTALL_DATA} \
	    ${WRKSRC}/build/${OPENJDK_OSARCH}/btjars/compilefontconfig.jar \
	    ${WRKSRC}/build/${OPENJDK_OSARCH}/btjars/javazic.jar \
	    ${STAGEDIR}${INSTALLDIR}/jre/lib/
	${INSTALL_DATA} ${FILESDIR}/cacerts \
	    ${STAGEDIR}${INSTALLDIR}/jre/lib/security/cacerts

	cd ${STAGEDIR}${PREFIX}/openjdk7/man/man1 && ${GZIP_CMD} *.1
	${CHMOD} a+x ${STAGEDIR}${PREFIX}/openjdk7/bin/*
	${CHMOD} a+x ${STAGEDIR}${PREFIX}/openjdk7/jre/bin/*
	${CHMOD} a+x ${STAGEDIR}${PREFIX}/openjdk7/jre/lib/*/jexec
	${CHMOD} a+x ${STAGEDIR}${PREFIX}/openjdk7/jre/lib/*/jspawnhelper
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/man.d
	${INSTALL_DATA} ${WRKDIR}/man.conf ${STAGEDIR}${PREFIX}/etc/man.d/${PORTNAME}${PKGNAMESUFFIX}.conf


.include <bsd.port.post.mk>
#EOF
