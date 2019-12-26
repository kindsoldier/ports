#
# $Id$
#
PORTNAME=	gnupg
PORTVERSION=	2.1.1
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_GNUPG}
MASTER_SITE_SUBDIR=	gnupg
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} ${DISTNAME}${EXTRACT_SUFX}.sig
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	onborodin@gmail.com
COMMENT=	The GNU Privacy Guard
PKGNAMESUFFIX=	2


RUN_DEPENDS=	pinentry:crypto/pinentry

LIB_DEPENDS+=	libassuan.so:crypto/libassuan
LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libgnutls.so:crypto/libgnutls
LIB_DEPENDS+=	libgpg-error.so:crypto/libgpg-error
LIB_DEPENDS+=	libksba.so:crypto/libksba
LIB_DEPENDS+=	libnpth.so:crypto/libnpth
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libgmp.so:math/libgmp

CONFLICTS=	gnupg-2.0.*

USES+=		tar:bzip2
GNU_CONFIGURE=	yes
USES+=		gmake
USE_LDCONFIG=	yes
#CONFIGURE_ARGS+= --enable-symcryptrun
CONFIGURE_ARGS+= --enable-gpgsm
CONFIGURE_ARGS+= --disable-ldap
#CONFIGURE_ARGS+= --disable-card-support
#CONFIGURE_ARGS+= --disable-dns-cert
#CONFIGURE_ARGS+= --disable-dns-pka
#CONFIGURE_ARGS+= --disable-dns-srv
#CONFIGURE_ARGS+= --disable-ntbtls
#CONFIGURE_ARGS+= --disable-scdaemon
CONFIGURE_ARGS+= --program-transform-name='s,.sh,,'

INFO=		gnupg

#CONFIGURE_SUB=	-e '/GPGKEYS_KDNS=/s/".*"/""/'

verify:	checksum
	gpg2 --verify ${DISTDIR}/${DISTNAME}${EXTRACT_SUFX}.sig

post-patch:
#	${REINPLACE_CMD} -e "s@-lpthread@${PTHREAD_LIBS}@g" ${CONFIGURE_SUB} \
#		${WRKSRC}/acinclude.m4 ${WRKSRC}/aclocal.m4 ${WRKSRC}/configure
	${REINPLACE_CMD} -e "/#include <utmp.h>/d" ${WRKSRC}/tools/symcryptrun.c

.include <bsd.port.mk>
#EOF
