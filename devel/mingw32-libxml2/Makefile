#
# $Id: Makefile 1787 2008-09-17 18:27:01Z root $
# $URL$
#
PORTNAME=	libxml2
PORTVERSION= 	2.7.8
CATEGORIES=	textproc gnome devel
MASTER_SITES+=	ftp://xmlsoft.org/libxml2/
MASTER_SITES+=	${MASTER_SITE_GNOME}
MASTER_SITE_SUBDIR=	sources/libxml2/${PORTVERSION:R}/
PKGNAMEPREFIX=	${TARGET}-

MAINTAINER=	onborodin@gmail.com
COMMENT=	Xml parser library for GNOME

BUILD_DEPENDS+=	${TARGET}-gcc>0:devel/${TARGET}-gcc 
BUILD_DEPENDS+=	${TARGET}-bin-msvcrt>0:devel/${TARGET}-bin-msvcrt

TARGET= mingw32

USES+=		gmake
CONFIGURE_ARGS+= --host=${TARGET}
CONFIGURE_ARGS+= --disable-shared
CONFIGURE_ARGS+= --without-python

HAS_CONFIGURE=	yes
USES+=		gmake

do-configure:
	cd ${WRKSRC} && ./configure --prefix=${LOCALBASE}/${TARGET} ${CONFIGURE_ARGS}


.include <bsd.port.mk>
#EOF
