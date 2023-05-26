#
# $Id$
#
PORTNAME=	dosbox
DISTVERSION=	0.74-3
CATEGORIES=	emulators
#MASTER_SITES=	SF
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${DISTVERSION}

MAINTAINER=	knyght@gmail.com
COMMENT=	Emulator of a PC with DOS

LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libSDL.so:devel/libSDL
LIB_DEPENDS+=	libSDL_net.so:net/libSDL_net
LIB_DEPENDS+=	libSDL_sound.so:media/libSDL_sound

GNU_CONFIGURE=	yes
USE_GMAKE+=	yes

PKGMESSAGE=	${WRKDIR}/pkg-message

CONFIGURE_ARGS+=	--enable-core-inline

DESKTOP_ENTRIES="DOSBox" "${COMMENT}" \
		"${PREFIX}/share/pixmaps/dosbox.ico" "dosbox" \
		"System;Emulator;" "true"

post-patch:
	${REINPLACE_CMD} -e 's#\/usr\/share\/doc\/dosbox#${DOCSDIR}#g' \
		${WRKSRC}/docs/dosbox.1

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/dosbox ${STAGEDIR}${PREFIX}/bin/dosbox
	${INSTALL_DATA} ${WRKSRC}/src/dosbox.ico ${STAGEDIR}${PREFIX}/share/pixmaps/
	${INSTALL_MAN} ${WRKSRC}/docs/dosbox.1 ${STAGEDIR}${MAN1PREFIX}/man/man1/

.include <bsd.port.mk>
#EOF
