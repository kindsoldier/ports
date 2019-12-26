#
# $Id$
#
PORTNAME=	fcgiwrap
PORTVERSION=	1.1.0
CATEGORIES=	www
MASTER_SITES=	http://www.skysmurf.nl/comp/FreeBSD/distfiles/

MAINTAINER=	freebsd@skysmurf.nl
COMMENT=	Simple FastCGI wrapper for CGI scripts

LIB_DEPENDS=	libfcgi.so:net/libfcgi
BUILD_DEPENDS+=	autoconf:devel/autoconf
BUILD_DEPENDS+=	automake:devel/automake


USES=	gmake

USE_GITHUB=	yes
GH_ACCOUNT=	gnosek

USE_RC_SUBR=	fcgiwrap

CFLAGS+=	-I${LOCALBASE}/include -L${LOCALBASE}/lib
GNU_CONFIGURE=	yes

post-patch:
	${REINPLACE_CMD} -e 's/@prefix@@mandir@/@mandir@/' \
	      -e 's|-m 755 fcgiwrap|-s -m 755 fcgiwrap|' ${WRKSRC}/Makefile.in

pre-configure:
	cd ${WRKSRC} && autoreconf -i

.include <bsd.port.mk>
