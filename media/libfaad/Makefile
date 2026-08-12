#
# $Id$
#
PORTNAME=	faad2
PORTVERSION=	2.7
CATEGORIES=	audio
MASTER_SITES=	SF/faac/${PORTNAME}-src/${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	MPEG-2 and MPEG-4 AAC audio decoder

GNU_CONFIGURE=	yes
USES+=		gmake
CFLAGS+=	-I${LOCALBASE}/include ${PTHREAD_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --without-mpeg4ip

INSTALLS_SHLIB=	yes

PLIST_FILES+=	man/man1/faad.1.gz

post-extract:
	cd ${WRKSRC}/frontend && ${CP} faad.man faad.1

post-patch:
	${REINPLACE_CMD} -e 's|faad.man|faad.1|g' \
		${WRKSRC}/frontend/Makefile.am
	${REINPLACE_CMD} -e 's|^AM_CFLAGS|AM_CPPFLAGS|g ; \
		 s|-iquote |-I|g' ${WRKSRC}/libfaad/Makefile.am
	${REINPLACE_CMD} -e 's|= -DUSE_|= -fPIC -DPIC -DUSE_|g' \
		${WRKSRC}/common/mp4ff/Makefile.am

_pre-configure:
	cd ${WRKSRC} && ${ACLOCAL} -I . -I ${LOCALBASE}/share/aclocal
	cd ${WRKSRC} && ${AUTOHEADER} 
	cd ${WRKSRC} && ${LIBTOOLIZE} --copy --force --automake
	cd ${WRKSRC} && ${AUTOMAKE} --add-missing
	cd ${WRKSRC} && ${AUTOCONF}


.include <bsd.port.mk>
#EOF
