# Created by: Mitsuru YOSHIDA <mitsuru@riken.jp>
# $FreeBSD: head/lang/scala/Makefile 514445 2019-10-14 09:39:05Z amdmi3 $

PORTNAME=	scala
PORTVERSION=	2.13.1
CATEGORIES=	lang java
MASTER_SITES=	http://www.scala-lang.org/files/archive/

MAINTAINER=	freebsd-ports@jan0sch.de
COMMENT=	Scala Programming Language

RUN_DEPENDS=	bash:lang/bash

USES=		tar:tgz

NO_ARCH=	yes
NO_BUILD=	yes
USE_JAVA=	yes
JAVA_VERSION=	11+

SCALA_HOME=	${DATADIR}
SCALA_SHRDIRS=	lib
SCALA_DOCDIRS=	tools

SCALA_BINS+=	fsc
SCALA_BINS+=	scala
SCALA_BINS+=	scalac
SCALA_BINS+=	scaladoc
SCALA_BINS+=	scalap

SCALA_MANS+=	fsc.1
SCALA_MANS+=	scala.1
SCALA_MANS+=	scalac.1
SCALA_MANS+=	scaladoc.1
SCALA_NMAS+=	scalap.1


do-install:
	@${MKDIR} ${STAGEDIR}${SCALA_HOME}/bin
.for f in ${SCALA_BINS}
	${INSTALL_SCRIPT} ${WRKSRC}/bin/${f} ${STAGEDIR}${SCALA_HOME}/bin/${f}
	${LN} -s ${SCALA_HOME}/bin/${f} ${STAGEDIR}${PREFIX}/bin/${f}
.endfor
.for d in ${SCALA_SHRDIRS}
	(cd ${WRKSRC}/${d} && ${COPYTREE_SHARE} . ${STAGEDIR}${SCALA_HOME}/${d})
.endfor
.for m in ${SCALA_MANS}
	${INSTALL_MAN} ${WRKSRC}/man/man1/${m} ${STAGEDIR}${MANPREFIX}/man/man1/${m}
.endfor

.include <bsd.port.mk>
