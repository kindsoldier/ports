#
# $Id$
#
PORTNAME=	gpgme
PORTVERSION=	1.20.0
CATEGORIES=	security
MASTER_SITES=	GNUPG/gpgme

MAINTAINER=	onborodin@gmail.com
COMMENT=	Library to make access to GnuPG easier

LIB_DEPENDS+=	libassuan.so:crypto/libassuan
LIB_DEPENDS+=	libgpg-error.so:crypto/libgpg-error
LIB_DEPENDS+=	libintl.so:devel/gettext

BUILD_DEPENDS+=	gpgv:crypto/gnupg
RUN_DEPENDS+=	gpgv:crypto/gnupg
BUILD_DEPENDS+=	gpg2:crypto/gnupg2
RUN_DEPENDS+=	gpg2:crypto/gnupg2


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

CONFIGURE_ARGS=	--includedir=${PREFIX}/include/gpgme
INSTALL_TARGET=	install-strip

CPE_VENDOR=	gnu

INFO=		gpgme

.include <bsd.port.options.mk>

#.if !exists(${LOCALBASE}/bin/gpgsm)
CONFIGURE_ARGS+=	--disable-gpgsm-test
CONFIGURE_ARGS+= --disable-gpg-test 
#.endif

post-patch:
	${REINPLACE_CMD} -e 's|-lpthread|${PTHREAD_LIBS}|g' \
					${WRKSRC}/${CONFIGURE_SCRIPT} \
					${WRKSRC}/src/Makefile.in \
					${WRKSRC}/src/gpgme-config.in \
					${WRKSRC}/tests/gpg/Makefile.in
	${REINPLACE_CMD} -e 's|^clfilesdir.*|clfilesdir=$$\(libdir\)/common-lisp/gpgme|g' \
					${WRKSRC}/lang/cl/Makefile.in


.include <bsd.port.mk>
#EOF
