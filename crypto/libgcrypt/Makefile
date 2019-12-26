#
# $Id: Makefile 2356 2009-09-06 07:08:12Z root $
# $URL: file:///usr2/svn/ports5/crypto/libgcrypt/Makefile $
#
PORTNAME=	libgcrypt
PORTVERSION=	1.6.1
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_GNUPG}
MASTER_SITE_SUBDIR=	libgcrypt

MAINTAINER=	onborodin@gmail.com
COMMENT=	General purpose crypto library based on code used in GnuPG

LIB_DEPENDS+=	libgpg-error.so:crypto/libgpg-error
LIB_DEPENDS+=	libintl.so:devel/gettext

GNU_CONFIGURE=	yes
USES+=		gmake tar:bzip2
CONFIGURE_TARGET= --build=${ARCH}-ziggi-freebsd${OSREL}
CONFIGURE_ARGS+= --infodir=${PREFIX}/info
CONFIGURE_ARGS+= --disable-asm
CONFIGURE_ARGS+= --enable-static
CONFIGURE_ARGS+= --disable-optimization
CONFIGURE_ARGS+= --disable-drng-support
#CONFIGURE_ARGS+= --without-gpg-error-prefix
CONFIGURE_ARGS+= --with-gpg-error-prefix=${LOCALBASE}
INSTALLS_SHLIB=	yes

INFO=	gcrypt

pre-configure:
	${RM} -f ${WRKSRC}/doc/gcrypt.info*

.include <bsd.port.pre.mk>

.if ${ARCH} == "amd64"
ARCH=		x86_64
.endif

.if (${OSVERSION} > 1100000)
BUILD_DEPENDS+= makeinfo:system/texinfo
.endif

.include <bsd.port.post.mk>
#EOF
