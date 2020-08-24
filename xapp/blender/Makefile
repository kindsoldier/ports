# Created by: Jimmy Olgeni <olgeni@uli.it>
# $FreeBSD: head/graphics/blender/Makefile 542741 2020-07-21 13:40:42Z lwhsu $

PORTNAME=	blender
DISTVERSION=	2.83.2
CATEGORIES=	graphics multimedia
MASTER_SITES+=	http://download.blender.org/source/ 		
MASTER_SITES+=  http://mirror.cs.umn.edu/blender.org/source/ \
MASTER_SITES+=	http://public.planetmirror.com/pub/blender/source/

MAINTAINER=	FreeBSD@Shaneware.biz
COMMENT=	3D modeling/rendering/animation package

LIB_DEPENDS+= libdrm.so:system/libdrm
LIB_DEPENDS+= libexpat.so:text/libexpat
LIB_DEPENDS+= libfreetype.so:graph/libfreetype2

LIB_DEPENDS+= libGL.so:graph/libmesa
LIB_DEPENDS+= libglapi.so:graph/libmesa

LIB_DEPENDS+= libjpeg.so:graph/libjpeg
LIB_DEPENDS+= libpng16.so:graph/libpng
##LIB_DEPENDS+= libpython3.7m.so:lang/python37
LIB_DEPENDS+= libX11-xcb.so:x11/libX11
LIB_DEPENDS+= libXau.so:x11/libXau
#LIB_DEPENDS+= libxcb-dri2.so:x11/libxcb
#LIB_DEPENDS+= libxcb-glx.so:x11/libxcb
#LIB_DEPENDS+= libxcb.so:x11/libxcb
#LIB_DEPENDS+= libXdamage.so:x11/libXdamage
#LIB_DEPENDS+= libXdmcp.so:x11/libXdmcp
LIB_DEPENDS+= libXext.so:x11/libXext
LIB_DEPENDS+= libXfixes.so:x11/libXfixes
LIB_DEPENDS+= libXi.so:x11/libXi
LIB_DEPENDS+= libXrender.so:x11/libXrender
#LIB_DEPENDS+= libXxf86vm.so:x11/libXxf86vm


LIB_DEPENDS+= libboost_atomic.so:devel/libboost70
LIB_DEPENDS+= libboost_chrono.so:devel/libboost70
LIB_DEPENDS+= libboost_date_time.so:devel/libboost70
LIB_DEPENDS+= libboost_filesystem.so:devel/libboost70
LIB_DEPENDS+= libboost_locale.so:devel/libboost70
LIB_DEPENDS+= libboost_regex.so:devel/libboost70
LIB_DEPENDS+= libboost_system.so:devel/libboost70
LIB_DEPENDS+= libboost_thread.so:devel/libboost70

LIB_DEPENDS+= libfftw3.so:math/libfftw3

LIB_DEPENDS+= libicudata.so:devel/libicu
LIB_DEPENDS+= libicui18n.so:devel/libicu
LIB_DEPENDS+= libicuuc.so:devel/libicu


USES=		cmake compiler:c++14-lang python:3.7 shebangfix tar:xz

CMAKE_OFF+=	WITH_IMAGE_OPENJPEG
CMAKE_OFF+=	WITH_PYTHON_INSTALL
CMAKE_OFF+=	WITH_PYTHON_INSTALL_NUMPY
CMAKE_OFF+=	WITH_INSTALL_PORTABLE
CMAKE_OFF+=	WITH_CYCLES_LOGGING

SHEBANG_FILES+=	release/bin/blender-thumbnailer.py
SHEBANG_FILES+=	release/scripts/modules/bl_i18n_utils/merge_po.py
SHEBANG_FILES+=	release/scripts/modules/bl_i18n_utils/utils_rtl.py
SHEBANG_FILES+=	release/scripts/modules/blend_render_info.py

CFLAGS+=	${CFLAGS_${CHOSEN_COMPILER_TYPE}}
CFLAGS_gcc=	-Wno-float-conversion

CFLAGS_i386=	-march=i586
CXXFLAGS_i386=	-march=i586
# Use LLVM linker where available
#.if exists(/usr/bin/ld.lld) && (${/usr/bin/ld:L:tA} != /usr/bin/ld.lld)
LDFLAGS+=	-fuse-ld=lld
#.endif

CMAKE_OFF+=	WITH_XR_OPENXR
CMAKE_ON+=	WITH_PYTHON
CMAKE_OFF+=	WITH_ALEMBIC
CMAKE_OFF+=	WITH_ALEMBIC_HDF5
CMAKE_OFF+=	WITH_BULLET
CMAKE_OFF+=	WITH_CODEC_AVI
CMAKE_OFF+=	WITH_CODEC_FFMPEG
CMAKE_OFF+=	WITH_CODEC_SNDFILE
CMAKE_OFF+=	WITH_COMPOSITOR
CMAKE_OFF+=	WITH_CYCLES
CMAKE_OFF+=	WITH_CYCLES_EMBREE
CMAKE_OFF+=	WITH_CYCLES_OSL
CMAKE_OFF+=	WITH_DRACO
CMAKE_ON+=	WITH_FFTW3
CMAKE_ON+=	WITH_FREESTYLE
CMAKE_OFF+=	WITH_HEADLESS
CMAKE_OFF+=	WITH_IMAGE_CINEON
CMAKE_OFF+=	WITH_IMAGE_DDS
CMAKE_OFF+=	WITH_IMAGE_FRAMESERVER
CMAKE_OFF+=	WITH_IMAGE_HDR
CMAKE_OFF+=	WITH_IMAGE_OPENEXR
CMAKE_OFF+=	WITH_IMAGE_TIFF
CMAKE_OFF+=	WITH_INPUT_NDOF
CMAKE_ON+=	WITH_INTERNATIONAL
CMAKE_OFF+=	WITH_JACK
CMAKE_OFF+=	WITH_LIBMV
CMAKE_ON+=	WITH_LZMA
CMAKE_ON+=	WITH_LZO

CMAKE_ON+=	WITH_MOD_BOOLEAN
CMAKE_OFF+=	WITH_MOD_FLUID
CMAKE_OFF+=	WITH_MOD_OCEANSIM
CMAKE_OFF+=	WITH_MOD_REMESH
CMAKE_OFF+=	WITH_MOD_SMOKE

CMAKE_OFF+=	WITH_OPENAL
CMAKE_OFF+=	WITH_OPENCOLLADA
CMAKE_OFF+=	WITH_OPENCOLORIO
CMAKE_OFF+=	WITH_OPENIMAGEDENOISE
CMAKE_OFF+=	WITH_OPENIMAGEIO
CMAKE_OFF+=	WITH_OPENMP
CMAKE_OFF+=	WITH_OPENSUBDIV
CMAKE_OFF+=	WITH_OPENVDB
CMAKE_OFF+=	WITH_RAYOPTIMIZATION

CMAKE_OFF+=	WITH_SDL
CMAKE_OFF+=	WITH_TBB

CMAKE_ON+=	WITH_X11_XF86VMODE
CMAKE_ON+=	WITH_X11_XINPUT

CMAKE_ARGS+=    -DBoost_INCLUDE_DIR=${LOCALBASE}/boost70/include
CMAKE_ON+=     WITH_BOOST

post-build:
	cd ${WRKSRC}/doc/manpage && ${PYTHON_CMD} blender.1.py \
			${INSTALL_WRKSRC}/bin/blender ${INSTALL_WRKSRC}/bin/${PORTNAME}.1

post-install:
	${INSTALL_MAN} ${INSTALL_WRKSRC}/bin/${PORTNAME}.1 ${STAGEDIR}${MAN1PREFIX}/man/man1


.include <bsd.port.mk>
