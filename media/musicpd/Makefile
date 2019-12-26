#
# $Id$
#
PORTNAME=	musicpd
PORTVERSION=	0.17.6
CATEGORIES=	audio

MASTER_SITES=	http://www.musicpd.org/download/mpd/${PORTVERSION:R}/ #mpd-0.17.5.tar.xz
#MASTER_SITES=	SF/${PORTNAME}/mpd/${PORTVERSION}
DISTNAME=	mpd-${PORTVERSION}

MAINTAINER=	onborodin@gmail.com
COMMENT=	A remote-controllable music daemon

LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libmp3lame.so:media/lame
LIB_DEPENDS+=	libao.so:media/libao
LIB_DEPENDS+=	libaudiofile.so:media/libaudiofile
LIB_DEPENDS+=	libfaad.so:media/libfaad
LIB_DEPENDS+=	libFLAC.so:media/libflac
LIB_DEPENDS+=	libid3tag.so:media/libid3tag
LIB_DEPENDS+=	libmad.so:media/libmad
LIB_DEPENDS+=	libmpcdec.so:media/libmusepack
LIB_DEPENDS+=	libogg.so:media/libogg
LIB_DEPENDS+=	libsamplerate.so:media/libsamplerate
LIB_DEPENDS+=	libsndfile.so:media/libsndfile
LIB_DEPENDS+=	libtwolame.so:media/libtwolame
LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libwavpack.so:media/libwavpack

LIB_DEPENDS+=	libmpg123.so:media/mpg123


LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libavahi-client.so:net/avahi
LIB_DEPENDS+=	libavahi-common.so:net/avahi
LIB_DEPENDS+=	libavahi-glib.so:net/avahi



USES+=		gmake
USES+=		tar:xz
GNU_CONFIGURE=	yes

USE_RC_SUBR=	${PORTNAME}
CPPFLAGS+=	-I${LOCALBASE}/include -I${PREFIX}/include
CONFIGURE_ENV+=	LDFLAGS="-L${LOCALBASE}/lib" CFLAGS="${CPPFLAGS}"
CONFIGURE_ARGS+= --program-transform-name='s/mpd/musicpd/'
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

#DOCSDIR=	${PREFIX}/share/doc/mpd
#PORTDOCS=	mpdconf.example

MUSICPD_OWNER=	musicpd
MUSICPD_GROUP=	musicpd

OWNER=	${MUSICPD_OWNER}
GROUP=	${MUSICPD_GROUP}

SUB_FILES=	pkg-install

PKGINSTALL=	${WRKDIR}/pkg-install
#PKGDEINSTALL=	${WRKDIR}/pkg-deinstall

MUSICPD_OID=	137
MUSICPD_GID=	137

PLIST_SUB+=	MUSICPD_OWNER=${MUSICPD_OWNER}
PLIST_SUB+=	MUSICPD_GROUP=${MUSICPD_GROUP}

SUB_LIST+=	MUSICPD_OWNER=${MUSICPD_OWNER}
SUB_LIST+=	MUSICPD_GROUP=${MUSICPD_GROUP}
SUB_LIST+=	MUSICPD_DB_DIR=/var/musicpd

SUB_LIST+=	MUSICPD_OID=${MUSICPD_OID}
SUB_LIST+=	MUSICPD_GID=${MUSICPD_GID}


#CONFIGURE_ARGS+= --enable-iso9660 
#CONFIGURE_ARGS+= --with-tremor=${LOCALBASE}
CONFIGURE_ARGS+= --disable-alsa
CONFIGURE_ARGS+= --disable-ffmpeg
CONFIGURE_ARGS+= --disable-iso9660
CONFIGURE_ARGS+= --disable-jack
CONFIGURE_ARGS+= --disable-mikmod
CONFIGURE_ARGS+= --disable-modplug
CONFIGURE_ARGS+= --disable-mvp
CONFIGURE_ARGS+= --disable-pipe-output
CONFIGURE_ARGS+= --disable-pulse
CONFIGURE_ARGS+= --disable-sidplay
CONFIGURE_ARGS+= --disable-wildmidi

CONFIGURE_ARGS+= --enable-aac
CONFIGURE_ARGS+= --enable-ao
CONFIGURE_ARGS+= --enable-audiofile
CONFIGURE_ARGS+= --enable-bzip2
CONFIGURE_ARGS+= --enable-curl
CONFIGURE_ARGS+= --enable-fifo
CONFIGURE_ARGS+= --enable-flac
CONFIGURE_ARGS+= --enable-httpd-output
CONFIGURE_ARGS+= --enable-id3
CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --enable-lame-encoder
CONFIGURE_ARGS+= --enable-lsr
CONFIGURE_ARGS+= --enable-mad
CONFIGURE_ARGS+= --disable-mms
CONFIGURE_ARGS+= --enable-mpc
CONFIGURE_ARGS+= --enable-oggflac
CONFIGURE_ARGS+= --disable-shout
CONFIGURE_ARGS+= --enable-vorbis
CONFIGURE_ARGS+= --enable-vorbis-encoder
CONFIGURE_ARGS+= --enable-wavpack
CONFIGURE_ARGS+= --disable-zzip
CONFIGURE_ARGS+= --with-zeroconf=auto
CONFIGURE_ARGS+= --without-tremor

post-patch:
	${REINPLACE_CMD} -e "s/%%MPDDIR%%/${PREFIX:C/\//\\\//g}\/${MPDDIR:C/\//\\\//g}/g" -e "s/%%MPDOWNER%%/${MPDOWNER}/g" \
		${WRKSRC}/doc/mpdconf.example
	${REINPLACE_CMD} -e 's|install-docDATA ||' \
		${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-pixbuf-xlib-2.0|gdk-pixbuf-xlib|g' 	${WRKSRC}/configure


PLIST_FILES+=	man/man1/musicpd.1.gz
PLIST_FILES+=	man/man5/musicpd.conf.5.gz

PLIST_FILES=	bin/musicpd
PLIST_FILES+= share/examples/musicpd/musicpd.conf.example

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/mpdconf.example ${STAGEDIR}${EXAMPLESDIR}/musicpd.conf.example

.include <bsd.port.mk>
#EOF
