# $FreeBSD: head/devel/liblognorm/Makefile 519791 2019-12-11 09:40:37Z amdmi3 $

PORTNAME=	liblognorm
PORTVERSION=	2.0.6
CATEGORIES=	devel net security
MASTER_SITES=	http://www.liblognorm.com/download/files/download/

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Log normalizer

LIB_DEPENDS+=	libfastjson.so:devel/libfastjson
LIB_DEPENDS+=	libestr.so:devel/libestr

USES=		pathfix pkgconfig gmake

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

SUB_FILES=	pkg-message

# Try to fix parallel (-jX) builds
post-patch:
	@${REINPLACE_CMD} -e \
		'/^lognormalizer_DEPENDENCIES/s,=,= $$(lib_LTLIBRARIES),' \
			${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
