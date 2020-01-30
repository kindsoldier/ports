# Created by: Denise H. G. <darcsis@gmail.com>
# $FreeBSD: head/devel/tig/Makefile 517987 2019-11-19 21:45:56Z tobik $

PORTNAME=	tig
PORTVERSION=	2.5.0
CATEGORIES=	devel
MASTER_SITES=	https://github.com/jonas/tig/releases/download/${DISTNAME}/

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Text-mode interface for git

USES=		iconv gmake ncurses readline:port
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	${ICONV_CONFIGURE_BASE}
MAKE_ARGS=	V=1

INSTALL_TARGET=	install install-doc-man

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/tig

.include <bsd.port.mk>
