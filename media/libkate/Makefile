#
# $Id$
#
PORTNAME=	libkate
PORTVERSION=	0.4.1
CATEGORIES=	multimedia
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Codec for karaoke and text encapsulation for Ogg

LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libogg.so:media/libogg

GNU_CONFIGURE=	yes
USES+=		gmake
USE_LDCONFIG=	yes
CONFIGURE_ARGS+= --disable-doc
CONFIGURE_ARGS+= --program-transform-name=''
CFLAGS+= -I${LOCALBASE}/include

PLIST_FILES+=	man/man1/kateenc.1.gz
PLIST_FILES+=	man/man1/katedec.1.gz
PLIST_FILES+=	man/man1/katalyzer.1.gz


MAN1+=	kateenc.1
MAN1+=	katedec.1
MAN1+=	katalyzer.1

post-patch:
	${REINPLACE_CMD} -e '/@SUBDIRS/s|KateDJ| .|' ${WRKSRC}/tools/Makefile.in


post-install:
.for f in ${MAN1}
	${INSTALL_MAN}  ${WRKSRC}/doc/man/${f}  ${STAGEDIR}${PREFIX}/man/man1
.endfor

.include <bsd.port.mk>
#EOF
