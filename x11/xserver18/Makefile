#
# $Id: Makefile 1301 2007-10-27 13:34:35Z root $
# $URL: file:///usr2/svn/ports5/x11/xxserver-xorg-server12/Makefile $
#
PORTNAME= 	xorg-server
PORTVERSION=	1.18.4
X11_CATEGORY= 	xserver
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/ #:xs
CATEGORIES=	x11
DIST_SUBDIR=	x11


MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

#BUILD_DEPENDS+=	glproto>=0:xproto/glproto
#BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+=	bigreqsproto>=0:xproto/bigreqsproto
#BUILD_DEPENDS+=	compositeproto>=0:xproto/compositeproto
#BUILD_DEPENDS+=	damageproto>=0:xproto/damageproto
#BUILD_DEPENDS+=	dmxproto>=0:xproto/dmxproto
#BUILD_DEPENDS+=	dri2proto>=0:xproto/dri2proto
#BUILD_DEPENDS+=	fixesproto>=0:xproto/fixesproto
#BUILD_DEPENDS+=	fontcacheproto>=0:xproto/fontcacheproto
#BUILD_DEPENDS+=	fontsproto>=0:xproto/fontsproto
#BUILD_DEPENDS+=	inputproto>=0:xproto/inputproto
#BUILD_DEPENDS+=	kbproto>=0:xproto/kbproto
#BUILD_DEPENDS+=	presentproto>=0:xproto/presentproto
#BUILD_DEPENDS+=	printproto>=0:xproto/printproto
#BUILD_DEPENDS+=	randrproto>=0:xproto/randrproto
#BUILD_DEPENDS+=	recordproto>=0:xproto/recordproto
#BUILD_DEPENDS+=	renderproto>=0:xproto/renderproto
#BUILD_DEPENDS+=	resourceproto>=0:xproto/resourceproto
#BUILD_DEPENDS+=	scrnsaverproto>=0:xproto/scrnsaverproto
#BUILD_DEPENDS+=	trapproto>=0:xproto/trapproto
#BUILD_DEPENDS+=	videoproto>=0:xproto/videoproto
#BUILD_DEPENDS+=	xcb-proto>=0:xproto/xcb-proto
#BUILD_DEPENDS+=	xcmiscproto>=0:xproto/xcmiscproto
#BUILD_DEPENDS+=	xextproto>=0:xproto/xextproto
#BUILD_DEPENDS+=	xf86dgaproto>=0:xproto/xf86dgaproto
#BUILD_DEPENDS+=	xf86driproto>=0:xproto/xf86driproto
#BUILD_DEPENDS+=	xf86miscproto>=0:xproto/xf86miscproto
#BUILD_DEPENDS+=	xf86vidmodeproto>=0:xproto/xf86vidmodeproto
#BUILD_DEPENDS+=	xineramaproto>=0:xproto/xineramaproto
#BUILD_DEPENDS+=	xproto>=0:xproto/xproto
#BUILD_DEPENDS+=	xtransproto>=0:xproto/xtransproto

LIB_DEPENDS+=	libdmx.so:x11/libdmx

LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libfontenc.so:x11/libfontenc
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2

LIB_DEPENDS+=	libFS.so:x11/libFS
LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libintl.so:devel/gettext

LIB_DEPENDS+=	libnettle.so:crypto/libnettle

LIB_DEPENDS+=	libpixman.so:x11/libpixman
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXaw7.so:x11/libXaw
LIB_DEPENDS+=	libxcb.so:x11/libxcb
LIB_DEPENDS+=	libXcursor.so:x11/libXcursor
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXfixes.so:x11/libXfixes
LIB_DEPENDS+=	libXfont.so:x11/libXfont
LIB_DEPENDS+=	libXfontcache.so:x11/libXfontcache
LIB_DEPENDS+=	libXft.so:x11/libXft
LIB_DEPENDS+=	libXi.so:x11/libXi
LIB_DEPENDS+=	libXinerama.so:x11/libXinerama
LIB_DEPENDS+=	libxkbfile.so:x11/libxkbfile
LIB_DEPENDS+=	libXmu.so:x11/libXmu
LIB_DEPENDS+=	libXmuu.so:x11/libXmu
LIB_DEPENDS+=	libXp.so:x11/libXp
LIB_DEPENDS+=	libXpm.so:x11/libXpm
LIB_DEPENDS+=	libXrandr.so:x11/libXrandr
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libXRes.so:x11/libXres
LIB_DEPENDS+=	libXss.so:x11/libXScrnSaver
LIB_DEPENDS+=	libXt.so:x11/libXt
LIB_DEPENDS+=	libXTrap.so:x11/libXTrap
LIB_DEPENDS+=	libXtst.so:x11/libXtst
LIB_DEPENDS+=	libXv.so:x11/libXv
LIB_DEPENDS+=	libXxf86dga.so:x11/libXxf86dga
LIB_DEPENDS+=	libXxf86misc.so:x11/libXxf86misc
LIB_DEPENDS+=	libXxf86vm.so:x11/libXxf86vm

#RUN_DEPENDS+=	xcursor-themes>=0:xmisc/xcursor-themes
#RUN_DEPENDS+=	xfont-encodings>=0:xmisc/xfont-encodings
#RUN_DEPENDS+=	xkbcomp:xutil/xkbcomp
#RUN_DEPENDS+=	xkeyboard-config>=0:xmisc/xkeyboard-config
#RUN_DEPENDS+=	xf-font-alias>=0:xfont/xf-alias

#RUN_DEPENDS+=	xf-font-cursor-misc>=0:xfont/xf-cursor-misc
#RUN_DEPENDS+=	xf-font-misc-misc>=0:xfont/xf-misc-misc

#BUILD_DEPENDS+=	${RUN_DEPENDS}

ONLY_FOR_ARCHS= amd64

USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

CPPFLAGS+=	 -I${LOCALBASE}/include -I${LOCALBASE}/include/pixman
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ENV+= SHA1_LIB="-lcrypto" 
CONFIGURE_ENV+= SHA1_CFLAGS="-I/usr/include/openssl -I/usr/include/crypto"

CONFIGURE_ARGS+= --disable-config-hal
CONFIGURE_ARGS+= --disable-devel-docs
CONFIGURE_ARGS+= --disable-docs

CONFIGURE_ARGS+= --disable-kdrive

CONFIGURE_ARGS+= --enable-install-setuid=yes
CONFIGURE_ARGS+= --enable-record=yes
CONFIGURE_ARGS+= --localstatedir=/var
CONFIGURE_ARGS+= --localstatedir=/var
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --prefix=${PREFIX}
CONFIGURE_ARGS+= --with-fontrootdir=${PREFIX}/share/fonts/X11
CONFIGURE_ARGS+= --with-xkb-path=${PREFIX}/share/X11/xkb
CONFIGURE_ARGS+= --without-dtrace
CONFIGURE_ARGS+= --without-xmlto
CONFIGURE_ARGS+= --x-includes=${PREFIX}/include
CONFIGURE_ARGS+= --x-libraries=${PREFIX}/lib

.include <bsd.port.pre.mk>

LIB_DEPENDS+=	libpciaccess.so:system/libpciaccess
LIB_DEPENDS+=	libdrm.so:system/libdrm
LIB_DEPENDS+=	libxcb-keysyms.so.1:x11/libxcb-util-keysyms


#BUILD_DEPENDS+=	libmesa>=0:graph/libmesa

CONFIGURE_ARGS+= --enable-glx
CONFIGURE_ARGS+= --enable-dri2

CONFIGURE_ARGS+= --disable-xwayland
CONFIGURE_ARGS+= --disable-dmx
CONFIGURE_ARGS+= --disable-xvfb
CONFIGURE_ARGS+= --disable-xnest
CONFIGURE_ARGS+= --disable-xephyr
CONFIGURE_ARGS+= --disable-glamor


FRD=${PREFIX}/share/fonts/X11
CONFIGURE_ARGS+= --with-fontrootdir=${FRD}
CONFIGURE_ARGS+= --with-default-font-path=${FRD}/TTF,${FRD}/OTF,${FRD}/Type1,${FRD}/cyrillic:unscaled,${FRD}/misc:unscaled,${FRD}/75dpi:unscaled,${FRD}/100dpi:unscaled,${FRD}/Speedo,${LOCALBASE}/share/ghostscript/fonts

post-patch:
	${REINPLACE_CMD} -e 's|pixman-1|pixman|g' 	${WRKSRC}/configure

	${REINPLACE_CMD} -e 's,$$(DESTDIR)$$(bindir),$$(DESTDIR)$$(sbindir),g' \
		${WRKSRC}/hw/*/Makefile.in ${WRKSRC}/hw/*/*/Makefile.in

	${REINPLACE_CMD} -e 's|config\.c|config.c devd.c|g' \
		-e 's|config\.lo|config.lo devd.lo|g' \
		${WRKSRC}/config/Makefile.in

post-configure:
	${REINPLACE_CMD} -e 's|^/\* #undef CONFIG_UDEV \*/|#define CONFIG_DEVD 1|' \
		${WRKSRC}/include/dix-config.h

post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man5 && ${LN} -sf  xorg.conf.5 xorg.conf.d.5

.include <bsd.port.post.mk>
#EOF
