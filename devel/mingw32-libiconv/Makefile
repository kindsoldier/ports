#
# $Id: Makefile 2729 2009-12-14 09:19:08Z root $
#
PORTNAME=	libiconv
PORTVERSION=	1.14
CATEGORIES=	converters devel 
MASTER_SITES+=	GNU 
DIST_SUBDIR=	gnu
PKGNAMEPREFIX=	${TARGET}-

COMMENT=	A character set conversion library
MAINTAINER=	onborodin@gmail.com

BUILD_DEPENDS+=	${TARGET}-gcc>0:devel/${TARGET}-gcc 
BUILD_DEPENDS+=	${TARGET}-bin-msvcrt>0:devel/${TARGET}-bin-msvcrt

TARGET= mingw32
CONFIGURE_ARGS+= --host=${TARGET}

USES+=		gmake
HAS_CONFIGURE=	yes
USE_GMAKE=	yes
CONFIGURE_ARGS+= --without-libintl-prefix
CONFIGURE_ARGS+= --without-libintl
CONFIGURE_ARGS+= --disable-shared

do-configure:
	cd ${WRKSRC} && \
	    ./configure --prefix=${LOCALBASE}/${TARGET} ${CONFIGURE_ARGS}

.include <bsd.port.mk>
#EOF
