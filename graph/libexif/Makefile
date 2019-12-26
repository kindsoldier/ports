#
# $Id: Makefile 2368 2009-09-08 05:55:57Z root $
# $URL: file:///usr2/svn/ports5/graphics-libs/libexif/Makefile $
#
PORTNAME=	libexif
PORTVERSION=	0.6.21
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	onborodin@gmail.com
COMMENT=	Library to read digital camera file meta-data

LIB_DEPENDS+=	libintl.so:devel/gettext

USES+=		tar:bzip2
GNU_CONFIGURE=	yes
USES+=		gmake
CPPFLAGS+=	-I${LOCALBASE}/include
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --mandir=${PREFIX}

post-patch:
	@${REINPLACE_CMD} -e 's|-g -Wall||g' ${WRKSRC}/configure

.include <bsd.port.mk>
#EOF
