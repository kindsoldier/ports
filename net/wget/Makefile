#
# $Id: Makefile 2537 2009-09-23 14:06:27Z root $
#
DIST_SUBDIR=	gnu
PORTNAME=	wget
PORTVERSION=	1.19.3
CATEGORIES=	ftp www net
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	wget

COMMENT=	Retrieve files from the 'net via HTTP and FTP
MAINTAINER=	onborodin@gmail.com

LIB_DEPENDS+=	libintl.so:devel/gettext/
LIB_DEPENDS+=	libpcre.so:text/libpcre/
LIB_DEPENDS+=	libidn.so:net/libidn


USES+=		gmake #tar:gz
GNU_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info

CONFIGURE_ARGS+= --with-libssl-prefix=/usr
CONFIGURE_ARGS+= --with-ssl=openssl
CONFIGURE_ARGS+= --without-libgnutls-prefix
CONFIGURE_ARGS+= --with-libidn=${LOCALBASE}
CONFIGURE_ENV+= ZLIB_CFLAGS="-I/usr/include"
CONFIGURE_ENV+= ZLIB_LIBS="-L/usr/lib -lz"

INFO+=	wget

.include <bsd.port.mk>
#EOF

