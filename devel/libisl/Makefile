PORTNAME=	isl
PORTVERSION=	0.25
CATEGORIES=	devel math
MASTER_SITES=	SOURCEFORGE/libisl
PKGNAMEPREFIX=  lib

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Integer Set Library
WWW=		https://libisl.sourceforge.io/

LIB_DEPENDS=	libgmp.so:math/libgmp

USES=		gmake pkgconfig tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

CONFIGURE_ARGS=	--with-gmp-prefix=${LOCALBASE}

INSTALL_TARGET=	install-strip
TEST_TARGET=	check


.include <bsd.port.mk>
