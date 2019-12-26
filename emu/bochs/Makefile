# Created by: alex
# $FreeBSD: head/emulators/bochs/Makefile 498476 2019-04-09 14:04:49Z sunpoet $

PORTNAME=	bochs
PORTVERSION=	2.6.9
CATEGORIES=	emulators
MASTER_SITES=	SF

MAINTAINER=	mmokhi@FreeBSD.org
COMMENT=	IA-32 (x86) PC emulator that runs DOS, Win 95, and more

BROKEN_i386=		does not build on i386 (../cpu.h:4513:117: error: 'regparm' parameter must be between 0 and 3 inclusive)

USES=		gmake pkgconfig
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_header_alsa_asoundlib_h=no ac_cv_header_ltdl_h=no
CONFIGURE_ARGS=	--disable-docbook --disable-instrumentation

SUB_FILES=	pkg-message

CFLAGS+=	-fomit-frame-pointer -I${LOCALBASE}/include
CXXFLAGS+=	-fno-exceptions -I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

#CONFIGURE_ARGS+= --disable-a20-pin
CONFIGURE_ARGS+= --enable-cdrom
#CONFIGURE_ARGS+= --enable-cpu-level=3
#CONFIGURE_ARGS+= --disable-fpu
CONFIGURE_ARGS+= --enable-ne2000
CONFIGURE_ARGS+= --enable-pci
#CONFIGURE_ARGS+= --with-sdl2
CONFIGURE_ARGS+= --with-term
#CONFIGURE_ARGS+= --with-nogui
##CONFIGURE_ARGS+= --enable-avx
CONFIGURE_ARGS+= --enable-sb16
CONFIGURE_ARGS+= --enable-usb

post-patch:
	${REINPLACE_CMD} -e \
		'/DEFAULT_GUI=/s|x11|nogui|' \
		 ${WRKSRC}/configure
	${REINPLACE_CMD} -Ee \
		's|$$BXSHARE/|${DATADIR}/|; \
		 s|^#clock: sync=none|clock: sync=realtime|; \
		 s|^log: .+|log: /dev/null|; \
		 s|^panic: .+|panic: action=ask|; \
		 s|^parport1: .+|#&|' \
		 ${WRKSRC}/.bochsrc
	${REINPLACE_CMD} -Ee \
		's|install_share install_doc|install_share|; \
		 s|(^sharedir.+=).+|\1 ${DATADIR}|; \
		 s|(^docdir.+=).+|\1 ${DOCSDIR}|' \
		 ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -Ee \
		's|(@GUI_.+FLAGS@)$$|\1 @CPPFLAGS@|' \
		 ${WRKSRC}/bx_debug/Makefile.in
	${REINPLACE_CMD} -e \
		's|/usr/local/share/bochs|${DATADIR}|; \
		 s|/usr/local/share/doc/bochs|${DOCSDIR}|' \
		 ${WRKSRC}/doc/docbook/user/user.dbk ${WRKSRC}/doc/man/*.[15]
	${REINPLACE_CMD} -e 's|</usr/include/|<|' \
		 ${WRKSRC}/gui/svga.cc
	${REINPLACE_CMD} -Ee \
		's|(^LOCAL_CXXFLAGS.+=)|\1 @CPPFLAGS@|; \
		 s|(-lvgagl)$$|\1 @LDFLAGS@|' \
		 ${WRKSRC}/gui/Makefile.in


post-install:
.for bin in bochs bxhub bximage
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${bin}
.endfor

.include <bsd.port.mk>
