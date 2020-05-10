# Created by: Tobias Kortkamp <t@tobik.me>
# $FreeBSD: head/java/intellij-fsnotifier/Makefile 519064 2019-12-05 06:53:08Z tobik $

PORTNAME=	intellij-fsnotifier
PORTVERSION=	20160221
CATEGORIES=	java devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Replacement for IntelliJ's fsnotifier

LIB_DEPENDS=	libinotify.so:devel/libinotify

USE_GITHUB=	yes
GH_ACCOUNT=	t6
GH_PROJECT=	fsnotifier
GH_TAGNAME=	a04fbff6e21d58fea7a3ed2a6a21e53cbef4b7af

USES=	compiler:c11

IDEA_HOME=${PREFIX}
PLIST_FILES=	${IDEA_HOME}/bin/fsnotifier

do-install:
	${MKDIR} ${STAGEDIR}${IDEA_HOME}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/fsnotifier ${STAGEDIR}${IDEA_HOME}/bin

.include <bsd.port.mk>
