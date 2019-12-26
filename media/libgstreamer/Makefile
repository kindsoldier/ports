# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD: head/multimedia/gstreamer1/Makefile 439161 2017-04-22 10:59:26Z kwm $

PORTNAME=	gstreamer
PORTVERSION=	1.8.3
CATEGORIES=	multimedia
MASTER_SITES=	http://gstreamer.freedesktop.org/src/gstreamer/
PKGNAMEPREFIX=  lib

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Media applications framework

PORTSCOUT=	limitw:1,even

CFLAGS:=	${CFLAGS} -O2 -Wno-format
USES=		bison gmake pkgconfig tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-tests \
		--disable-examples \
		--disable-failing-tests \
		--disable-fatal-warnings \
		--disable-gtk-doc
CONFIGURE_ENV=	ac_cv_func_register_printf_function="no"
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

CONFIGURE_ARGS+= --disable-debug
CONFIGURE_ARGS+= --without-bash-completion-dir

FILES+= ${WRKSRC}/configure
FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*/Makefile.in
FILES+= ${WRKSRC}/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/Makefile.in
FILES+= ${WRKSRC}/*/*/*/*/Makefile.in
FILES+= ${WRKSRC}/pkgconfig/*.pc.in
FILES+= ${WRKSRC}/po/Makevars


post-patch:
	${REINPLACE_CMD} -e 's,-Wmissing-include-dirs,,g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's,gio-2.0,gio,g' 		${FILES}
	${REINPLACE_CMD} -e 's,glib-2.0,glib,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-2.0,gmodule,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gobject-2.0,gobject,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gthread-2.0,gthread,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gmodule-no-export-2.0,gmodule-no-export,g' 	${FILES}

	${REINPLACE_CMD} -e 's,-@GST_API_VERSION@,,g' 	${FILES}
	${REINPLACE_CMD} -e 's,_@GST_API_VERSION@,,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$GST_API_VERSION,,g' 	${FILES}
	${REINPLACE_CMD} -e 's,-$$(GST_API_VERSION),,g' 	${FILES}

	${REINPLACE_CMD} -e 's,800:0:800,8:0:8,g' 	${FILES}
	${REINPLACE_CMD} -e 's,801:0:801,8:0:8,g' 	${FILES}
	${REINPLACE_CMD} -e 's,803:0:803,8:0:8,g' 	${FILES}

	${REINPLACE_CMD} -e 's,gstreamer-1.0,gstreamer,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gstbase-1.0,gstbase,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gstcheck-1.0,gstcheck,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gstcontroller-1.0,gstcontroller,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gstnet-1.0,gstnet,g' 	${FILES}
	${REINPLACE_CMD} -e 's,gstreamer-1.0,gstreamer,g' 	${FILES}

	${REINPLACE_CMD} -e 's,gir-1.0,gir,g' 	${FILES}
	${REINPLACE_CMD} -e 's,girepository-1.0,girepository,g' 	${FILES}

	${REINPLACE_CMD} -e 's,liborc-0.4,liborc,g' 	${FILES}

LIB_DEPENDS+= liborc.so:devel/liborc


.include <bsd.port.mk>
