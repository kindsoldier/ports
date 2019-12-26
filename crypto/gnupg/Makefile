#
# $Id: Makefile 2714 2009-11-12 21:28:24Z root $
#
PORTNAME=	gnupg
PORTVERSION=	1.4.20
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_GNUPG}
MASTER_SITE_SUBDIR=	gnupg
DIST_SUBDIR=	gnu

MAINTAINER=	onborodin@gmail.com
COMMENT=	The GNU Privacy Guard

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libcurl.so:net/libcurl



USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
#CONFIGURE_TARGET=--build=${MACHINE_ARCH}-pc-freebsd${OSREL}
CONFIGURE_ARGS+= --with-readline
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --disable-asm

CONFIGURE_ARGS+= --disable-ldap
CONFIGURE_ARGS+= --with-libcurl=${LOCALBASE}


.include <bsd.port.pre.mk>

.if ${CC} == "clang" || ${OSVERSION} >= 1000024
CFLAGS:=	${CFLAGS:S/$/ -std=c89/}
.if (${ARCH} == "i386")
CFLAGS:=	${CFLAGS:S/$/ -fheinous-gnu-extensions/}
.endif
.endif

.if ${OSVERSION} > 1100000
LIB_DEPENDS+=	libreadline.so:devel/libreadline
.endif

.if ((${ARCH} == "armv6" || ${ARCH} == "armv6hf"))
CFLAGS+= -U__arm__
CPPFLAGS+= -U__arm__
.endif

post-patch:
	${REINPLACE_CMD} -e 's|PRINTABLE_OS_NAME|"Windows"|' ${WRKSRC}/g10/armor.c
	${REINPLACE_CMD} -e '/^man_/s| gpg.ru.1||' ${WRKSRC}/doc/Makefile.in

INFO+= gnupg1

.include <bsd.port.post.mk>
#EOF

