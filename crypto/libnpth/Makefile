#
# $Id$
#
PORTNAME=	npth
PORTVERSION=	1.1
CATEGORIES=	devel
MASTER_SITES=	GNUPG/${PORTNAME}
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	New GNU Portable Threads

USES+=		tar:bzip2
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --enable-static
USES+=		gmake
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
#EOF
