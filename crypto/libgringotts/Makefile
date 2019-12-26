#
# $id$
#
PORTNAME=	libgringotts
PORTVERSION=	1.2.1
CATEGORIES=	security
MASTER_SITES=	BERLIOS/gringotts.berlios


MAINTAINER= homeunix7@gmail.com
COMMENT=	Library for encapsulating/safekeeping data in encrypted/compressed form

LIB_DEPENDS+= libmcrypt.so:${PORTSDIR}/crypto/libmcrypt
LIB_DEPENDS+= libmhash.so:${PORTSDIR}/crypto/libmhash

USES+= tar:bz2 gmake
GNU_CONFIGURE=	yes
CONFIGURE_ENV+=	LIBS="-L${LOCALBASE}/lib" 
CPPFLAGS+=  -I${LOCALBASE}/include
USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e "s|md5sum|md5|g" ${WRKSRC}/Makefile.in

pre-install:
	${REINPLACE_CMD} -E -e "s|^(SUBDIRS =.*) docs|\1|" ${WRKSRC}/Makefile
	${REINPLACE_CMD} -E -e "s|^(install-data-am:.*)install-libgringottsdocDATA|\1|" ${WRKSRC}/Makefile

post-install:
	cd ${STAGEDIR}${PREFIX}/lib && ${LN} -s libgringotts.so.? libgringotts.so

.include <bsd.port.mk>
#EOF

