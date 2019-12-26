# Created by: Nikos Ntarmos <ntarmos@ceid.upatras.gr>
# $FreeBSD: head/devel/libconfig/Makefile 362605 2014-07-22 23:25:54Z amdmi3 $

PORTNAME=	libconfig
PORTVERSION=	1.4.10
CATEGORIES=	devel
MASTER_SITES=	https://www.hyperrealm.com/packages/

MAINTAINER=	ntarmos@ceid.upatras.gr
COMMENT=	Simple library for manipulating structured configuration files

CONFLICTS=	wand-libconfig-[0-9]*

USES=		gmake pathfix
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS+=	--prefix=${PREFIX} --infodir=${PREFIX}/${INFO_PATH}
INFO=		libconfig

post-install:
	cd ${STAGEDIR}${PREFIX}/include/ && ${LN} -s libconfig.h++ libconfig.hpp

.include <bsd.port.mk>
#EOF
