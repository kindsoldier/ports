# Created by: Matthias Sund <m.sund@arcor.de>
# $FreeBSD: head/devel/codeblocks/Makefile 459315 2018-01-18 04:11:02Z jbeich $

PORTNAME=	codeblocks
PORTVERSION=	17.12
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/Sources/${PORTVERSION}
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	lbartoletti@tuxfamily.org
COMMENT=	Open source, cross-platform, free C/C++ IDE

BUILD_DEPENDS=	zip:arch/zip

LIB_DEPENDS+=	libwx_baseu.so:xapp/libwxWidget
LIB_DEPENDS+=	libboost_system.so:devel/libboost64
LIB_DEPENDS+=	libgtk-x11.so:gnome/libgtk2
LIB_DEPENDS+=	libfreetype.so:graph/libfreetype2
LIB_DEPENDS+=	libhunspell.so:text/hunspell
LIB_DEPENDS+=	libfontconfig.so:x11/libfontconfig

RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils


USES=		gmake tar:xz pathfix localbase pkgconfig
CONFIGURE_ARGS=	--with-wx-config=${WX_CONFIG}
CONFIGURE_ARGS+= --with-contrib-plugins=all
CONFIGURE_ARGS+= --disable-pch
CONFIGURE_ARGS+= --with-boost-system=boost_system
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
GNU_CONFIGURE=  yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.pre.mk>

USE_CXXSTD=	c++11
CXXFLAGS+=	-Wno-undefined-bool-conversion

FILES+= ${WRKSRC}/configure

post-patch:
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' ${FILES}


pre-configure:
	cd ${WRKSRC} && autoreconf
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' ${FILES}


.include <bsd.port.post.mk>
