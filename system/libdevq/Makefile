#
# $Id$
#
PORTNAME=	libdevq
PORTVERSION=	0.0.2
CATEGORIES=	devel
MASTER_SITES=	http://rainbow-runner.nl/freebsd/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Generic Device Query and Monitor interface

GNU_CONFIGURE=	yes
USES+=		gmake
USES+=		tar:xz

USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

post-install:
	cd ${STAGEDIR}${PREFIX}/lib/pkgconfig && ${MV} libdevq-1.0.pc  libdevq.pc

.include <bsd.port.mk>
#EOF

