# Created by: vanhu
# $FreeBSD: head/security/ipsec-tools/Makefile 505537 2019-07-01 04:49:33Z eugen $

PORTNAME=	ipsec-tools
PORTVERSION=	0.8.2
CATEGORIES=	security
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	KAME racoon IKE daemon, ipsec-tools version

BUILD_DEPENDS+= automake:devel/automake
BUILD_DEPENDS+= autoconf:devel/autoconf
BUILD_DEPENDS+= libtoolize:devel/libtool


USES+= tar:bzip2 ssl gmake

GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --enable-adminport
##CONFIGURE_ARGS+= --with-flex
CONFIGURE_ARGS+= --with-openssl=/usr
CONFIGURE_ARGS+= --with-readline
CONFIGURE_ARGS+= --without-libldap
CONFIGURE_ARGS+= --without-libpam
CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --disable-stats
CONFIGURE_ARGS+= --enable-rc5
CONFIGURE_ARGS+= --enable-idea

CONFIGURE_ARGS+= --enable-dpd
CONFIGURE_ARGS+= --enable-frag
CONFIGURE_ARGS+= --disable-hybrid
CONFIGURE_ARGS+= --enable-natt

CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/etc/racoon
CONFIGURE_ARGS+= --localstatedir=/var/db
CONFIGURE_ARGS+= --with-pkgversion=freebsd-${PORTVERSION}

INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

USE_RC_SUBR=	racoon

STATEDIR=	/var/run/racoon
SUB_LIST+=	STATEDIR=${STATEDIR}

PKGINSTALL=	${WRKDIR}/pkg-install
SUB_FILES+= 	pkg-install

.include <bsd.port.pre.mk>


.if ${OSVERSION} >= 1200085
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-aclocal.m4
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-ipsec-tools
PLIST_FILES+=	include/racoon/openssl_compat.h
.endif

post-patch:
	${REINPLACE_CMD} -e 's,Werror,Wall,' ${WRKSRC}/configure.ac

LIBTOOLIZE?= 	libtoolize
ACLOCAL?=	aclocal
AUTOCONF?=	autoconf
AUTOMAKE?=	automake

#USES+= autoreconf:build

pre-configure:
	cd ${WRKSRC} && ${TOUCH} ./AUTHORS
	cd ${WRKSRC} && ${LIBTOOLIZE} --force --copy
	cd ${WRKSRC} && ${ACLOCAL} -I .
#	cd ${WRKSRC} && ${CAT} acracoon.m4 >> aclocal.m4
	cd ${WRKSRC} && ${AUTOCONF} -I .
	cd ${WRKSRC} && ${AUTOMAKE} --add --copy

.include <bsd.port.post.mk>
