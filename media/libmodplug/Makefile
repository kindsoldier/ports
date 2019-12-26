#
# $Id$
#
PORTNAME=	libmodplug
PORTVERSION=	0.8.9.0 #0.8.8.5
CATEGORIES=	audio
#MASTER_SITES=	SF/modplug-xmms/${PORTNAME}/${PORTVERSION}
MASTER_SITES=	SF/modplug-xmms/${PORTNAME}/${PORTVERSION} LOCAL/ehaupt


MAINTAINER=	onborodin@gmail.com
COMMENT=	ModPlug mod-like music shared libraries

USE_LDCONFIG=	yes
USES+=		gmake
GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes
INSTALL_TARGET=	install-strip


post-patch:
	${REINPLACE_CMD} -e '/^CXXFLAGS=/d' \
		${WRKSRC}/configure

.include <bsd.port.mk>
#EOF

