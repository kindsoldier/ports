#
# $Id: Makefile 1920 2008-11-03 11:51:48Z ziggi $
#
PORTNAME=	ijs
PORTVERSION=	0.35
CATEGORIES=	print
MASTER_SITES=	http://www.openprinting.org/download/ijs/download/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	C library that supports plugin printer driver for Ghostscript

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --enable-shared

.include <bsd.port.mk>
#EOF
