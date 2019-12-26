# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: head/textproc/sassc/Makefile 434374 2017-02-18 16:14:45Z nivit $

PORTNAME=	sassc
PORTVERSION=	3.4.2
CATEGORIES=	textproc

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Wrapper around libsass

LIB_DEPENDS=	libsass.so:devel/libsass

USE_GITHUB=	yes
GH_ACCOUNT=	sass

USES=		autoreconf compiler:c++11-lib gmake libtool localbase
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/sassc

post-patch:
	${ECHO_CMD} "${ECHO_CMD} \"${PORTVERSION}\"" > ${WRKSRC}/version.sh

.include <bsd.port.mk>
#EOF
