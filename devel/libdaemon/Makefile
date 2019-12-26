#
# $Id$
#
PORTNAME=	libdaemon
PORTVERSION=	0.14
CATEGORIES=	devel
MASTER_SITES=	http://0pointer.de/lennart/projects/${PORTNAME}/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Lightweight C library that eases the writing of UNIX daemons

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-lynx
USES+=		gmake
USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e 's,^install:.*,install:,' ${WRKSRC}/doc*/Makefile.in

.include <bsd.port.mk>
#EOF
