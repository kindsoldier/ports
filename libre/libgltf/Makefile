# $FreeBSD: head/graphics/libgltf/Makefile 439934 2017-05-02 06:48:10Z jbeich $

PORTNAME=	libgltf
PORTVERSION=	0.0.2
CATEGORIES=	graphics devel
MASTER_SITES=	LODEV

MAINTAINER=	office@FreeBSD.org
COMMENT=	C++ Library for rendering OpenGL models stored in glTF format


BUILD_DEPENDS=	${LOCALBASE}/boost64/include/boost/ptr_container/ptr_map.hpp:devel/libboost64 \
		${LOCALBASE}/include/glm/glm.hpp:libre/libglm

USES=		compiler:c++0x pathfix pkgconfig tar:bzip2
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-werror
INSTALL_TARGET=	install-strip
CPPFLAGS+=	-I${LOCALBASE}/include


LDFLAGS+=       -L${LOCALBASE}/lib -L${LOCALBASE}/boost64/lib
CPPFLAGS=	-I${LOCALBASE}/include -I${LOCALBASE}/boost64/include


FILES+=	${WRKSRC}/Makefile.in 
FILES+=	${WRKSRC}/*/Makefile.in 
FILES+=	${WRKSRC}/*/*/Makefile.in 
FILES+=	${WRKSRC}/*/*/*/Makefile.in 
FILES+=	${WRKSRC}/*.pc.in
FILES+=	${WRKSRC}/configure


post-patch:
	${REINPLACE_CMD} -e 's,-@GLTF_MAJOR_VERSION@.@GLTF_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,_@GLTF_MAJOR_VERSION@_@GLTF_MINOR_VERSION@,,g' ${FILES}
	${REINPLACE_CMD} -e 's,-$$GLTF_MAJOR_VERSION.$$GLTF_MINOR_VERSION,,g' ${FILES}


.include <bsd.port.mk>
