# Created by: Boris Samorodov <bsam@FreeBSD.org>
# $FreeBSD: head/devel/libastylej/Makefile 447516 2017-08-07 19:57:28Z bsam $

PORTNAME=	libastylej
PORTVERSION=	3.0.1
CATEGORIES=	devel java textproc
MASTER_SITES=	SF/astyle/astyle/astyle%20${PORTVERSION}
PKGNAMESUFFIX=	-arduino
DISTNAME=	astyle_${PORTVERSION}_linux

PATCHDIR=	${.CURDIR}/files
PATCH_WRKSRC=	${WRKSRC}/../..

MAINTAINER=	bsam@FreeBSD.org
COMMENT=	Source code indenter, formatter, and beautifier (JNI library)

ALL_TARGET=	java
LDFLAGS+=	-s
USES=		compiler gmake
USE_JAVA=	yes
USE_LDCONFIG=	yes
MAKE_ARGS+=	JAVA_HOME=${JAVA_HOME}

WRKSRC=		${WRKDIR}/astyle/build/${COMPILER_TYPE}

post-patch:
	${REINPLACE_CMD} -e 's,\(JAVAINCS.*=.*\),\1 -I$(JAVA_HOME)/include/freebsd,' \
		-e '176 s,libastylej\.so,libastylej${PKGNAMESUFFIX}\.so,2' \
		${WRKSRC}/Makefile

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/jni
	${INSTALL_DATA} ${WRKSRC}/bin/*.so.${PORTVERSION} \
	   ${STAGEDIR}${PREFIX}/lib/jni/libastylej${PKGNAMESUFFIX}.so

.include <bsd.port.mk>
#EOF
