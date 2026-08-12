#
# $Id: Makefile 2371 2009-09-08 07:20:30Z root $
# $URL: file:///usr2/svn/ports5/multimedia-tools/flac/Makefile $
#
PORTNAME=	flac
PORTVERSION=	1.3.0
CATEGORIES=	audio
MASTER_SITES=	http://downloads.xiph.org/releases/flac/
MASTER_SITES+=	${MASTER_SITE_SOURCEFORGE}
MASTER_SITE_SUBDIR=	${PORTNAME}
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Free lossless audio codec

LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libogg.so:media/libogg
#BUILD_DEPEND+= nasm:devel/nasm

GNU_CONFIGURE=  yes
USES+=		gmake
USES+=		tar:xz
CONFIGURE_TARGET= ${ARCH}-ziggi-freebsd${OSREL}
CONFIGURE_ARGS+= --enable-sse
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-ogg=${LOCALBASE}
CPPFLAGS+=	-I${WRKSRC}/include
CONFIGURE_ENV+=	ac_cv_path_XMMS_CONFIG=no
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
#CONFIGURE_ARGS+= --program-transform-name='s/flac/flac12/'
#CONFIGURE_ARGS+= --disable-shared

CONFIGURE_ARGS+= --disable-silent-rules
CONFIGURE_ARGS+= --disable-thorough-tests
CONFIGURE_ARGS+= --disable-xmms-plugin
CONFIGURE_ARGS+= --enable-static



INSTALLS_SHLIB= yes

PLIST_FILES+=	man/man1/flac.1.gz
PLIST_FILES+=	man/man1/metaflac.1.gz

post-patch:
	${REINPLACE_CMD} -e '/^SUBDIRS/s|doc||' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's|install-data-am: install-docDATA|install-data-am:|' ${WRKSRC}/doc/Makefile.in

	${REINPLACE_CMD} -e \
	    's|install-data-am: install-data-local install-docDATA|install-data-am:|' \
	    ${WRKSRC}/doc/html/Makefile.in

	${REINPLACE_CMD} -e \
	    's|install-data-am: install-docDATA|install-data-am:|' \
	    ${WRKSRC}/doc/html/ru/Makefile.in


.include <bsd.port.mk>
#EOF

