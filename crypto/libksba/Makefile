#
# $Id$
#
PORTNAME=	libksba
PORTVERSION=	1.6.3
CATEGORIES=	security
MASTER_SITES=	GNUPG/${PORTNAME}

MAINTAINER=	onborodin@gmail.com
COMMENT=	KSBA is an X.509 Library

LIB_DEPENDS+=	libgpg-error.so:crypto/libgpg-error
LIB_DEPENDS+=	libintl.so:devel/gettext


CONFIGURE_ARGS=	--enable-static
INSTALL_TARGET=	install-strip
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES+=		tar:bzip2
USES+=		gmake


INFO=		ksba

.include <bsd.port.mk>
