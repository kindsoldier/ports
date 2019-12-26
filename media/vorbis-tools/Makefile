#
# $Id: Makefile 2379 2009-09-08 14:10:33Z root $
# $URL: file:///usr2/svn/ports5/multimedia-tools/vorbis-tools/Makefile $
#
PORTNAME=	vorbis-tools
PORTVERSION=	1.4.0
CATEGORIES=	audio
MASTER_SITES=	http://downloads.xiph.org/releases/vorbis/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Play, encode, and manage Ogg files

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libao.so:media/libao

LIB_DEPENDS+=	libFLAC.so:media/libflac
LIB_DEPENDS+=	libkate.so:media/libkate
LIB_DEPENDS+=	liboggkate.so:media/libkate
LIB_DEPENDS+=	libogg.so:media/libogg
LIB_DEPENDS+=	libspeex.so:media/libspeex

LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libvorbisenc.so:media/libvorbis
LIB_DEPENDS+=	libvorbisfile.so:media/libvorbis
LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libidn.so:net/libidn
LIB_DEPENDS+=	libiconv.so:text/libiconv

GNU_CONFIGURE=	yes
USES+=		gmake
CPPFLAGS+= -I${LOCALBASE}/include
LDFLAGS+= -L${LOCALBASE}/lib
CFLAGS+= ${CPPFLAGS}
CONFIGURE_ENV+=	CPPFLAGS="${CPPFLAGS}" 
CONFIGURE_ENV+=	LDFLAGS="${LDFLAGS}"
CONFIGURE_ENV+=	CFLAGS="${CFLAGS}" 


CONFIGURE_TARGET= --build=${MACHINE_ARCH}-ziggi-freebsd${OSREL}
CONFIGURE_ARGS+= --enable-vcut

CONFIGURE_ARGS+= --enable-threads=posix

CONFIGURE_ARGS+= --with-curl
CONFIGURE_ARGS+= --with-vorbis
CONFIGURE_ARGS+= --with-ogg
CONFIGURE_ARGS+= --with-flac
CONFIGURE_ARGS+= --with-speex
CONFIGURE_ARGS+= --with-kate

CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man 

PLIST_FILES+=	man/man1/ogg123.1.gz
PLIST_FILES+=	man/man1/oggdec.1.gz
PLIST_FILES+=	man/man1/oggenc.1.gz
PLIST_FILES+=	man/man1/ogginfo.1.gz
PLIST_FILES+=	man/man1/vcut.1.gz
PLIST_FILES+=	man/man1/vorbiscomment.1.gz

.include <bsd.port.mk>
#EOF
