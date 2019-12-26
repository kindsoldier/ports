#
# $Id$
#
PORTNAME=	libSDL_net
PORTVERSION=	1.2.8
CATEGORIES=	net
MASTER_SITES=	http://www.libsdl.org/projects/SDL_net/release/
DISTNAME=	SDL_net-${PORTVERSION}

MAINTAINER=	mva@FreeBSD.org
COMMENT=	Small sample cross-platform networking library

LIB_DEPENDS+=	libSDL.so:devel/libSDL


GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		gmake
USE_LDCONFIG=	yes

CONFIGURE_ARGS=	--disable-gui

.include <bsd.port.mk>
#EOF
