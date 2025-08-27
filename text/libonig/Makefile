PORTNAME=	onig
DISTNAME=	oniguruma
DISTVERSION=	6.9.10
CATEGORIES=	devel textproc
MASTER_SITES=	https://github.com/kkos/${PORTNAME}/releases/download/v${DISTVERSION}/
DISTNAME=	onig-${DISTVERSION}
PKGNAMEPREFIX=	lib

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Regular expressions library compatible with POSIX/GNU/Perl
WWW=		https://github.com/kkos/oniguruma

USES=		gmake pathfix
CPE_VENDOR=	oniguruma_project
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --enable-posix-api --enable-shared

CMAKE_OFF=	BUILD_TEST
CMAKE_ARGS+=	-DBUILD_SHARED_LIBS=ON -DENABLE_POSIX_API=ON -DBUILD_TEST=OFF

.include <bsd.port.mk>
