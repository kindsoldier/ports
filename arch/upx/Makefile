# Created by: Max Khon <fjoe@FreeBSD.org>
# $FreeBSD: head/archivers/upx/Makefile 487412 2018-12-14 08:44:29Z koobs $

PORTNAME=	upx
DISTVERSIONPREFIX=	v
DISTVERSION=	3.95
CATEGORIES=	archivers

MAINTAINER=	fjoe@FreeBSD.org
COMMENT=	Ultimate Packer for eXecutables

LIB_DEPENDS=	libucl.so:arch/ucl

USES=		gmake perl5
USE_GITHUB=	yes
USE_PERL5=	build # provides pod2man/pod2html/pod2text required for docs

GH_TUPLE=	upx:upx-lzma-sdk:${DISTVERSIONPREFIX}${DISTVERSION}:lzma/src/lzma-sdk

MAKE_ENV=	UPX_UCLDIR=${LOCALBASE} target=freebsd


do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/upx.out ${STAGEDIR}${PREFIX}/bin/upx
	${INSTALL_MAN} ${WRKSRC}/doc/upx.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
#EOF
