#
# $Id: Makefile 2442 2009-09-14 21:30:05Z root $
#
PORTNAME=	gif
PORTVERSION=	4.2.3
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}lib/${PORTNAME}lib-4.x
PKGNAMEPREFIX=	lib

DISTNAME=	${PORTNAME}lib-${PORTVERSION}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Tools and library routines for working with GIF images

GNU_CONFIGURE=	yes
USES+=		gmake
USES+=		perl5
CONFIGURE_ARGS= #
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --with-x=no
INSTALLS_SHLIB=	yes

MAN_PLIST_FILES+=	man/man1/gif2rgb.1.gz
MAN_PLIST_FILES+=	man/man1/gifasm.1.gz
MAN_PLIST_FILES+=	man/man1/gifbg.1.gz
MAN_PLIST_FILES+=	man/man1/gifclip.1.gz
MAN_PLIST_FILES+=	man/man1/gifclrmp.1.gz
MAN_PLIST_FILES+=	man/man1/gifcolor.1.gz
MAN_PLIST_FILES+=	man/man1/gifcomb.1.gz
MAN_PLIST_FILES+=	man/man1/gifcompose.1.gz
MAN_PLIST_FILES+=	man/man1/giffiltr.1.gz
MAN_PLIST_FILES+=	man/man1/giffix.1.gz
MAN_PLIST_FILES+=	man/man1/gifflip.1.gz
MAN_PLIST_FILES+=	man/man1/gifhisto.1.gz
MAN_PLIST_FILES+=	man/man1/gifinter.1.gz
MAN_PLIST_FILES+=	man/man1/gifinto.1.gz
MAN_PLIST_FILES+=	man/man1/gifovly.1.gz
MAN_PLIST_FILES+=	man/man1/gifpos.1.gz
MAN_PLIST_FILES+=	man/man1/gifrotat.1.gz
MAN_PLIST_FILES+=	man/man1/gifrsize.1.gz
MAN_PLIST_FILES+=	man/man1/gifspnge.1.gz
MAN_PLIST_FILES+=	man/man1/giftext.1.gz
MAN_PLIST_FILES+=	man/man1/gifwedge.1.gz
MAN_PLIST_FILES+=	man/man1/icon2gif.1.gz
MAN_PLIST_FILES+=	man/man1/raw2gif.1.gz
MAN_PLIST_FILES+=	man/man1/rgb2gif.1.gz
MAN_PLIST_FILES+=	man/man1/text2gif.1.gz

PLIST_FILES+= ${MAN_PLIST_FILES}


post-extract:
	${PERL} -pi -e "s|/bin/perl|${LOCALBASE}/bin/perl|" \
		${WRKSRC}/util/gifburst

post-patch:
	${CP} ${FILESDIR}/quantize.c ${WRKSRC}/lib/

post-install:
	${MKDIR} -p ${STAGEDIR}/${PREFIX}/man/man1
.for MAN in ${MAN_PLIST_FILES}
	${INSTALL_DATA} ${WRKSRC}/doc/$$(basename ${MAN} .gz) ${STAGEDIR}/${PREFIX}/man/man1
.endfor

.include <bsd.port.mk>
#EOF
