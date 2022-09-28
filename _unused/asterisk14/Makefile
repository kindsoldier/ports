#
# $FreeBSD: head/net/asterisk11/Makefile 359185 2014-06-25 05:35:31Z bapt $
#
PORTNAME=	asterisk
PORTVERSION=	14.3.0
CATEGORIES=	net
MASTER_SITES+=	http://downloads.asterisk.org/pub/telephony/asterisk/
MASTER_SITES+=	http://downloads.asterisk.org/pub/telephony/asterisk/old-releases/
MASTER_SITES+=	http://downloads.asterisk.org/pub/telephony/sounds/releases/

EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	onborodin@gmail.com
COMMENT=	An Open Source PBX and telephony toolkit


USES+=	pgsql
#LIB_DEPENDS+=	libmysqlclient.so:data/mariadb
LIB_DEPENDS+=	libsqlite3.so:data/sqlite3

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libjpeg.so:graph/libjpeg
LIB_DEPENDS+=	libtiff.so:graph/libtiff

LIB_DEPENDS+=	libogg.so:media/libogg

LIB_DEPENDS+=	libvorbis.so:media/libvorbis
LIB_DEPENDS+=	libvorbisenc.so:media/libvorbis
LIB_DEPENDS+=	libvorbisfile.so:media/libvorbis

LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libidn.so:net/libidn
LIB_DEPENDS+=	libiksemel.so:net/libiksemel
LIB_DEPENDS+=	libspandsp.so:net/libspandsp
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libxml2.so:text/libxml2

LIB_DEPENDS+=	libsrtp.so:net/libsrtp

BUILD_DEPENDS+=	bison:devel/bison

#LIB_DEPENDS+=	libasound.so:media/libalsa
#LIB_DEPENDS+=	libsamplerate.so:media/libsamplerate

LIB_DEPENDS+=	libgnutls.so:crypto/libgnutls
LIB_DEPENDS+=	libuuid.so:system/libuuid
#LIB_DEPENDS+=	libpj.so:net/libpjsip
LIB_DEPENDS+=	libsysinfo.so:system/libsysinfo

GNU_CONFIGURE=	yes
USES+=		gmake

LDFLAGS+=	-L${LOCALBASE}/lib
CPPFLAGS+=	-I${LOCALBASE}/include 
CFLAGS+=	-I${LOCALBASE}/include
CFLAGS+=	-I${LOCALBASE}/include/libxml2

CONFIGURE_ARGS+= --datarootdir=${DATADIR}
CONFIGURE_ARGS+= --with-crypto=/usr
CONFIGURE_ARGS+= --with-ssl=/usr

SHEBANG_FILES+=	agi/agi-test.agi
SHEBANG_FILES+=	agi/jukebox.agi
SHEBANG_FILES+=	contrib/scripts/astversion

USE_RC_SUBR=	asterisk

MAKE_ENV+=	PTHREAD_CFLAGS="${PTHREAD_CFLAGS}"
MAKE_ENV+=	PTHREAD_LIBS="${PTHREAD_LIBS}"
MAKE_ENV+=	MKDIR="${MKDIR}"
#MAKE_ENV+=	PWLIBDIR=${LOCALBASE}/share/pwlib
#MAKE_ENV+=	OPENH323DIR=${LOCALBASE}/share/openh323
MAKE_ENV+=	OSVERSION=${OSVERSION}
MAKE_ENV+=	NOISY_BUILD=YES
MAKE_ENV+=	DOCSDIR=${DOCSDIR} 
MAKE_ENV+=	ASTCFLAGS="${CFLAGS}"

####CONFIGURE_ARGS+= --with-pjproject-bundled

MAKE_ENV+=	CC="${CC}"
MAKE_ENV+=	CXX="${CXX}"
MAKE_ENV+=	CPP="${CPP}"

CC=	gcc
CXX=	g++
CPP=	gcpp


ASTERISK_USER=		asterisk
ASTERISK_GROUP=		asterisk

.include <bsd.port.pre.mk>

VARDIR=${PREFIX}/var

SUB_LIST+=	ASTERISK_USER=${ASTERISK_USER}

PLIST_SUB+=	ASTERISK_USER=${ASTERISK_USER}
PLIST_SUB+=	ASTERISK_GROUP=${ASTERISK_GROUP}
PLIST_SUB+=	VARDIR=${VARDIR}
#CONFIGURE_ARGS+= --with-gsm=${LOCALBASE}
#CONFIGURE_ARGS+= --with-uuid=${LOCALBASE}
#CONFIGURE_ARGS+= --without-sqlite3
CONFIGURE_ARGS+= --with-gsm=internal
CONFIGURE_ARGS+= --with-iksemel
CONFIGURE_ARGS+= --with-libcurl
CONFIGURE_ARGS+= --with-ogg
CONFIGURE_ARGS+= --with-postgres
CONFIGURE_ARGS+= --with-spandsp
CONFIGURE_ARGS+= --without-srtp

CONFIGURE_ARGS+= --without-dahdi
CONFIGURE_ARGS+= --without-ldap
CONFIGURE_ARGS+= --without-lua
CONFIGURE_ARGS+= --without-mysqlclient
CONFIGURE_ARGS+= --without-neon --without-neon29
CONFIGURE_ARGS+= --without-netsnmp
CONFIGURE_ARGS+= --without-openr2
CONFIGURE_ARGS+= --without-radius
CONFIGURE_ARGS+= --without-sdl
CONFIGURE_ARGS+= --without-SDL_image
CONFIGURE_ARGS+= --without-sqlite
CONFIGURE_ARGS+= --without-tds
CONFIGURE_ARGS+= --without-unixodbc
CONFIGURE_ARGS+= --without-x11

CC=	gcc
CXX=	g++
CPP=	gcpp


post-extract:
	${FIND} ${WRKSRC} -name '*.d' -delete

post-patch:
#	${REINPLACE_CMD} -e 's|/var/lib|${PREFIX}/share|g' ${WRKSRC}/configs/musiconhold.conf.sample

post-configure:
	cd ${WRKSRC} && gmake menuselect.makeopts CFLAGS="${CFLAGS}"
	cd ${WRKSRC} && ./menuselect/menuselect --disable res_timing_kqueue menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --enable chan_mgcp menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --enable res_pktccops menuselect.makeopts

	cd ${WRKSRC} && ./menuselect/menuselect --disable res_config_mysql menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --disable app_mysql menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --disable cdr_mysql menuselect.makeopts

	cd ${WRKSRC} && ./menuselect/menuselect --enable cdr_pgsql menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --enable cel_pgsql menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --enable res_config_pgsql menuselect.makeopts

#	cd ${WRKSRC} && ./menuselect/menuselect --enable chan_ooh323 menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --enable  G711_NEW_ALGORITHM menuselect.makeopts

	cd ${WRKSRC} && ./menuselect/menuselect --disable CORE-SOUNDS-EN-WAV menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --disable CORE-SOUNDS-RU-WAV menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --disable CORE-SOUNDS-EN-ALAW menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --disable CORE-SOUNDS-RU-ALAW menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --disable CORE-SOUNDS-EN-ULAW menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --disable CORE-SOUNDS-RU-ULAW menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --disable CORE-SOUNDS-EN-G729 menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --disable CORE-SOUNDS-RU-g729 menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --disable CORE-SOUNDS-EN-G722 menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --disable CORE-SOUNDS-RU-G722 menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --disable CORE-SOUNDS-EN-GSM menuselect.makeopts

#	cd ${WRKSRC} && ./menuselect/menuselect --disable chan_multicast_rtp menuselect.makeopts
#	cd ${WRKSRC} && ./menuselect/menuselect --disable res_rtp_multicast menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --disable app_ices menuselect.makeopts
	cd ${WRKSRC} && ./menuselect/menuselect --disable chan_motif menuselect.makeopts
#	cd ${WRKSRC} && ./menuselect/menuselect --disable cdr_sqlite3_custom menuselect.makeopts
#	cd ${WRKSRC} && ./menuselect/menuselect --disable cel_sqlite3_custom menuselect.makeopts
#	cd ${WRKSRC} && ./menuselect/menuselect --enable conf2ael menuselect.makeopts


post-install:
#	${RM} ${STAGEDIR}${PREFIX}/share/doc/asterisk/images/*
	mkdir -p ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/configs/samples/* ${STAGEDIR}${EXAMPLESDIR}/
#	rm -f ${STAGEDIR}${PREFIX}/etc/asterisk/*.dist
	cd ${STAGEDIR}/${PREFIX}/man/man8 && ${LN} -sf  asterisk.8 rasterisk.8

#PORTEXAMPLES=	*


AS_DATADIR=	/var/spool/asterisk
AS_RUNDIR=	/var/run/asterisk
AS_LOGDIR=	/var/log/asterisk
AS_DBDIR=	/var/db/asterisk


AS_OWNER=	${PORTNAME}
AS_GROUP=	${PORTNAME}
AS_OWNER_ID=	931
AS_GROUP_ID=	931

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
PKGINSTALL=	${WRKDIR}/pkg-install

#PKGMESSAGE=	${WRKDIR}/pkg-message
#USE_RC_SUBR= aterisk.sh

SUB_FILES+= pkg-install pkg-deinstall

SUB_LIST+= AS_OWNER=${AS_OWNER}
SUB_LIST+= AS_GROUP=${AS_GROUP}
SUB_LIST+= AS_OWNER_ID=${AS_OWNER_ID}
SUB_LIST+= AS_GROUP_ID=${AS_GROUP_ID}
SUB_LIST+= AS_RUNDIR=${AS_RUNDIR}
SUB_LIST+= AS_LOGDIR=${AS_LOGDIR}
SUB_LIST+= AS_DATADIR=${AS_DATADIR}
SUB_LIST+= AS_DBDIR=${AS_DBDIR}
SUB_LIST+= AS_SYSCONFDIR=${AS_SYSCONF_DIR}

.include <bsd.port.post.mk>

#EOF
