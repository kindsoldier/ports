#
# $Id$
#
PORTNAME=	libevent
PORTVERSION=	2.1.12
CATEGORIES=	devel
MASTER_SITES+=	https://github.com/downloads/libevent/libevent/
MASTER_SITES+=	http://cloud.github.com/downloads/libevent/libevent/
DISTNAME=	${PORTNAME}-${DISTVERSION}-stable

MAINTAINER=	onborodin@gmail.com
COMMENT=	Provides an API to execute callback functions on certain events

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES+=		gmake
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --enable-openssl

post-patch:
	${REINPLACE_CMD} -e 's,CFLAGS =,CFLAGS +=,' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's|<stdint.h>|<inttypes.h>|' \
		${WRKSRC}/epoll.c ${WRKSRC}/epoll_sub.c ${WRKSRC}/evdns.c

regression-test: build
	(${SH} ${WRKSRC}/test/regress)

.include <bsd.port.mk>
#EOF

