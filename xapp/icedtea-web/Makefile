#
# $Id$
#
PORTNAME=	icedtea-web
PORTVERSION=	1.6.2
CATEGORIES=	java www
MASTER_SITES=	http://icedtea.wildebeest.org/download/source/ \
		http://icedtea.classpath.org/download/source/

MAINTAINER=	java@FreeBSD.org
COMMENT=	Free Java plug-in and Java Web Start for OpenJDK


LIB_DEPENDS+=	libglib.so:devel/libglib
BUILD_DEPENDS+=	${LOCALBASE}/bin/zip:arch/zip 
BUILD_DEPENDS+=	${LOCALBASE}/bin/bash:lang/bash
RUN_DEPENDS+=	${LOCALBASE}/bin/bash:lang/bash
RUN_DEPENDS+	${LOCALBASE}/openjdk8/bin/java:lang/openjpk8


GNU_CONFIGURE=	yes
USES+=		gmake
USE_PERL5=	build

EXTRACT_CMD=	${GZIP_CMD}
EXTRACT_BEFORE_ARGS=	-dc
EXTRACT_AFTER_ARGS=	| ${SETENV} LC_ALL=en_US.UTF-8 ${TAR} -xf -

JAVA_HOME=	${LOCALBASE}/openjdk8
bash_CMD=	${LOCALBASE}/bin/bash


CONFIGURE_ARGS+= --disable-docs 
CONFIGURE_ARGS+= --enable-docs=no

CONFIGURE_ARGS+= --with-asm=no
CONFIGURE_ARGS+= --with-ecj=no
CONFIGURE_ARGS+= --with-emma=no
CONFIGURE_ARGS+= --with-jacoco=no
CONFIGURE_ARGS+= --with-jdk-home="${JAVA_HOME}"
CONFIGURE_ARGS+= --with-jre-home="${JAVA_HOME}/jre"
CONFIGURE_ARGS+= --with-tagsoup=no

CONFIGURE_ENV=	BIN_BASH=${bash_CMD}
SH=		${bash_CMD}

#CONFIGURE_ARGS+= --disable-plugin
CONFIGURE_ARGS+= --without-chrome
CONFIGURE_ARGS+= --without-chromium
CONFIGURE_ARGS+= --with-epiphany
CONFIGURE_ARGS+= --with-firefox
CONFIGURE_ARGS+= --without-midori
CONFIGURE_ARGS+= --without-opera

.include <bsd.port.options.mk>
.include <bsd.port.pre.mk>

post-patch:
	${REINPLACE_CMD} -e 's|^sed\([[:space:]]\)|gsed\1|' \
	    -e 's|\([[:space:]]\)sed\([[:space:]]\)|\1gsed\2|g' \
	    ${WRKSRC}/Makefile.in ${WRKSRC}/html-gen.sh
	${REINPLACE_CMD} -e 's|^Icon=javaws|Icon=itweb-javaws|' \
	    ${WRKSRC}/*.desktop.in
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' ${WRKSRC}/configure

post-install:
	${MKDIR} ${STAGEDIR}${DESKTOPDIR}
	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${WRKSRC}/*.desktop ${STAGEDIR}${DESKTOPDIR}
	${INSTALL_DATA} ${WRKSRC}/javaws.png \
	    ${STAGEDIR}${PREFIX}/share/pixmaps/itweb-javaws.png

.include <bsd.port.post.mk>
#EOF
