#
# $Id$
#
PORTNAME=	mpc
PORTVERSION=	0.21
CATEGORIES=	audio
MASTER_SITES=	http://musicpd.org/download/mpc/0/
#MASTER_SITES=	SF/musicpd/${PORTNAME}/${PORTVERSION}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Command line client for the musicpd

LIB_DEPENDS+=	libmpdclient.so:media/libmpdclient
LIB_DEPENDS+=	libiconv.so:text/libiconv

USES+=		tar:bzip2
GNU_CONFIGURE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I${LOCALBASE}/include 
PLIST_FILES+=	man/man1/mpc.1.gz
ICONV_LIB=	-liconv

post-patch:
	${REINPLACE_CMD} -e 's|-lintl|${ICONV_LIB}|g' ${WRKSRC}/configure

.include <bsd.port.mk>
#EOF
