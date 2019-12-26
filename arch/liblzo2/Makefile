#
# $Id$
#
PORTNAME=	lzo2
PORTVERSION=	2.09
CATEGORIES=	archivers devel
MASTER_SITES+=	http://www.oberhumer.com/opensource/lzo/download/
MASTER_SITES+=		http://fresh.t-systems-sfr.com/unix/src/misc/
MASTER_SITES+=		http://ftp.uni-koeln.de/util/arc/
MASTER_SITE_SUBDIR=	libs/compression
DISTNAME=	lzo-${DISTVERSIONPREFIX}${DISTVERSION}${DISTVERSIONSUFFIX}
PKGNAMEPREFIX=	lib


MAINTAINER= homeunix7@gmail.com
COMMENT=	Portable speedy, lossless data compression library

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS=	--enable-shared
USE_LDCONFIG=	yes

.include <bsd.port.mk>
#EOF
