#
# $Id$
#
PORTNAME=	graphviz
PORTVERSION=	2.38.0
CATEGORIES=	graphics 
#MASTER_SITES+=	http://www.graphviz.org/pub/graphviz/ARCHIVE/
#MASTER_SITES+=	http://www.graphviz.org/pub/graphviz/stable/SOURCES/


MAINTAINER= homeunix7@gmail.com
COMMENT=	Graph Visualization Software from AT&T and Bell Labs

#LIB_DEPENDS+= gsf.1:x11-gnome/libgsf

LIB_DEPENDS+= libQtCore.so:xapp/libqt4
LIB_DEPENDS+= libQtGui.so:xapp/libqt4
LIB_DEPENDS+= libgio.so:devel/libglib
LIB_DEPENDS+= libglib.so:devel/libglib
LIB_DEPENDS+= libcairo.so:gnome/libcairo
LIB_DEPENDS+= libfreetype.so:graph/libfreetype2
LIB_DEPENDS+= libgd.so:graph/libgd
LIB_DEPENDS+= libgdk-pixbuf.so:gnome/libgdk-pixbuf
LIB_DEPENDS+= libjpeg.so:graph/libjpeg
LIB_DEPENDS+= libpango.so:gnome/libpango

LIB_DEPENDS+= libpixman.so:x11/libpixman
LIB_DEPENDS+= libpng.so:graph/libpng
LIB_DEPENDS+= librsvg.so:graph/librsvg

#LIB_DEPENDS+= libcroco.3:sgml-libs/libcroco
#LIB_DEPENDS+= libexpat.6:sgml-libs/libexpat
LIB_DEPENDS+= libxml2.so:text/libxml2
LIB_DEPENDS+= libiconv.so:text/libiconv
LIB_DEPENDS+= libpcre.so:text/libpcre

LIB_DEPENDS+= libX11.so:x11/libX11
LIB_DEPENDS+= libXaw7.so:x11/libXaw
LIB_DEPENDS+= libXt.so:x11/libXt
LIB_DEPENDS+= libfontconfig.so:x11/libfontconfig

LIB_DEPENDS+=	libgs.so:print/ghostscript


USES+=	gmake
GNU_CONFIGURE=	yes

#CONFIGURE_TARGET= ""
CPPFLAGS+=	-I${LOCALBASE}/include
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+=  --mandir=${PREFIX}/man

CONFIGURE_ARGS+= --enable-static

###CONFIGURE_ARGS+= --program-transform-name='s,.sh,,'

CONFIGURE_ARGS+= --with-zlibdir=/usr/lib

CONFIGURE_ARGS+=  --with-gnomeui=yes
CONFIGURE_ARGS+= --with-qt=yes

CONFIGURE_ARGS+= --enable-guile=no
CONFIGURE_ARGS+= --enable-io=no
CONFIGURE_ARGS+= --enable-java=no
CONFIGURE_ARGS+= --enable-lua=no
CONFIGURE_ARGS+= --enable-ocaml=no
CONFIGURE_ARGS+= --enable-perl=no
CONFIGURE_ARGS+= --enable-php=yes

CONFIGURE_ARGS+= --enable-python23=no
CONFIGURE_ARGS+= --enable-python24=no
CONFIGURE_ARGS+= --enable-python25=no
CONFIGURE_ARGS+= --enable-python26=no
CONFIGURE_ARGS+= --enable-python=no

CONFIGURE_ARGS+= --enable-r=no
CONFIGURE_ARGS+= --enable-ruby=no
CONFIGURE_ARGS+= --enable-sharp=no
CONFIGURE_ARGS+= --enable-swig=no
CONFIGURE_ARGS+= --enable-tcl=no

CONFIGURE_ARGS+= --with-Xpmincludedir=${X11BASE}/include
CONFIGURE_ARGS+= --with-Xpmlibdir=${X11BASE}/
CONFIGURE_ARGS+= --with-Xawincludedir=${X11BASE}/include
CONFIGURE_ARGS+= --with-Xawlibdir=${X11BASE}/


#CONFIGURE_ARGS+= --with-cgraph=no 
#CONFIGURE_ARGS+= --with-codegens=no 
CONFIGURE_ARGS+= --with-devil=no
CONFIGURE_ARGS+= --with-digcola=no
CONFIGURE_ARGS+= --with-efence=no 

CONFIGURE_ARGS+= --with-expat=yes 

CONFIGURE_ARGS+= --with-fontconfig=yes 
CONFIGURE_ARGS+= --with-freetype2=yes 

CONFIGURE_ARGS+= --with-gdincludedir=DIR 
CONFIGURE_ARGS+= --with-gdiplus=no

CONFIGURE_ARGS+= --with-gdk-pixbuf=yes 

CONFIGURE_ARGS+= --with-ghostscript=yes 

CONFIGURE_ARGS+= --with-glade=no
CONFIGURE_ARGS+= --with-glitz=no 
CONFIGURE_ARGS+= --with-glut=no

CONFIGURE_ARGS+= --with-gtk=yes 
CONFIGURE_ARGS+= --with-gtkgl=no
CONFIGURE_ARGS+= --with-gtkglext=no
CONFIGURE_ARGS+= --with-gts=no


CONFIGURE_ARGS+= --with-libiconv-prefix=DIR 
CONFIGURE_ARGS+= --with-ming=no
CONFIGURE_ARGS+= --with-mylibgd=no
CONFIGURE_ARGS+= --with-ortho=no

CONFIGURE_ARGS+= --with-pangocairo=no

CONFIGURE_ARGS+= --with-libgd=yes
CONFIGURE_ARGS+= --with-png=yes
CONFIGURE_ARGS+= --with-rsvg=yes

CONFIGURE_ARGS+= --with-quartz=no

CONFIGURE_ARGS+= --with-sfdp=yes
CONFIGURE_ARGS+= --with-smyrna=no

CONFIGURE_ARGS+= --with-visio=no

#CONFIGURE_ARGS+= --with-gts=no
CONFIGURE_ARGS+= --with-gdiplus=no
#CONFIGURE_ARGS+= --with-libgd=yes
CONFIGURE_ARGS+= --with-iconvincludedir=${LOCALBASE}/include
CONFIGURE_ARGS+= --with-iconvlibdir=${LOCALBASE}/lib
#CONFIGURE_ARGS+= --with-libiconv-prefix=DIR 
CONFIGURE_ARGS+= --with-pngincludedir=${LOCALBASE}/include
CONFIGURE_ARGS+= --with-pnglibdir=${LOCALBASE}/lib
CONFIGURE_ARGS+= --with-jpegincludedir=${LOCALBASE}/include
CONFIGURE_ARGS+= --with-jpeglibdir=${LOCALBASE}/lib
#CONFIGURE_ARGS+= --with-cgraph=no
#CONFIGURE_ARGS+= --with-digcola=no
#CONFIGURE_ARGS+= --with-ipsepcola=no

#CONFIGURE_ENV+=	CFLAGS="${CFLAGS}" \
#		CPPFLAGS="${CPPFLAGS}" \
#		LDFLAGS="${LDFLAGS}" \
#		MISSING=${TRUE}
#
#MAKE_ENV=	EXPR_COMPAT=yes MISSING=${TRUE}

.include <bsd.port.pre.mk>


post-patch:
	${REINPLACE_CMD} -e 's|gconf-2.0|gconf|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-2.0|gdk|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-pixbuf-2.0|gdk-pixbuf|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gio-2.0|gio|g' 		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gnome-vfs-2.0|gnome-vfs|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gobject-2.0|gobject|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gtk+-2.0|gtk+|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libIDL-2.0|libIDL|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libgnome-2.0|libgnome|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|libxml-2.0|libxml2|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gtk+-unix-print-2.0|gtk+-unix-print|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-x11-2.0|gdk-x11|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gdk-pixbuf-xlib-2.0|gdk-pixbuf-xlib|g' 	${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|librsvg-2.0|librsvg|g' 	${WRKSRC}/configure
.if ${OSVERSION} >= 1100093
	${REINPLACE_CMD} -e 's|SF_FLAGS|SFIO_FLAGS|g' \
		${WRKSRC}/lib/sfio/*.[ch]
.endif
#	${FIND} ${WRKSRC}/lib -name 'Makefile.in' | \
#		${XARGS} ${REINPLACE_CMD} \
#		-e 's|pkglibdir = $$(libdir)/@PACKAGE@|pkglibdir = $$(libdir)|g' ;


MLINKS+= gxl2gv.1 gv2gxl.1
MLINKS+= dot.1 fdp.1
MLINKS+= dot.1 circo.1
#MLINKS+= gxl2dot.1 dot2gxl.1
MLINKS+= dot.1 neato.1
MLINKS+= dot.1 twopi.1
MLINKS+= dot.1 sfdp.1



.include <bsd.port.post.mk>
#EOF

