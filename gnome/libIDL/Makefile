#
# $Id: Makefile 2409 2009-09-12 09:55:17Z root $
# $URL: file:///usr2/svn/ports5/devel-libs/libIDL/Makefile $
#
PORTNAME=	libIDL
PORTVERSION=	0.8.14
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GNOME}
MASTER_SITE_SUBDIR=	sources/${PORTNAME}/${PORTVERSION:R}

MAINTAINER=	onborodin@gmail.com
COMMENT=	A library for creating trees of CORBA IDL files

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre

BUILD_DEPENDS+=	bison:devel/bison

USES+=		tar:bzip2
USES+=		gmake
INSTALLS_SHLIB=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-html-dir=${PREFIX}/share/doc
CONFIGURE_ARGS=	--infodir=${PREFIX}/info
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

INFO=	libIDL2

#pre-configure:
#	cd ${WRKSRC} && ${AUTOMAKE} --add --copy
#	cd ${WRKSRC} && ${AUTOCONF}

#post-patch:
#	${REINPLACE_CMD} -e '/SUBDIRS/s|doc||g' ${WRKSRC}/Makefile.in
#	${REINPLACE_CMD} -e 's|libdata/pkgconfig|lib/pkgconfig|g' ${WRKSRC}/configure
#	${REINPLACE_CMD} -e 's|-@SCHRO_MAJORMINOR@||g' ${WRKSRC}/configure \
#	    ${WRKSRC}/Makefile.in ${WRKSRC}/*/Makefile.in \
#	    ${WRKSRC}/*.pc.in
#	${REINPLACE_CMD} -e 's|_@SCHRO_MAJORMINOR@||g' ${WRKSRC}/configure \
#	    ${WRKSRC}/Makefile.in ${WRKSRC}/*/Makefile.in \
#	    ${WRKSRC}/*.pc.in
#	${REINPLACE_CMD} -e 's|orc-0.4|orc|g' ${WRKSRC}/configure \
#	    ${WRKSRC}/Makefile.in ${WRKSRC}/*/Makefile.in \
#	    ${WRKSRC}/*.pc.in
#	${REINPLACE_CMD} -e 's|-$$SCHRO_MAJORMINOR||g' ${WRKSRC}/configure
#	${REINPLACE_CMD} -e 's|-$$(SCHRO_MAJORMINOR)||g' ${WRKSRC}/Makefile.in \
#	    ${WRKSRC}/*/Makefile.in
#	${REINPLACE_CMD} -e 's|orc-test-0.4|orc-test|g'  \
#	    ${WRKSRC}/Makefile.in ${WRKSRC}/*/Makefile.in \
#	    ${WRKSRC}/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' ${WRKSRC}/Makefile.in \
	    ${WRKSRC}/*.pc.in ${WRKSRC}/configure \
	    ${WRKSRC}/libIDL-config-2.in

	${REINPLACE_CMD} -e 's|IDL-2.0|IDL|g' ${WRKSRC}/Makefile.in \
	    ${WRKSRC}/*.pc.in ${WRKSRC}/configure \
	    ${WRKSRC}/include/libIDL/Makefile.in \
	    ${WRKSRC}/libIDL-config-2.in

	${REINPLACE_CMD} -e 's|IDL-2|IDL|g' ${WRKSRC}/Makefile.in \
	    ${WRKSRC}/*.pc.in ${WRKSRC}/libIDL-config-2.in

	${REINPLACE_CMD} -e 's|libIDL-config-2|libIDL-config|g' ${WRKSRC}/Makefile.in \
	    ${WRKSRC}/*.pc.in ${WRKSRC}/libIDL-config-2.in \
	    ${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|IDL_2|IDL|g' ${WRKSRC}/Makefile.in
	cd ${WRKSRC} && ${CP} libIDL-2.0.pc.in libIDL.pc.in
	cd ${WRKSRC} && ${CP} libIDL-2.0-uninstalled.pc.in libIDL-uninstalled.pc.in
	cd ${WRKSRC} && ${CP} libIDL-config-2.in libIDL-config.in

.include <bsd.port.mk>
#EOF
