#
# $Id$
#
PORTNAME=	fping
PORTVERSION=	5.3
CATEGORIES=	net
#MASTER_SITES=	https://fping.org/dist/ 
MASTER_SITES+=	https://github.com/schweikert/${PORTNAME}/releases/download/v${DISTVERSION}/


MAINTAINER=	jharris@widomaker.com
COMMENT=	Quickly ping multiple hosts without flooding the network

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--bindir=${PREFIX}/sbin
CONFIGURE_ARGS+= --enable-ipv4
CONFIGURE_ARGS+= --enable-ipv6
INSTALL_TARGET=	install-strip

USES=		autoreconf gmake

#USE_GITHUB=	yes
#GH_ACCOUNT=	schweikert

post-install:
	cd ${STAGEDIR}${PREFIX}/sbin && ${LN} -s fping fping6

.include <bsd.port.mk>
#EOF

