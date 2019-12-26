#
# $Id$
#
PORTNAME=	augeas
PORTVERSION=	1.4.0
CATEGORIES=	textproc
MASTER_SITES=	http://download.augeas.net/

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Configuration editing tool

TEST_DEPENDS+=	bash:lang/bash
TEST_DEPENDS+=	gsed:text/gsed

LIB_DEPENDS+=	libxml2.so:text/libxml2

GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

LENSESDIR=	${PREFIX}/share/augeas/lenses

FILES= ${WRKSRC}/configure

post-patch:
	${REINPLACE_CMD} -e 's:/bin/bash:/usr/bin/env bash:' ${WRKSRC}/tests/*.sh
	${REINPLACE_CMD} -e 's:sed:gsed:' ${WRKSRC}/tests/test-augtool.sh
	${REINPLACE_CMD} -e 's:/usr/local:${LOCALBASE}:' \
		${WRKSRC}/lenses/puppet.aug \
		${WRKSRC}/lenses/puppet_auth.aug \
		${WRKSRC}/lenses/puppetfileserver.aug
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' ${FILES}
	${TOUCH} ${WRKSRC}/Makefile.in ${WRKSRC}/*/Makefile.in ${WRKSRC}/*/*/Makefile.in

.include <bsd.port.pre.mk>

.if (${OSVERSION} > 110000)
#BUILD_DEPENDS+=	makeinfo:system/texinfo
LIB_DEPENDS+=	libreadline.so:devel/libreadline
CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
#CONFIGURE_ARGS+= --with-readline=${LOCALBASE}
.else
#CONFIGURE_ARGS+= --with-readline=/usr
.endif

.include <bsd.port.post.mk>
#EOF
