#
# $Id: Makefile 1846 2008-10-05 08:53:32Z ziggi $
# $URL: file:///usr2/svn/ports5/graph/libmesa/Makefile $
#
PORTNAME=	mesa
PORTVERSION=	17.1.2
CATEGORIES=	graphics
MASTER_SITES+=	ftp://ftp.freedesktop.org/pub/mesa/${PORTVERSION}/
MASTER_SITES+=	https://mesa.freedesktop.org/archive/
MASTER_SITE_SUBDIR=	mesa3d
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	A graphics library similar to SGI's OpenGL

LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdamage.so:x11/libXdamage
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+=	libXext.so:x11/libXext
LIB_DEPENDS+=	libXfixes.so:x11/libXfixes
LIB_DEPENDS+=	libXxf86vm.so:x11/libXxf86vm

#LIB_DEPENDS+=	libdrm.so:x11/libdrm
#LIB_DEPENDS+=	libdrm_intel.so:x11/libdrm
#LIB_DEPENDS+=	libdrm_radeon.so:x11/libdrm

LIB_DEPENDS+=	libpciaccess.so:system/libpciaccess

LIB_DEPENDS+=	libxcb-dri2.so:x11/libxcb
LIB_DEPENDS+=	libxcb-dri3.so:x11/libxcb
LIB_DEPENDS+=	libxcb-glx.so:x11/libxcb
LIB_DEPENDS+=	libxcb-present.so:x11/libxcb
LIB_DEPENDS+=	libxcb-randr.so:x11/libxcb
LIB_DEPENDS+=	libxcb-render.so:x11/libxcb
LIB_DEPENDS+=	libxcb-shape.so:x11/libxcb
LIB_DEPENDS+=	libxcb-sync.so:x11/libxcb
LIB_DEPENDS+=	libxcb-xfixes.so:x11/libxcb
LIB_DEPENDS+=	libxcb.so:x11/libxcb

LIB_DEPENDS+=	libxshmfence.so:x11/libxshmfence

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xvmc.pc:x11/libXvMC


LIB_DEPENDS+=	libdevq.so:system/libdevq
LIB_DEPENDS+=	libdrm.so:system/libdrm

BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/dri2proto.pc:xproto/dri2proto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/dri3proto.pc:xproto/dri3proto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/presentproto.pc:xproto/presentproto

BUILD_DEPENDS+=	${PREFIX}/lib/pkgconfig/glproto.pc:xproto/glproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/kbproto.pc:xproto/kbproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xproto.pc:xproto/xproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/pthread-stubs.pc:x11/libpthread-stubs
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/xextproto.pc:xproto/xextproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/damageproto.pc:xproto/damageproto
BUILD_DEPENDS+= ${PREFIX}/lib/pkgconfig/fixesproto.pc:xproto/fixesproto

BUILD_DEPENDS+= py27-mako>=1:python/py-mako


USES+=	gmake tar:xz python:2.7,build 

INSTALLS_SHLIB=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

#CONFIGURE_ARGS+=	--disable-glx-tls
#CONFIGURE_ARGS+=	--disable-gles1

.include <bsd.port.pre.mk>

CONFIGURE_ARGS+= --with-dri-drivers=i915,i965,nouveau,r200,radeon
CONFIGURE_ARGS+= --with-gallium-drivers=r600,svga,swrast

CONFIGURE_ARGS+= --enable-egl --with-egl-platforms=x11,drm

python_OLD_CMD=	"/usr/bin/env[[:space:]]python"
python_CMD=	${LOCALBASE}/bin/python2
SHEBANG_FILES=	src/gallium/*/*/*.py src/gallium/tools/trace/*.py \
		src/gallium/drivers/svga/svgadump/svga_dump.py \
		src/mapi/glapi/gen/*.py
SHEBANG_FILES+=	src/mapi/mapi_abi.py

post-patch:
	${REINPLACE_CMD} -e 's,libdevq-1.0,libdevq,' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|x86_64|amd64|' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|/etc/|${PREFIX}/etc/|g' \
		${WRKSRC}/src/mesa/drivers/dri/common/xmlconfig.c
	${REINPLACE_CMD} -e 's|!/use/bin/python2|!${PYTHON_CMD}|g' \
		${WRKSRC}/src/mesa/main/get_hash_generator.py \
		${WRKSRC}/src/mapi/glapi/gen/gl_enums.py \
		${WRKSRC}/src/mapi/glapi/gen/gl_table.py
	cd ${WRKSRC} && autoreconf

pre-build:
	cd ${WRKSRC}/src && ${MAKE_CMD} git_sha1.h libglsl_util.la
	cd ${WRKSRC}/src/mesa/drivers/dri/common/ && ${MAKE_CMD}
	cd ${WRKSRC}/src/loader && ${MAKE_CMD}


.include <bsd.port.post.mk>
#EOF
