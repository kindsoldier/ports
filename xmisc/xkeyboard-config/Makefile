#
# $Id$
#
PORTNAME=	xkeyboard-config
PORTVERSION=	2.20 #2.0
CATEGORIES=	x11
MASTER_SITES=	https://www.x.org/archive/individual/data/xkeyboard-config/
#DISTNAME=	xkeyboard-config-${PORTVERSION}

MAINTAINER=	onborodin@gmail.com
COMMENT=	X Keyboard Configuration Database

BUILD_DEPENDS=	xkbcomp:xutil/xkbcomp
RUN_DEPENDS=	xkbcomp:xutil/xkbcomp

BUILD_DEPENDS=	intltool-merge:devel/intltool


USES+=		tar:bzip2
USES+=		gmake
USE_PERL5=	build
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-xkb-base=${PREFIX}/share/X11/xkb
CONFIGURE_ARGS=	--with-xkb-rules-symlink=xorg
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


post-patch:
	${REINPLACE_CMD} -e 's|/bin/bash|/bin/sh|g' -e 's|==|=|g' \
		${WRKSRC}/rules/merge.sh

#post-install:
#	${MKDIR} /var/lib/xkb
#	${LN} -sf /var/lib/xkb ${PREFIX}/share/X11/xkb/compiled

.include <bsd.port.mk>
#EOF
