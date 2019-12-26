# Created by: ijliao
# $FreeBSD: head/mail/libetpan/Makefile 375423 2014-12-24 09:26:56Z pawel $

PORTNAME=	libetpan
PORTVERSION=	1.9.4
CATEGORIES=	mail

MAINTAINER=	onborodin@gmail.com
COMMENT=	Mail framework for C language

LIB_DEPENDS+=	libgcrypt.so:crypto/libgcrypt
LIB_DEPENDS+=	libgnutls.so:crypto/libgnutls
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=   libcurl.so:net/libcurl
LIB_DEPENDS+=   libsasl2.so:crypto/libcyrus-sasl2
LIB_DEPENDS+=   libgpg-error.so:crypto/libgpg-error
LIB_DEPENDS+=   libexpat.so:text/libexpat
LIB_DEPENDS+=   libintl.so:devel/gettext

USE_GITHUB=	yes
GH_ACCOUNT=	dinhviethoa

USES+=		gmake autoreconf compiler:c++11-lang iconv
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -pthread

CONFIGURE_ARGS=	--without-openssl --with-gnutls --enable-ipv6

.include <bsd.port.mk>
#EOF
