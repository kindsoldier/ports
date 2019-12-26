#
# $Id: Makefile 2379 2009-09-08 14:10:33Z root $
#
PORTNAME=	mpg123
PORTVERSION=	1.12.3
CATEGORIES=	audio
MASTER_SITES+=  http://www.mpg123.de/download/
MASTER_SITES+=	${MASTER_SITE_SOURCEFORGE}
MASTER_SITE_SUBDIR=	${PORTNAME}
DIST_SUBDIR=	audio

COMMENT=	Command-line player for mpeg layer 1, 2 and 3 audio
MAINTAINER=	onborodin@gmail.com

GNU_CONFIGURE=	yes
USES+=		gmake
USES+=		tar:bzip2
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --program-transform-name=""

#CONFIGURE_ARGS+= --with-cpu=i586

CONFIGURE_ARGS+= --with-default-audio=oss 
CONFIGURE_ARGS+= --enable-modules=no 
CONFIGURE_ARGS+= --enable-static
CONFIGURE_ARGS+= --enable-shared
#CONFIGURE_ARGS+= --disable-downsample=no
#CONFIGURE_ARGS+= --disable-feeder=no 
#CONFIGURE_ARGS+= --disable-icy=no
#CONFIGURE_ARGS+= --disable-id3v2=no
#CONFIGURE_ARGS+= --disable-layer1=no
#CONFIGURE_ARGS+= --disable-layer2=no
#CONFIGURE_ARGS+= --disable-layer3=no 
#CONFIGURE_ARGS+= --disable-messages=no
##CONFIGURE_ARGS+= --disable-string=no 

CONFIGURE_ARGS+= --enable-buffer=yes 
CONFIGURE_ARGS+= --enable-fifo=yes 
CONFIGURE_ARGS+= --enable-gapless=yes 
CONFIGURE_ARGS+= --enable-ipv6=yes 
CONFIGURE_ARGS+= --enable-network=yes 
#CONFIGURE_ARGS+= --with-cpu=x86
CONFIGURE_ARGS+= --with-default-audio=oss

CONFIGURE_ARGS+= --with-audio=oss
#CONFIGURE_ARGS+= --without-audio=nas
#CONFIGURE_ARGS+= --without-audio=sdl

PLIST_FILES+=	man/man1/mpg123.1.gz

.include <bsd.port.mk>
#EOF
