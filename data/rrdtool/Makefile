#
# $Id$
#
PORTNAME=	rrdtool
PORTVERSION=	1.7.2
CATEGORIES=	databases graphics
MASTER_SITES=	http://oss.oetiker.ch/rrdtool/pub/

MAINTAINER=	zeising@FreeBSD.org
COMMENT=	Round Robin Database Tools

LIB_DEPENDS+= libintl.so:${PORTSDIR}/devel/gettext

LIB_DEPENDS+= libglib.so:${PORTSDIR}/devel/libglib
LIB_DEPENDS+= libgmodule.so:${PORTSDIR}/devel/libglib
LIB_DEPENDS+= libgobject.so:${PORTSDIR}/devel/libglib
LIB_DEPENDS+= libgthread.so:${PORTSDIR}/devel/libglib

LIB_DEPENDS+= libcairo.so:${PORTSDIR}/gnome/libcairo

LIB_DEPENDS+= libpango.so:${PORTSDIR}/gnome/libpango
LIB_DEPENDS+= libpangocairo.so:${PORTSDIR}/gnome/libpango
LIB_DEPENDS+= libpangoft2.so:${PORTSDIR}/gnome/libpango
LIB_DEPENDS+= libfreetype.so:${PORTSDIR}/graph/libfreetype2
LIB_DEPENDS+= libpng.so:${PORTSDIR}/graph/libpng
LIB_DEPENDS+= libxml2.so:${PORTSDIR}/text/libxml2
LIB_DEPENDS+= libdbi.so:${PORTSDIR}/data/libdbi

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USES+=		gmake pathfix pkgconfig shebangfix perl5
PERL_USES=	run

INSTALL_TARGET=	install-strip

CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/freetype2
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS+= --disable-tcl 
CONFIGURE_ARGS+= --disable-silent-rules
CONFIGURE_ARGS+= --disable-python
CONFIGURE_ARGS+= --disable-ruby
CONFIGURE_ARGS+= --enable-perl 
CONFIGURE_ARGS+= --enable-perl-site-install
CONFIGURE_ARGS+= --disable-libwrap

SHEBANG_FILES=	examples/rrdcached/rrdcached-size.pl

USE_RC_SUBR=	rrdcached

post-extract:
	${REINPLACE_CMD} -e '/^SUBDIRS = /s| examples | |' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -E 's|(^rrdcached_LDADD = librrd_th.la)|\1 $$\(ALL_LIBS\)|' \
		${WRKSRC}/src/Makefile.in
	${REINPLACE_CMD} -E 's|(^rrdtool_LDADD = librrd.la)|\1 $$\(ALL_LIBS\)|' \
		${WRKSRC}/src/Makefile.in

post-patch:
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|pangocairo-1.0|pangocairo|g'	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|-ldl|-lc|g'	${WRKSRC}/configure


.include <bsd.port.mk>
#EOF

