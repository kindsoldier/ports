# Created by: Warren Block <wblock@wonkity.com>
# $FreeBSD: head/devel/arduino/Makefile 452566 2017-10-21 00:45:50Z leres $

PORTNAME=	arduino
PORTVERSION=	1.0.6
CATEGORIES=	devel java lang
MASTER_SITES=	https://arduino.cc/download.php?f=/
DISTNAME=	${PORTNAME}-${PORTVERSION}-linux32

MAINTAINER=	leres@FreeBSD.org
COMMENT=	Open-source electronics prototyping platform

#RUN_DEPENDS+=	rxtx>=0:java/rxtx
RUN_DEPENDS+=	avrdude>=0:devel/avrdude
RUN_DEPENDS+=	avr-libc>=:devel/avr-libc

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
USES=		dos2unix tar:tgz kmod
DOS2UNIX_REGEX=	.*(\.(c|cpp|h|hex|txt)|Makefile|makefile)

USE_JAVA=	yes
JAVA_OS=	native
JAVA_VENDOR=	openjdk
JAVA_RUN=	yes

NO_BUILD=	yes
USE_LDCONFIG=	${PREFIX}/arduino/lib

SUB_FILES=	arduino pkg-message
SUB_LIST=	PORTNAME=${PORTNAME} LINUXBASE=${PREFIX}

ONLY_FOR_ARCHS=	i386 amd64

REINPLACE_ARGS=	-i ""
INSLIST=	examples arduino hardware lib libraries logo.png revisions.txt tools

# Add serial drivers for those who are new to this.
#UARDUNO_RUN_DEPENDS+=	${KMODDIR}/uarduno.ko:comms/uarduno

.include <bsd.port.options.mk>

post-patch:
	${RM} -r ${WRKSRC}/hardware/tools/
	${MKDIR} ${WRKSRC}/hardware/tools/avr/
	${LN} -s ${PREFIX}/bin ${WRKSRC}/hardware/tools/avr/bin
	${LN} -s ${PREFIX}/etc ${WRKSRC}/hardware/tools/avr/etc
	${RM} ${WRKSRC}/lib/RXTXcomm.jar
	${RM} ${WRKSRC}/lib/librxtxSerial.so
	${RM} ${WRKSRC}/lib/librxtxSerial64.so

	${LN} -s ${JAVA_HOME}/jre/lib/ext/RXTXcomm.jar ${WRKSRC}/lib/RXTXcomm.jar

.if ${ARCH} == i386
	${LN} -s ${JAVA_HOME}/jre/lib/i386/librxtxSerial.so ${WRKSRC}/lib/librxtxSerial.so
.endif
.if ${ARCH} == amd64
	${LN} -s ${JAVA_HOME}/jre/lib/amd64/librxtxSerial.so ${WRKSRC}/lib/librxtxSerial64.so
.endif
	${CP} ${WRKSRC}/reference/img/logo.png ${WRKSRC}/
	${RM} -r ${WRKSRC}/reference/img/

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/${PORTNAME}
	cd ${WRKSRC}/ && ${COPYTREE_SHARE} "${INSLIST}" ${STAGEDIR}${PREFIX}/${PORTNAME}
	${INSTALL_SCRIPT} ${WRKDIR}/arduino ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
#EOF
