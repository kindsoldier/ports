#
# $Id$
#
PORTNAME=	miredo
PORTVERSION=	1.2.6
CATEGORIES=	net
MASTER_SITES=	http://www.remlab.net/files/miredo/archive/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Opensource Teredo (IPv6 tunneling) implementation

LIB_DEPENDS=	libJudy.so:devel/libjudy
LIB_DEPENDS+=	libintl.so:devel/gettext

USES=		gmake tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--localstatedir=/var --enable-examplesdir=${EXAMPLESDIR}
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib


USE_RC_SUBR=	miredo-server miredo

PORTEXAMPLES=	*

.include <bsd.port.mk>
#EOF
