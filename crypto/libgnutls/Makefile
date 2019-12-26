#
#
#
PORTNAME=	gnutls
PORTVERSION=	3.6.11.1
CATEGORIES=	security net
MASTER_SITES=	GNUPG/gnutls/v${PORTVERSION:R:R}

#MASTER_SITES=	\
#	ftp://ftp.gnutls.org/gcrypt/gnutls/v${PORTVERSION:C/.[0-9]+$//}/ \
#	http://www.ring.gr.jp/pub/net/gnupg/gnutls/v${PORTVERSION:C/.[0-9]+$//}/

#MASTER_SITES+=	http://josefsson.org/gnutls/releases/
#MASTER_SITES+=	ftp://ftp.gnutls.org/pub/gnutls/
#MASTER_SITES+=	http://ftp.gnu.org/gnu/gnutls/
#MASTER_SITES+=	${MASTER_SITE_GNUPG} 
#MASTER_SITES+=	http://www.mirrors.wiretapped.net/security/network-security/gnutls/ 
#MASTER_SITES+=	ftp://ftp.mirrors.wiretapped.net/security/network-security/gnutls/
#MASTER_SITE_SUBDIR=	alpha/gnutls
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	GNU Transport Layer Security library

LIB_DEPENDS+=	libhogweed.so:crypto/libnettle
LIB_DEPENDS+=	libnettle.so:crypto/libnettle

LIB_DEPENDS+=	libp11-kit.so:crypto/libp11-kit/
LIB_DEPENDS+=	libtasn1.so:crypto/libtasn1
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libgmp.so:math/libgmp

LIB_DEPENDS+=	libidn.so:net/libidn
LIB_DEPENDS+=	libiconv.so:text/libiconv

GNU_CONFIGURE=	yes
USES+=		gmake tar:xz
INSTALLS_SHLIB=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lintl -liconv
#CONFIGURE_ENV+=	MAKEINFO="${LOCALBASE}/bin/makeinfo"
CONFIGURE_TARGET= --build=${MACHINE_ARCH}-pc-freebsd${OSREL}
CONFIGURE_ARGS+= --infodir="${PREFIX}/info" 
CONFIGURE_ARGS+= --mandir="${PREFIX}/man/"
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libz-prefix=/usr
CONFIGURE_ARGS+= --disable-guile
CONFIGURE_ARGS+= --disable-libdane
CONFIGURE_ARGS+= --enable-static
CONFIGURE_ARGS+= --with-included-unistring

CONFIGURE_ARGS+= AUTOGEN=false 
CONFIGURE_ARGS+= ac_cv_type_max_align_t=yes
CONFIGURE_ARGS+= --enable-local-libopts


CONFIGURE_ARGS+= --with-default-trust-store-file=${LOCALBASE}/etc/ca-bundle.crt
#CONFIGURE_ARGS+= --with-included-libtasn1
CONFIGURE_ARGS+= --with-libregex=${LOCALBASE}


post-patch:
	${REINPLACE_CMD} -e 's,p11-kit-1,p11-kit,g' ${WRKSRC}/configure

INFO+= gnutls


.include <bsd.port.mk>
#EOF

