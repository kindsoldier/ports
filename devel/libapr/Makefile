#
# $Id: Makefile 2316 2009-09-02 08:41:08Z root $
#
PORTNAME=	apr
PORTVERSION=	1.6.3
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_APACHE}
MASTER_SITE_SUBDIR=	apr
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	The Apache Group's Portability Library

USES+=		gmake
INSTALLS_SHLIB=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --prefix=${PREFIX}
CONFIGURE_ARGS+= --enable-threads

.include <bsd.port.mk>
#EOF
