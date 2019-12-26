# Created by: Thierry Thomas <thierry@pompo.net>
# $FreeBSD: head/www/tidy-html5/Makefile 454920 2017-11-26 20:44:33Z thierry $

PORTNAME=	tidy-html5
PORTVERSION=	5.6.0
CATEGORIES=	www

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Tidy tidies HTML and XML documents

USE_GITHUB=	yes
GH_ACCOUNT=	htacg

USES=		cmake
USE_LDCONFIG=	yes

CMAKE_ARGS+=	-DBUILD_SHARED_LIB:BOOL=ON
CMAKE_ARGS+=	-DTIDY_CONSOLE_SHARED:BOOL=ON

PLIST_SUB=	VER=${PORTVERSION}

post-path:
	cd ${WRKSRC} && ${CP} tidy.pc.cmake.in  tidy5.pc.cmake.in

#post-install:
#	# To avoid conflict ATM - to be removed later
#	${MV} ${STAGEDIR}${PREFIX}/bin/tidy ${STAGEDIR}${PREFIX}/bin/tidy5
#	${MV} ${STAGEDIR}${PREFIX}/lib/libtidy.so ${STAGEDIR}${PREFIX}/lib/libtidy5.so
#	${MV} ${STAGEDIR}${MANPREFIX}/man/man1/tidy.1 ${STAGEDIR}${MANPREFIX}/man/man1/tidy5.1

.include <bsd.port.mk>
