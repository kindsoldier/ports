# $FreeBSD: head/lang/kotlin/Makefile 520204 2019-12-15 23:33:02Z lwhsu $

PORTNAME=	kotlin
PORTVERSION=	1.3.61
CATEGORIES=	lang
MASTER_SITES=	https://github.com/JetBrains/kotlin/releases/download/v${PORTVERSION}/
DISTNAME=	kotlin-compiler-${PORTVERSION}

MAINTAINER=	mizhka@FreeBSD.org
COMMENT=	Kotlin Programming Language

RUN_DEPENDS=	bash:lang/bash

USES=	zip

WRKSRC=	${WRKDIR}/kotlinc

USE_JAVA=	yes
NO_BUILD=	yes

KOTLIN_BIN+=	kapt
KOTLIN_BIN+=	kotlin
KOTLIN_BIN+=	kotlin-dce-js
KOTLIN_BIN+=	kotlinc
KOTLIN_BIN+=	kotlinc-js
KOTLIN_BIN+=	kotlinc-jvm

post-extract:
	${RM} ${WRKSRC}/bin/*.bat

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/lib
	${MKDIR} ${STAGEDIR}${DATADIR}/bin
	cd ${WRKSRC}/bin && ${COPYTREE_BIN} . ${STAGEDIR}${DATADIR}/bin
	cd ${WRKSRC}/lib && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}/lib
.for f in ${KOTLIN_BIN}
	${LN} -sf ${DATADIR}/bin/${f} ${STAGEDIR}${PREFIX}/bin/${f}
.endfor
	${INSTALL_DATA} ${WRKSRC}/build.txt ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
