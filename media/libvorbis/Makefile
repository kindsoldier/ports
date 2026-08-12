#
# $Id: Makefile 2383 2009-09-10 22:34:53Z root $
# $URL: file:///usr2/svn/ports5/multimedia-libs/libvorbis/Makefile $
#
PORTNAME=	libvorbis
PORTVERSION=	1.3.5
CATEGORIES=	audio
MASTER_SITES=	http://downloads.xiph.org/releases/vorbis/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Audio compression codec library

LIB_DEPENDS+=	libogg.so:media/libogg

USES+=		tar:xz
GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --with-ogg=${LOCALBASE}
INSTALLS_SHLIB=	yes

post-patch:
	${REINPLACE_CMD} -e '/^SUBDIRS/s|doc||' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e '/^SUBDIRS/s|test||' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF
