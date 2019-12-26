#
# $Id: Makefile 2588 2009-09-24 22:21:54Z root $
#
PORTNAME=	rdesktop
PORTVERSION=	1.8.6
CATEGORIES=	net comms
DISTVERSIONPREFIX=	v

USE_GITHUB=	yes


MAINTAINER=	onborodin@gmail.com
COMMENT=	RDP client for Windows NT/2000/2003 Terminal Server

LIB_DEPENDS+=	libsamplerate.so:media/libsamplerate
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXrandr.so:x11/libXrandr
LIB_DEPENDS+=	libXrender.so:x11/libXrender


USES=		autoreconf gmake iconv pkgconfig ssl
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --x-includes=${LOCALBASE}/include
CONFIGURE_ARGS+= --x-libraries=${LOCALBASE}/lib
CONFIGURE_ARGS+= --disable-credssp  --disable-smartcard
CONFIGURE_ARGS+= --with-openssl=/usr

CONFIGURE_ARGS+=	--with-sound=oss
CONFIGURE_ARGS+=	--with-ipv6


CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+= -L${LOCALBASE}/lib
CFLAGS+=	${CPPFLAGS}

.include <bsd.port.mk>
#EOF
