#
# $Id$
#
PORTNAME=	opus
PORTVERSION=	1.1
CATEGORIES=	audio
MASTER_SITES=	http://downloads.xiph.org/releases/opus/ ${MASTER_SITE_MOZILLA_EXTENDED}
MASTER_SITE_SUBDIR=	opus
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	IETF audio codec

USES+=		gmake
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --enable-custom-modes
CONFIGURE_ARGS+= --disable-maintainer-mode
CONFIGURE_ARGS+= --disable-doc
CONFIGURE_ARGS+= --disable-extra-programs

#CONFIGURE_ARGS+= --disable-float-api
CONFIGURE_ARGS+= --disable-asm


regression-test: build
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} check

.include <bsd.port.options.mk>

.if ${ARCH} == "amd64"
CONFIGURE_ARGS+=--enable-intrinsics
.endif

.if ${ARCH} == "arm"
CONFIGURE_ARGS+=--enable-fixed-point
.endif


.include <bsd.port.mk>
#EOF

