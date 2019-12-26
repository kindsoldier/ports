#
# $Id: Makefile 2636 2009-09-30 12:09:37Z root $
#
PORTNAME=	fribidi
PORTVERSION=	0.19.7
CATEGORIES=	converters
#MASTER_SITES=	http://fribidi.org/download/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	A Free Implementation of the Unicode Bidirectional Algorithm

GNU_CONFIGURE=	yes
USES+=		gmake tar:bz2
INSTALLS_SHLIB=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS=	--enable-static --without-glib
INSTALL_TARGET=	install-strip


post-patch:
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${WRKSRC}/configure

.include <bsd.port.mk>
#EOF
