# $FreeBSD: head/devel/jetbrains-goland/Makefile 531401 2020-04-11 06:10:11Z tcberner $

PORTNAME=	goland
PORTVERSION=	2022.3.2
CATEGORIES=	devel java
MASTER_SITES=	https://download-cf.jetbrains.com/go/
PKGNAMEPREFIX=	jetbrains-
DIST_SUBDIR=	jetbrains

MAINTAINER=	dmitry.wagin@ya.ru
COMMENT=	JetBrains GoLand IDE

BUILD_DEPENDS=	jna>0:java/jna
RUN_DEPENDS=	intellij-fsnotifier>0:java/intellij-fsnotifier \
		jetbrains-pty4j>=0.12.10:java/jetbrains-pty4j

USES=		python:run shebangfix

USE_JAVA=	yes
JAVA_VERSION=	11+

SHEBANG_FILES=	bin/restart.py

NO_ARCH=	yes
NO_BUILD=	yes

WRKSRC=		${WRKDIR}/GoLand-${PORTVERSION}

SUB_FILES=	goland goland.desktop pkg-message

do-install:
# Linux/Windows/OS X only so remove them
	@${RM} -r \
		${WRKSRC}/bin/fsnotifier \
		${WRKSRC}/bin/fsnotifier-arm \
		${WRKSRC}/bin/fsnotifier64 \
		${WRKSRC}/bin/remote-dev-server.sh \
		${WRKSRC}/bin/repair \
		${WRKSRC}/jbr \
		${WRKSRC}/jre64 \
		${WRKSRC}/lib/pty4j \
		${WRKSRC}/plugins/cwm-plugin \
		${WRKSRC}/plugins/gateway-plugin/lib/remote-dev-workers \
		${WRKSRC}/plugins/go-plugin/lib/dlv \
		${WRKSRC}/plugins/go/lib/dlv \
		${WRKSRC}/plugins/performanceTesting \
		${WRKSRC}/plugins/remote-dev-server
	${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR} \
		"! -name *\.bak ! -name *\.so ! -name *\.dll ! -name *\.dylib ! -name *\.pdb ! -name *\.sh ! -name *\.exe")
	@(cd ${WRKSRC} && ${COPYTREE_BIN} . ${STAGEDIR}${DATADIR} "-name *\.sh")
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	${INSTALL_MAN} ${FILESDIR}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/man/man1
	${INSTALL_DATA} ${WRKDIR}/${PORTNAME}.desktop ${STAGEDIR}${PREFIX}/share/applications/
# Use fsnotifier replacement provided by java/intellij-fsnotifier
	${ECHO} "idea.filewatcher.executable.path=${PREFIX}/intellij/bin/fsnotifier" >> ${STAGEDIR}${DATADIR}/bin/idea.properties
# Install FreeBSD native lib provided by devel/jna
	${MKDIR} ${WRKDIR}/jna
	cd ${WRKDIR}/jna && ${JAR} xf ${JAVAJARDIR}/jna.jar com/sun/jna/freebsd-x86-64/libjnidispatch.so
	${MKDIR} ${STAGEDIR}${DATADIR}/lib/jna/amd64
	${INSTALL_LIB} ${WRKDIR}/jna/com/sun/jna/freebsd-x86-64/libjnidispatch.so ${STAGEDIR}${DATADIR}/lib/jna/amd64/
# Use pty4j replacement provided by devel/jetbrains-pty4j
	${LN} -sf ../../../lib/pty4j ${STAGEDIR}${DATADIR}/lib/pty4j

do-install-DELVE-on:
	${ECHO} "dlv.path=${PREFIX}/bin/dlv" >> ${STAGEDIR}${DATADIR}/bin/idea.properties


.include <bsd.port.mk>
