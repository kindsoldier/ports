#
# $Id$
#
PORTNAME=	exiv2
PORTVERSION=	0.24
CATEGORIES=	graphics
MASTER_SITES=	http://www.exiv2.org/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Exif and Iptc metadata manipulation library and tools

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libexpat.so:text/libexpat

GNU_CONFIGURE=	yes
USES+=		gmake
INSTALLS_SHLIB=	yes
ALLTARGET=	all
LDFLAGS=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}
CPPFLAGS=	-I${LOCALBASE}/include
CONFIGURE_ARGS+=	--mandir=${PREFIX}/man

PLIST_FILES+=	man/man1/exiv2.1.gz

post-patch:
	${REINPLACE_CMD} -e 's,LDFLAGS -no-undefined -lpsapi",& ;; \
		dragonfly* | freebsd*),' ${WRKSRC}/configure

#post-patch:
#	@${REINPLACE_CMD} -e 's|echo aout|echo elf|' ${WRKSRC}/configure
#	@${REINPLACE_CMD} -e 's|(libdir)/pkgconfig|(prefix)/libdata/pkgconfig|' ${WRKSRC}/src/Makefile

.include <bsd.port.mk>
#EOF
