#
# $Id$
#
PORTNAME=	libssh2
PORTVERSION=	1.8.2
CATEGORIES=	security devel
MASTER_SITES=	http://www.libssh2.org/download/

MAINTAINER=	onborodin@gmail.com
COMMENT=	A library implementing the SSH2 protocol

LIB_DEPENDS+= libgcrypt.so:crypto/libgcrypt

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes


CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --with-libz
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --with-libgcrypt --without-openssl
CONFIGURE_ARGS+= --disable-debug

.include <bsd.port.mk>
#EOF
