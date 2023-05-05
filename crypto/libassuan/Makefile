#
# $Id$
#
PORTNAME=	libassuan
PORTVERSION=	2.5.5
CATEGORIES=	security devel
MASTER_SITES=	GNUPG/${PORTNAME}

MAINTAINER=	onborodin@gmail.com
COMMENT=	IPC library used by GnuPG and gpgme

LIB_DEPENDS+=	libgpg-error.so:crypto/libgpg-error
LIB_DEPENDS+=	libintl.so:devel/gettext

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

INFO=		assuan

.include <bsd.port.mk>
#EOF
