#
# $Id: Makefile 2375 2009-09-08 10:26:00Z root $
#
PORTNAME=	lame
PORTVERSION=	3.100 #3.99.5
CATEGORIES=	audio
MASTER_SITES+=	ftp://ftp.fu-berlin.de/unix/sound/%SUBDIR%/
MASTER_SITES=	SF/${PORTNAME:tl}/${PORTNAME:tl}/3.99
MASTER_SITES=	SF/${PORTNAME:tl}/${PORTNAME:tl}/3.100

CATEGORIES=	audio

COMMENT=	ISO code based fast MP3 encoder kit
MAINTAINER=	onborodin@gmail.com


.include <bsd.port.pre.mk>

#.if ${ARCH} == "i386"
#BUILD_DEPENDS+= nasm:devel/nasm
#CONFIGURE_ARGS+= --enable-nasm
#.endif


GNU_CONFIGURE=	yes
USES+=		gmake
INSTALLS_SHLIB= yes
CONFIGURE_ARGS+= --disable-mp3x
CONFIGURE_ARGS+= --disable-mp3rtp
CONFIGURE_ARGS+= --disable-gtktest

CONFIGURE_ARGS+= --mandir=${PREFIX}/man

post-patch:
	${REINPLACE_CMD} -e '/SUBDIRS/s|html man|man|' ${WRKSRC}/doc/Makefile.in
	${REINPLACE_CMD} -e 's,test -d \.libs || mkdir,mkdir -p,' \
		${WRKSRC}/libmp3lame/i386/Makefile.in


.include <bsd.port.post.mk>
#EOF
