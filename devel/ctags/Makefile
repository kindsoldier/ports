# Created by: jkoshy

PORTNAME=	ctags
PORTVERSION=	5.8
CATEGORIES=	devel
MASTER_SITES=	SF
PKGNAMEPREFIX=  ex

MAINTAINER=	zeising@FreeBSD.org
COMMENT=	Feature-filled tagfile generator for vi and emacs clones

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--enable-macro-patterns --with-readlib
USES=	gmake

SUB_FILES+=	pkg-message

do-install:
	${MKDIR} ${STAGEDIR}${LOCALBASE}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/exctags ${STAGEDIR}${LOCALBASE}/bin/exctags
	${MKDIR} ${STAGEDIR}${LOCALBASE}/man/man1
	${INSTALL_DATA} ${WRKSRC}/ctags.1 ${STAGEDIR}${LOCALBASE}/man/man1/exctags.1

.include <bsd.port.mk>
