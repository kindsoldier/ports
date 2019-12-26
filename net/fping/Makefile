#
# $Id$
#
PORTNAME=	fping
PORTVERSION=	4.1
CATEGORIES=	net
MASTER_SITES=	http://fping.org/dist/ http://bitrote.org/distfiles/

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

.include <bsd.port.mk>
#EOF

