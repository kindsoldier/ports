#
# $Id$
#
PORTNAME=	libspf2
PORTVERSION=	1.2.10
CATEGORIES=	mail
MASTER_SITES=	http://www.libspf2.org/spf/ LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Sender Rewriting Scheme 2 C Implementation


GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		gmake
USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e '/__VA_ARGS__/ s|format, ||g' ${WRKSRC}/src/include/spf_log.h

.include <bsd.port.mk>
#EOF

