PORTNAME=	jna
PORTVERSION=	5.13.0
CATEGORIES=	devel java

MAINTAINER=	ports@markdixon.name
COMMENT=	Java access to native shared libraries
WWW=		https://github.com/twall/jna

BROKEN_armv6=		fails to compile: build.xml: compilation failed
BROKEN_armv7=		fails to compile: build.xml: compilation failed

BUILD_DEPENDS=	makeinfo:system/texinfo

USES=		autoreconf:build gmake libtool
USE_ANT=	yes
USE_JAVA=	yes
JAVA_VERSION=	11+
MAKE_ARGS=	-DCC="${CC}" -DLD="${LD}"
MAKE_ENV=	ANT_OPTS=-Drelease -DARCH=${ANT_ARCH}

USE_GITHUB=	yes
GH_ACCOUNT=	java-native-access

PORTDOCS=	javadoc platform-${PORTVERSION}-javadoc.jar
PLIST_FILES=	%%JAVAJARDIR%%/jna-platform.jar %%JAVAJARDIR%%/jna.jar

ALL_TARGET=	native jar

ANT_ARCH=	${ARCH:S/amd64/x86-64/:S/i386/x86/:S/powerpc64/ppc64/}

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|' \
		${WRKSRC}/native/Makefile

do-install:
	${INSTALL_DATA} ${WRKSRC}/build/freebsd-${ANT_ARCH}.jar \
		${STAGEDIR}${JAVAJARDIR}/jna-platform.jar
	${INSTALL_DATA} ${WRKSRC}/build/jna.jar \
		${STAGEDIR}${JAVAJARDIR}/jna.jar

.include <bsd.port.mk>
