# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: head/net/remmina/Makefile 430947 2017-01-09 13:16:49Z amdmi3 $

PORTNAME=	remmina
DISTVERSIONPREFIX=v
DISTVERSION=	1.2.31.4

CATEGORIES=	net gnome
#PORTVERSION=    ${DISTVERSION}

DISTNAME=	Remmina-Remmina-65d552c9becc957cae124ab5c26562cf22c052b9_GL0

MAINTAINER=	woodsb02@FreeBSD.org
COMMENT=	GTK+ Remote Desktop Client

#USE_GITHUB=	yes
#GH_ACCOUNT=	FreeRDP
#GH_PROJECT=	Remmina

#USE_GITLAB=	yes
#GL_ACCOUNT=	Remmina
#GL_PROJECT=	Remmina
#GL_COMMIT=	65d552c9becc957cae124ab5c26562cf22c052b9

WRKSRC= ${WRKDIR}/Remmina-65d552c9becc957cae124ab5c26562cf22c052b9-65d552c9becc957cae124ab5c26562cf22c052b9



LIB_DEPENDS+= libatk.so:gnome/libatk
LIB_DEPENDS+= libavcodec.so:media/ffmpeg
LIB_DEPENDS+= libavutil.so:media/ffmpeg
LIB_DEPENDS+= libcairo-gobject.so:gnome/libcairo
LIB_DEPENDS+= libcairo.so:gnome/libcairo

LIB_DEPENDS+= libdbus-glib.so:xfce/libdbus-glib
LIB_DEPENDS+= libdbus.so:gnome/dbus
LIB_DEPENDS+= libepoxy.so:graph/libepoxy

LIB_DEPENDS+= libexpat.so:text/libexpat
LIB_DEPENDS+= libfontconfig.so:x11/libfontconfig

LIB_DEPENDS+= libfreerdp2.so:xapp/libfreerdp2
LIB_DEPENDS+= libgcrypt.so:crypto/libgcrypt

LIB_DEPENDS+= libgraphite2.so:graph/libgraphite2

LIB_DEPENDS+= libpango.so:gnome/libpango

LIB_DEPENDS+= libssh.so:net/libssh
LIB_DEPENDS+= libssh2.so:net/libssh2

LIB_DEPENDS+= libswresample.so:media/ffmpeg

LIB_DEPENDS+= libX11.so:x11/libX11

LIB_DEPENDS+= libgtk3.so:gnome/libgtk3


USES=		cmake pathfix pkgconfig
PATHFIX_WRKSRC=		${WRKSRC}/remmina
CMAKE_ARGS=	--build=build

CMAKE_ARGS+= -DWITH_TRANSLATIONS=OFF

CMAKE_ARGS+= -DWITH_APPINDICATOR:BOOL=false
CMAKE_ARGS+= -DWITH_AVAHI=OFF
CMAKE_ARGS+= -DWITH_GCRYPT=ON
CMAKE_ARGS+= -DWITH_LIBSSH=ON
CMAKE_ARGS+= -DWITH_VTE=OFF
CMAKE_ARGS+= -DWITH_GETTEXT=OFF
CMAKE_ARGS+= -DWITH_TELEPATHY=OFF
CMAKE_ARGS+= -DWITH_SPICE=OFF

LDFLAGS+=	-fstack-protector -L${LOCALBASE}/lib -pthread
CFLAGS+=	-I${LOCALBASE}/include


#post-patch:
#	# do not build plugins and locales , they are provided by separated ports
##	${REINPLACE_CMD} -e's|add_subdirectory(remmina-plugins)||' \
##		-e 's,FreeBSD,FreeBSD|DragonFly,' ${WRKSRC}/CMakeLists.txt
#	${REINPLACE_CMD} -e 's,FreeBSD,FreeBSD|DragonFly,' ${WRKSRC}/CMakeLists.txt
#
##	${REINPLACE_CMD} -e's|add_subdirectory(remmina-plugins-gnome)||' \
##		${WRKSRC}/CMakeLists.txt
#	${REINPLACE_CMD} -e's|add_subdirectory(external_tools)||' \
#		-e 's,FreeBSD,FreeBSD|DragonFly,' \
#		${WRKSRC}/remmina/CMakeLists.txt

post-patch:
#	# do not build plugins and locales , they are provided by separated ports
#	${REINPLACE_CMD} -e '/add_subdirectory(plugins/d' \
#		-e 's,FreeBSD,FreeBSD|DragonFly,' \
#		${WRKSRC}/CMakeLists.txt
#	${REINPLACE_CMD} -e 's,FreeBSD,FreeBSD|DragonFly,' \
#		${WRKSRC}/src/CMakeLists.txt


.include <bsd.port.mk>
#EOF
