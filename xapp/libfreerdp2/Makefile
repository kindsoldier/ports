# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: head/net/freerdp/Makefile 410825 2016-03-11 11:53:42Z tijl $

PORTNAME=	freerdp
#PORTVERSION=	2.0.0
#DISTVERSION=    2.0.0.g2016.11.24
DISTVERSION=	2.0.0-rc4
CATEGORIES=	net comms
PKGNAMEPREFIX=  lib

MAINTAINER=	bsdports@kyle-evans.net
COMMENT=	Free implementation of Remote Desktop Protocol

#PATCH_SITES=	https://github.com/${GH_ACCOUNT}/${GH_PROJECT}/commit/
#PATCHFILES=	78df32c77f28.patch:-p1 ed571e74a594.patch:-p1

PATCH_SITES=	https://github.com/${GH_ACCOUNT}/${GH_PROJECT}/commit/
PATCHFILES=	649f49f.patch:-p1 effa8b8.patch:-p1 0c83efa.patch:-p1


USE_GITHUB=	yes
GH_ACCOUNT=	FreeRDP
GH_PROJECT=	${GH_ACCOUNT}
#GH_TAGNAME=	2a6dbab

LIB_DEPENDS+= libasound.so:media/libalsa
LIB_DEPENDS+= libavcodec.so:media/ffmpeg
LIB_DEPENDS+= libavutil.so:media/ffmpeg

LIB_DEPENDS+= libgio.so:devel/libglib
LIB_DEPENDS+= libglib.so:devel/libglib
LIB_DEPENDS+= libgmodule.so:devel/libglib
LIB_DEPENDS+= libgobject.so:devel/libglib

LIB_DEPENDS+= libgstbase.so:media/libgstreamer
LIB_DEPENDS+= libgstreamer.so:media/libgstreamer
LIB_DEPENDS+= libgstvideo.so:media/libgst-plugins-base

LIB_DEPENDS+= libgthread.so:devel/libglib
LIB_DEPENDS+= libiconv.so:text/libiconv
LIB_DEPENDS+= libiconv.so:text/libiconv/

LIB_DEPENDS+= libintl.so:devel/gettext

LIB_DEPENDS+= libswresample.so:media/ffmpeg

LIB_DEPENDS+= libX11.so:x11/libX11
LIB_DEPENDS+= libXau.so:x11/libXau

LIB_DEPENDS+= libXcomposite.so:x11/libXcomposite
LIB_DEPENDS+= libXcursor.so:x11/libXcursor
LIB_DEPENDS+= libXdamage.so:x11/libXdamage
LIB_DEPENDS+= libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+= libXext.so:x11/libXext
LIB_DEPENDS+= libXfixes.so:x11/libXfixes
LIB_DEPENDS+= libXi.so:x11/libXi
LIB_DEPENDS+= libXinerama.so:x11/libXinerama
LIB_DEPENDS+= libxkbfile.so:x11/libxkbfile
LIB_DEPENDS+= libXrandr.so:x11/libXrandr
LIB_DEPENDS+= libXrender.so:x11/libXrender

LIB_DEPENDS=	libepoll-shim.so:devel/libepoll-shim


USES+=  cmake
USES=		alias cmake compiler:c++11-lib pkgconfig
USE_LDCONFIG=	yes

CMAKE_ARGS+=	-DWITH_LIBSYSTEMD=OFF -DWITH_WAYLAND=OFF -DWITH_GSTREAMER_0_10=OFF ${CMAKE_ARGS_${ARCH}}

CMAKE_ARGS_aarch64=	-DWITH_NEON=ON
CFLAGS_aarch64=		-D__ARM_NEON__=__ARM_NEON # clang

LDFLAGS+=	-L${LOCALBASE}/lib -pthread
CFLAGS+=	-I${WRKSRC}/include -I${WRKSRC}/winpr/include -I${LOCALBASE}/include 
CFLAGS+=	-pthread

LIB_DEPENDS+=	libasound.so:media/libalsa
CMAKE_ARGS+= -DWITH_ALSA=ON
CMAKE_ARGS+= -DWITH_NEON=OFF

CMAKE_ARGS+= -DWITH_CUPS=OFF
CMAKE_ARGS+= -DWITH_DIRECTFB=OFF

LIB_DEPENDS+=	libavcodec.so:media/ffmpeg libavutil.so:media/ffmpeg
CMAKE_ARGS+= -DWITH_FFMPEG=ON

CMAKE_ARGS+= -DWITH_GSTREAMER_1_0=ON -DWITH_GSTREAMER_0_10=OFF
CMAKE_ARGS+= -DWITH_PULSE=OFF
CMAKE_ARGS+= -DWITH_SSE2=OFF

CMAKE_ARGS+= -DWITH_X11=ON -DWITH_XKBFILE=ON

CMAKE_ARGS+= WITH_DEBUG_CERTIFICATE=ON
CMAKE_ARGS+= WITH_DEBUG_CAPABILITIES=ON
CMAKE_ARGS+= WITH_DEBUG_CHANNELS=ON
CMAKE_ARGS+= WITH_DEBUG_CLIPRDR=ON
CMAKE_ARGS+= WITH_DEBUG_DVC=ON
CMAKE_ARGS+= WITH_DEBUG_TSMF=ON
CMAKE_ARGS+= WITH_DEBUG_GDI=ON
CMAKE_ARGS+= WITH_DEBUG_KBD=ON
CMAKE_ARGS+= WITH_DEBUG_LICENSE=ON
CMAKE_ARGS+= WITH_DEBUG_NEGO=ON
CMAKE_ARGS+= WITH_DEBUG_NLA=ON
CMAKE_ARGS+= WITH_DEBUG_NTLM=ON
CMAKE_ARGS+= WITH_DEBUG_TSG=ON
CMAKE_ARGS+= WITH_DEBUG_ORDERS=ON
CMAKE_ARGS+= WITH_DEBUG_RAIL=ON
CMAKE_ARGS+= WITH_DEBUG_RDP=ON
CMAKE_ARGS+= WITH_DEBUG_REDIR=ON
CMAKE_ARGS+= WITH_DEBUG_RFX=ON
CMAKE_ARGS+= WITH_DEBUG_SCARD=ON
CMAKE_ARGS+= WITH_DEBUG_SND=ON
CMAKE_ARGS+= WITH_DEBUG_SVC=ON
CMAKE_ARGS+= WITH_DEBUG_RDPEI=ON
CMAKE_ARGS+= WITH_DEBUG_TIMEZONE=ON
CMAKE_ARGS+= WITH_DEBUG_TRANSPORT=ON
CMAKE_ARGS+= WITH_DEBUG_WND=ON
CMAKE_ARGS+= WITH_DEBUG_X11=ON
CMAKE_ARGS+= WITH_DEBUG_X11_CLIPRDR=ON
CMAKE_ARGS+= WITH_DEBUG_X11_LOCAL_MOVESIZE=ON
CMAKE_ARGS+= WITH_DEBUG_XV=ON


.include <bsd.port.options.mk>

post-extract:
	${REINPLACE_CMD} -e 's|$${CMAKE_INSTALL_LIBDIR}/pkgconfig|lib/pkgconfig|' \
		-e '/CMAKE_INSTALL_RPATH /d' \
		${WRKSRC}/CMakeLists.txt

	${REINPLACE_CMD} -e 's|share/man/man1|man/man1|' \
		${WRKSRC}/client/X11/CMakeLists.txt

	${REINPLACE_CMD} -e 's/NetBSD__)/NetBSD__) || defined(__FreeBSD__)/' \
		${WRKSRC}/winpr/libwinpr/utils/trio/triodef.h
##	${REINPLACE_CMD} -e 's|<malloc.h>|<stdlib.h>|' \
##		${WRKSRC}/channels/drive/client/statvfs.c


	${REINPLACE_CMD} -e '/CMAKE_INSTALL_RPATH /d' \
		${WRKSRC}/CMakeLists.txt
	${REINPLACE_CMD} -e 's/Linux/Linux|FreeBSD/' \
		${WRKSRC}/winpr/CMakeLists.txt
	${REINPLACE_CMD} -e 's/NetBSD__)/NetBSD__) || defined(__FreeBSD__)/' \
		${WRKSRC}/winpr/libwinpr/utils/trio/triodef.h
	${RM} ${WRKSRC}/cmake/FindOpenSSL.cmake
#	${REINPLACE_CMD} -e 's|$${CMAKE_INSTALL_LIBDIR}/cmake|$${CMAKE_INSTALL_PREFIX}/share/cmake/Modules|' \
#		${WRKSRC}/client/CMakeLists.txt \
#		${WRKSRC}/winpr/CMakeLists.txt \
#		${WRKSRC}/uwac/CMakeLists.txt \
#		${WRKSRC}/server/CMakeLists.txt \
#		${WRKSRC}/server/shadow/CMakeLists.txt \
#		${WRKSRC}/libfreerdp/CMakeLists.txt


.include <bsd.port.mk>
#EOF
