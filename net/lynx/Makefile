#
# $Id: Makefile 2235 2009-09-01 20:18:51Z root $
#
PORTNAME=	lynx
#PORTVERSION_MAJOR=2.8
#PORTVERSION_MINOR=9
#PORTVERSION_PATCH=rel.1
#PORTVERSION_BASE=${PORTVERSION_MAJOR}.${PORTVERSION_MINOR}
#PORTVERSION=${PORTVERSION_BASE}${PORTVERSION_PATCH:S/rel//}
CATEGORIES=	www textproc
#MASTER_SITES+=  ftp://ftp.isc.org/lynx/current/
#MASTER_SITES+=  ftp://ftp.isc.org/lynx/release/
#MASTER_SITES+=  ftp://ftp.isc.org/lynx/lynx${PORTVERSION_BASE}/
#DISTNAME=       ${PORTNAME}${PORTVERSION_BASE}${PORTVERSION_PATCH}
#PATCH_SITES=    ftp://ftp.isc.org/lynx/lynx${PORTVERSION_BASE}/patches/
#DIST_SUBDIR=	isc

PORTVERSION=	2.8.9.1
MASTER_SITES=	http://invisible-mirror.net/archives/lynx/tarballs/ \
		http://bitrote.org/distfiles/
DISTNAME=	${PORTNAME}${PORTVERSION:R}rel.${PORTVERSION:E}


COMMENT=	A non-graphical, text-based World-Wide Web client
MAINTAINER=	onborodin@gmail.com

LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libintl.so:devel/gettext

LX_CONF_SUBDIR= etc/${PORTNAME}
LX_CONF_DIR= ${PREFIX}/etc/${PORTNAME}
PLIST_SUB+= LX_CONF_SUBDIR=${LX_CONF_SUBDIR}

MAKE_JOBS_UNSAFE=	yes

GNU_CONFIGURE=	yes
USES+=		gmake tar:bz2
MAKEFILE=	makefile
#WRKSRC=		${WRKDIR}/${PORTNAME}${PORTVERSION_BASE:S/./-/g}
CFLAGS+=	-I/usr/include/openssl -I${LOCALBASE}/include
CPPFLAGS+=	-I/usr/include/openssl -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lintl

CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --sysconfdir=${LX_CONF_DIR}
CONFIGURE_ARGS+= --disable-finger
CONFIGURE_ARGS+= --disable-gopher
CONFIGURE_ARGS+= --disable-presistent-cookies
CONFIGURE_ARGS+= --enable-charset-choice
CONFIGURE_ARGS+= --enable-externs
CONFIGURE_ARGS+= --enable-prettysrc
CONFIGURE_ARGS+= --enable-read-eta
CONFIGURE_ARGS+= --enable-source-cache
CONFIGURE_ARGS+= --enable-syslog
CONFIGURE_ARGS+= --with-charsets="iso-8859-1,us-ascii,iso-8859-5,cp866,windows-1251,koi8-r,utf-8,utf-16"
CONFIGURE_ARGS+= --with-ssl=/usr
CONFIGURE_ARGS+= --with-zlib
CONFIGURE_ARGS+= --with-bzlib
CONFIGURE_ARGS+= --enable-nls
CONFIGURE_ARGS+= --with-screen=ncursesw
CONFIGURE_ARGS+= --enable-htmlized-cfg
CONFIGURE_ARGS+= --enable-ipv6
#CONFIGURE_ARGS+= --enable-japanese-utf8

INSTALL_TARGET=	install install-help


post-install:
	${MKDIR} ${STAGEDIR}/${EXAMPLESDIR}
	${MV} ${STAGEDIR}/${LX_CONF_DIR}/*.sample ${STAGEDIR}/${EXAMPLESDIR}

PORTEXAMPLES=	*


.include <bsd.port.mk>
#EOF
