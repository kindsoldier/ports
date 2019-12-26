#
# $Id$
#
PORTNAME=	yasm
PORTVERSION=	1.3.0
CATEGORIES=	devel lang
MASTER_SITES=	http://www.tortall.net/projects/yasm/releases/

MAINTAINER=	onborodin@gmail.com
COMMENT=	A complete rewrite of the NASM assembler

LIB_DEPENDS+=	libintl.so:devel/gettext

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ENV+=	CPPFLAGS="${CXXFLAGS} -I${LOCALBASE}/include"
CONFIGURE_ENV+=	LDFLAGS="-L${LOCALBASE}/lib"
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

INSTALL_TARGET=	install install-man

.include <bsd.port.mk>
#EOF

