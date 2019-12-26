# Created by: Gabor Pali <pgj@FreeBSD.org>
# $FreeBSD: head/devel/cppcheck/Makefile 492703 2019-02-11 17:37:53Z amdmi3 $

PORTNAME=	cppcheck
PORTVERSION=	1.87
CATEGORIES=	devel

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Static analysis of C/C++ code

USES=		compiler:c++11-lib cmake tar:bzip2
USE_GITHUB=	yes
GH_ACCOUNT=	danmar

USES+=			shebangfix
SHEBANG_FILES=		htmlreport/cppcheck-htmlreport

LIB_DEPENDS=	libpcre.so:text/libpcre

MANPAGES_BUILD_DEPENDS=	xsltproc:textproc/libxslt \
			${LOCALBASE}/share/xsl/docbook/manpages/docbook.xsl:textproc/docbook-xsl

CMAKE_ARGS+= -DUSE_CLANG=ON
CMAKE_ARGS+= -DUSE_ANALYZE= ON
CMAKE_ARGS+= -DANALYZE_MEMORY=ON
CMAKE_ARGS+= -DANALYZE_ADDRESS=ON
CMAKE_ARGS+= -DANALYZE_THREAD=ON
CMAKE_ARGS+= -DANALYZE_UNDEFINED=ON
CMAKE_ARGS+= -DANALYZE_DATAFLOW= ON
CMAKE_ARGS+= -DWARNINGS_ANSI_ISO=ON
CMAKE_ARGS+= -DWARNINGS_ARE_ERRORS=OFF
CMAKE_ARGS+= -DHAVE_RULES=OFF
CMAKE_ARGS+= -DBUILD_GUI=FALSE

post-patch:
	${REINPLACE_CMD} -e '/find_package(Qt5/ d' ${WRKSRC}/cmake/findDependencies.cmake


post-build:
	cd ${WRKSRC}/man && ${LOCALBASE}/bin/xsltproc --nonet --param man.charmap.use.subset "0" \
		${LOCALBASE}/share/xsl/docbook/manpages/docbook.xsl cppcheck.1.xml

post-install:
	${INSTALL_SCRIPT} ${WRKSRC}/htmlreport/cppcheck-htmlreport ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/man/cppcheck.1 ${STAGEDIR}${PREFIX}/man/man1


.include <bsd.port.mk>
