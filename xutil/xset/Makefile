#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-xset/Makefile $
#
PORTNAME= 	xset
PORTVERSION=	1.2.3
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xmuu.pc:x11/libXmu
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/x11.pc:x11/libX11
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xext.pc:x11/libXext
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/x11.pc:x11/libX11
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xxf86misc.pc:x11/libXxf86misc
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xfontcache.pc:x11/libXfontcache
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xp.pc:x11/libXp
BUILD_DEPENDS+= ${RUN_DEPENDS}
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto


#BUILD_DEPENDS+=	${PREFIX}/lib/pkgconfig/glproto.pc:xproto/glproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/bigreqsproto.pc:xproto/bigreqsproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/compositeproto.pc:xproto/compositeproto
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/damageproto.pc:xproto/damageproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/dmxproto.pc:xproto/dmxproto
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/dri2proto.pc:xproto/dri2proto
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/dri3proto.pc:xproto/dri3proto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/fixesproto.pc:xproto/fixesproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/fontcacheproto.pc:xproto/fontcacheproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/fontsproto.pc:xproto/fontsproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/inputproto.pc:xproto/inputproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/kbproto.pc:xproto/kbproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/presentproto.pc:xproto/presentproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/printproto.pc:xproto/printproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/randrproto.pc:xproto/randrproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/recordproto.pc:xproto/recordproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/renderproto.pc:xproto/renderproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/resourceproto.pc:xproto/resourceproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/scrnsaverproto.pc:xproto/scrnsaverproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/trapproto.pc:xproto/trapproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/videoproto.pc:xproto/videoproto
#BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xcb-proto.pc:x11/xcb-proto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xcmiscproto.pc:xproto/xcmiscproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xextproto.pc:xproto/xextproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xf86dgaproto.pc:xproto/xf86dgaproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xf86driproto.pc:xproto/xf86driproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xf86miscproto.pc:xproto/xf86miscproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xf86vidmodeproto.pc:xproto/xf86vidmodeproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xineramaproto.pc:xproto/xineramaproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/fixesproto.pc:xproto/fixesproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/damageproto.pc:xproto/damageproto

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/pthread-stubs.pc:x11/libpthread-stubs


LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXfontcache.so:x11/libXfontcache
LIB_DEPENDS+=	libXmuu.so:x11/libXmu
LIB_DEPENDS+=	libXxf86misc.so:x11/libXxf86misc


USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES+= bin/xset
PLIST_FILES+=	man/man1/xset.1.gz

.include <bsd.port.mk>
#EOF
#LIBS+= -lX11 -lXau -lXdmcp -lXext -lXfontcache -lXmuu -lXxf86misc 
