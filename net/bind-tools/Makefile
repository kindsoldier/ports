#
# $Id$
#
PORTNAME=	bind
ISCVERSION=	9.14.4 #9.13.5
PORTVERSION=	${ISCVERSION:S/-P/./}
CATEGORIES=	dns net
MASTER_SITES=	${MASTER_SITE_ISC}
MASTER_SITE_SUBDIR=	bind9/${ISCVERSION}
DISTNAME=	bind-${ISCVERSION}
PKGNAMESUFFIX=	-tools


MAINTAINER=	onborodin@gmail.com
COMMENT=	BIND DNS suite with updated DNSSEC and DNS64


GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --includedir=${PREFIX}/include/bind
CONFIGURE_ARGS+= --localstatedir=/var
CONFIGURE_ARGS+= --disable-linux-caps
CONFIGURE_ARGS+= --disable-symtable
CONFIGURE_ARGS+= --with-openssl=/usr
CONFIGURE_ARGS+= --without-libxml2
CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --without-python

CONFIGURE_ARGS+= --with-libidn2=${LOCALBASE}

LIB_DEPENDS+= libidn2.so:net/libidn2


.include <bsd.port.mk>
#EOF
