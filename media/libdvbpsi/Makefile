#
# $Id$
#
PORTNAME=	libdvbpsi
PORTVERSION=	1.2.0
CATEGORIES=	multimedia
MASTER_SITES=	http://download.videolan.org/pub/libdvbpsi/%SUBDIR%/
MASTER_SITE_SUBDIR=	${PORTVERSION}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Library for MPEG TS and DVB PSI tables decoding and generation

INSTALL_TARGET=	install-strip

USES+=		gmake
USES+=		tar:bzip2
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --enable-release
USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} 's/-Werror //' ${WRKSRC}/configure

.include <bsd.port.mk>
#EOF
