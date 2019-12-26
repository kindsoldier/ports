#
# $Id$
#
PORTNAME=	db
PORTVERSION=	20150819 #20140904 
CATEGORIES=	print
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	danilo
PKGNAMEPREFIX=	foomatic-
DISTNAME=	${PKGNAMEPREFIX}${PORTNAME}-${FOOMATICVER}-${PORTVERSION}

BUILD_DEPENDS+= foomatic-ppdfile:print/foomatic-db-engine

MAINTAINER=	onborodin@gmail.com
COMMENT=	Database for integrating printer drivers with common spoolers

USES+=		gmake
GNU_CONFIGURE=	yes

FOOMATICVER=	4.0
WRKSRC=	${WRKDIR}/${PKGNAMEPREFIX}${PORTNAME}-${PORTVERSION}
NO_ARCH=	yes

.include <bsd.port.mk>
#EOF

