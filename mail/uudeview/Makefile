#
# $Id$
#
PORTNAME=	uudeview
PORTVERSION=	0.5.20
CATEGORIES=	converters
MASTER_SITES=	http://www.fpx.de/fp/Software/UUDeview/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Program for uu/xx/Base64/BinHex/yEnc de-/encoding

#LIB_DEPENDS=	libuu.so:converters/uulib

GNU_CONFIGURE=	yes
USES+=		gmake
CONFIGURE_ARGS+= --disable-tcl
CONFIGURE_ARGS+= --disable-minews

LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.pre.mk>

post-configure:
	${REINPLACE_CMD} -E '/INSTALL_/ s,(BIN|MAN)DIR,DESTDIR\)$$\(&,g' \
		${WRKSRC}/Makefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/uudeview
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/uuenview

.include <bsd.port.post.mk>
#EOF

