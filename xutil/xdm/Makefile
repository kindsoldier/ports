#
# $Id: Makefile 1301 2007-10-27 13:34:35Z root $
# $URL: file:///usr2/svn/ports5/x11/xorg-xdm/Makefile $
#
PORTNAME= 	xdm
PORTVERSION=	1.1.11
X11_CATEGORY= 	app
MASTER_SITES+=	ftp://ftp.x.org/pub/individual/${X11_CATEGORY}/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX= xutil-

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xt.pc:x11/libXt
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xft.pc:x11/libXft
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xext.pc:x11/libXext
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xmu.pc:x11/libXmu
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/x11.pc:x11/libX11
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xau.pc:x11/libXau
BUILD_DEPENDS+= ${RUN_DEPENDS}
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xextproto.pc:xproto/xextproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/renderproto.pc:xproto/renderproto

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/kbproto.pc:xproto/kbproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/pthread-stubs.pc:x11/libpthread-stubs



LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXaw7.so:x11/libXaw
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXft.so:x11/libXft
LIB_DEPENDS+=	libXmu.so:x11/libXmu
LIB_DEPENDS+=	libXpm.so:x11/libXpm
LIB_DEPENDS+=	libXrender.so:x11/libXrender
LIB_DEPENDS+=	libXt.so:x11/libXt
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2


USES+=		tar:bzip2
USES+=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

#CONFIGURE_ARGS+= --with-xrdb=${PREFIX}/bin/xrdb


CONFIGURE_ARGS+= --enable-unix-transport
CONFIGURE_ARGS+= --enable-tcp-transport
#CONFIGURE_ARGS+= --enable-local-transport
CONFIGURE_ARGS+= --enable-ipv6
#CONFIGURE_ARGS+= --disable-secure-rpc
#CONFIGURE_ARGS+= --enable-xdm-auth
#CONFIGURE_ARGS+= --enable-xpm-logos
#CONFIGURE_ARGS+= --enable-dynamic-greeter

CONFIGURE_ARGS+= --without-pam
#CONFIGURE_ARGS+= --without-xft
CONFIGURE_ARGS+= --with-authdir=/var/run/xdm

#CONFIGURE_ARGS+= --with-utmp-file=/var/run/utmp
#CONFIGURE_ARGS+= --with-wtmp-file=/var/log/wtmp

CONFIGURE_ARGS+= --with-xdmconfigdir=${PREFIX}/lib/X11/xdm
CONFIGURE_ARGS+= --with-xdmscriptdir=${PREFIX}/lib/X11/xdm
#CONFIGURE_ARGS+= --bindir=${PREFIX}/sbin

CONFIGURE_ENV+= DEF_SERVER="${LOCALBASE}/sbin/X"

PLIST_FILES+=	man/man1/xdm.1.gz

post-patch:
##	${REINPLACE_CMD} -e 's,$$(DESTDIR)$$(bindir),$$(DESTDIR)$$(sbindir),g' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e "s|XDMCONFIGDIR/|${PREFIX}/lib/X11/xdm/|" \
	    -e "s|XDMSCRIPTDIR/|${PREFIX}/lib/X11/xdm/|" \
		${WRKSRC}/config/xdm-config.cpp \
		${WRKSRC}/config/Xstartup.cpp \
		${WRKSRC}/config/Xreset.cpp
	${REINPLACE_CMD} 's/test.*-traditional.*;/true;/' \
		${WRKSRC}/configure

#post-install:
#	${MKDIR} ${STAGEDIR}/var/lib/xdm/authdir
#	${LN} -sf /var/lib/xdm/authdir ${STAGEDIR}${PREFIX}/lib/X11/xdm/authdir

.include <bsd.port.mk>
#EOF
