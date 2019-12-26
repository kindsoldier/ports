#
# $Id$
#
PORTNAME=	pam-pgsql
PORTVERSION=	0.7.3.2
CATEGORIES=	security databases
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/0.7/

MAINTAINER=	berend@pobox.com
COMMENT=	PAM module for authenticating with PostgreSQL

LIB_DEPENDS+=	libmhash.so:crypto/libmhash
LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
USES+=	pgsql

USES=		gmake
GNU_CONFIGURE=	yes
SUB_FILES=	pkg-message
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
#EOF

