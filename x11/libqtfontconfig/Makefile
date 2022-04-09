#
# $Id: Makefile 2729 2009-12-14 09:19:08Z root $
# $URL: file:///usr2/svn/ports5/x11/libfontconfig/Makefile $
#
PORTNAME= 	fontconfig
PORTVERSION=	2.12.6
MASTER_SITES+=	http://www.fontconfig.org/release/
MASTER_SITES+=	http://www.freedesktop.org/software/fontconfig/release/
MASTER_SITES+=  http://fontconfig.org/release/
CATEGORIES=	x11
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Fontconfig is a library for font customization and configuration

#BUILD_DEPENDS+=	pkg-config:devel/pkg-config
#LIB_DEPENDS+=	libqtfreetype.so:graph/libqtfreetype2
LIB_DEPENDS+=	libpng.so:graph/libpng
LIB_DEPENDS+=	libexpat.so:text/libexpat


USES+=		gmake tar:bz2
GNU_CONFIGURE=	yes

CFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ENV+= LDFLAGS="-L${LOCALBASE}/lib"

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --with-baseconfigdir=${PREFIX}/etc/fonts
CONFIGURE_ARGS+= --with-expat-includes=${LOCALBASE}/include
CONFIGURE_ARGS+= --with-expat-lib=${LOCALBASE}/lib
CONFIGURE_ARGS+= --with-default-fonts=${LOCALBASE}/share/fonts/X11
CONFIGURE_ARGS+= --with-cache-dir=/var/cache/fontconfig

CONFIGURE_ARGS+= --with-templatedir=${PREFIX}/etc/fonts/conf.avail

CONFIGURE_ENV=	HASDOCBOOK=no
MAKE_ENV=	LC_ALL=C

post-patch:
	cd ${WRKSRC}/doc && ${REINPLACE_CMD} -e \
	    "s!install-data-am:.*install-man!install-data-am: install-man!" \
		Makefile.in
	${REINPLACE_CMD} -e 's/libxml-2.0/libxml/g' ${WRKSRC}/configure

.include <bsd.port.mk>
#EOF
