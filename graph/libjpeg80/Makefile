#
# $Id: Makefile 1465 2007-11-19 23:38:41Z root $
#
PORTNAME=	jpeg
PORTVERSION=	8.7
CATEGORIES=	graphics devel
MASTER_SITES=	http://www.ijg.org/files/
DISTNAME=	${PORTNAME}src.v${PORTVERSION:R}d
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	IJG's jpeg compression utilities

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION:R}d
GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --enable-static
INSTALLS_SHLIB=	yes

ADDITIONAL_HEADER=	jinclude.h jpegint.h
J_MAXMEM=128

CONFIGURE_ARGS+=	--enable-maxmem=${J_MAXMEM}


post-install:
.for header in ${ADDITIONAL_HEADER}
	${INSTALL_DATA} ${WRKSRC}/${header} ${STAGEDIR}${PREFIX}/include/
.endfor



.include <bsd.port.mk>
#EOF
