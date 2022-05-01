# Created by: Akinori MUSHA aka knu <knu@idaemons.org>

PORTNAME=	oniguruma
DISTVERSIONPREFIX=	v
DISTVERSION=	6.9.7.1
CATEGORIES=	devel textproc
PKGNAMEPREFIX=  lib

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Regular expressions library compatible with POSIX/GNU/Perl

USES=			autoreconf cpe pathfix libtool
USE_GITHUB=		yes
GH_ACCOUNT=		kkos
GNU_CONFIGURE=		yes
CONFIGURE_ARGS=		--disable-static --enable-posix-api=yes
PATHFIX_MAKEFILEIN=	Makefile.am
USE_LDCONFIG=		yes
INSTALL_TARGET=		install-strip
TEST_WRKSRC=		${WRKSRC}/test
TEST_TARGET=		test
CPE_VENDOR=		oniguruma_project


.include <bsd.port.mk>
