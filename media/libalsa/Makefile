#
# $Id$
#
PORTNAME=	libalsa
PORTVERSION=	${DISTVERSION}
DISTNAME=	alsa-lib-${DISTVERSION}
DISTVERSION=	1.1.2
CATEGORIES=	audio
MASTER_SITES=	ALSA/lib GENTOO

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	ALSA compatibility library

USES=		gmake cpe tar:bzip2
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
CPPFLAGS+=	-I${FILESDIR}
CONFIGURE_ENV=	ac_cv_header_endian_h=no


post-patch:
	${REINPLACE_CMD} -e '/LIBS/ { s/-ldl//g; s/-lrt//g; }' \
		-e 's/python-config/${PYTHON_CMD:T}-config/g' \
		-e '/pythonlibs/s/--libs/--ldflags/' \
		-e '/_GNU_SOURCE/d' \
		-e '/lt_cv_dlopen/s/-ldl//g' ${WRKSRC}/configure
	${REINPLACE_CMD} '/LIBADD/s/-ldl//g' \
		${WRKSRC}/modules/mixer/simple/Makefile.in
	${REINPLACE_CMD} 's|/etc|${PREFIX}&|g' \
		${WRKSRC}/src/conf/alsa.conf

post-install:
	${INSTALL_DATA} ${FILESDIR}/byteswap.h  ${STAGEDIR}${PREFIX}/include/alsa
	${INSTALL_DATA} ${FILESDIR}/malloc.h  ${STAGEDIR}${PREFIX}/include/alsa

.include <bsd.port.mk>
#EOF
