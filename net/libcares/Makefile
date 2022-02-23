#
# $Id$
#
PORTNAME=	libcares
PORTVERSION=	1.17.1
CATEGORIES=	dns
DISTNAME=	c-ares-${PORTVERSION}

MASTER_SITES+=	http://c-ares.haxx.se/download/ 
MASTER_SITES+=	http://obsd.isc.org/pub/OpenBSD/distfiles/ 
MASTER_SITES+=	http://mirrors.rit.edu/zi/

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Asynchronous DNS resolver library

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-werror
INSTALL_TARGET=	install-strip
SSP_UNSAFE=	Refuses -l in LDFLAGS
USES=		pathfix compiler:c++11-lang
USE_LDCONFIG=	yes

#CONFIGURE_ARGS+= --enable-symbol-hiding

PROGRAMS=	acountry adig ahost

MAKE_JOBS_UNSAFE=	yes

post-patch:
	${REINPLACE_CMD} -e 's,6:2:4,4:2:4,g' ${WRKSRC}/configure

#post-install:
#	${INSTALL_PROGRAM} ${PROGRAMS:S@^@${WRKSRC}/.libs/@} ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
#EOF
