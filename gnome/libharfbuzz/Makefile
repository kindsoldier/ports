# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: head/print/harfbuzz/Makefile 491720 2019-01-31 13:51:49Z jbeich $

PORTNAME=	harfbuzz
PORTVERSION=	2.3.1
CATEGORIES=	print
MASTER_SITES=	http://www.freedesktop.org/software/harfbuzz/release/
PKGNAMEPREFIX=  lib

MAINTAINER=	gnome@FreeBSD.org
COMMENT?=	OpenType text shaping engine

LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libgraphite2.so:graph/libgraphite2
LIB_DEPENDS+=   libgobject.so:devel/libglib
LIB_DEPENDS+=   libicui18n.so:devel/libicu


USE_LDCONFIG=	yes
USES=		compiler:c++11-lib pkgconfig tar:bzip2 gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-graphite2 --with-gobject=yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

CONFIGURE_ARGS+=	--with-icu

post-patch:
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g' ${WRKSRC}/configure

.include <bsd.port.mk>
