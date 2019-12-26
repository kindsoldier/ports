#
# $Id: Makefile 2694 2009-10-31 16:57:18Z root $
# $Author$
# $Date$
#
PORTNAME=	mc
PORTVERSION_BASE=	4.8.1.7
PORTVERSION=	${PORTVERSION_BASE}
CATEGORIES=	misc
MASTER_SITES+=  http://ftp.midnight-commander.org/

COMMENT=	Midnight Commander, a free Norton Commander Clone
MAINTAINER=	onborodin@gmail.com

LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre


USES+=		gmake perl5
GNU_CONFIGURE=	yes
USES+=		tar:xz
CONFIGURE_ARGS+= --prefix=${PREFIX} 
CONFIGURE_ARGS+= --with-subshell
CONFIGURE_ARGS+= --without-gnome
CONFIGURE_ARGS+= --enable-charset
CONFIGURE_ARGS+= --without-diff-viewer
CONFIGURE_ARGS+= --enable-extcharset
CONFIGURE_ARGS+= --with-libiconv-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-edit
CONFIGURE_ARGS+= --with-x
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --sysconfdir=${PREFIX}/share/mc/etc

CONFIGURE_ARGS+= --with-screen=ncurses
CFLAGS+=	-I${LOCALBASE}/include 
CPPFLAGS+=	-I${LOCALBASE}/include 
LDFLAGS+=	-L${LOCALBASE}/lib

STRIP=		#

post-patch:
	${REINPLACE_CMD} -e 's|gmodule-2.0|gmodule|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gthread-2.0|gthread|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|^DIST_SUBDIRS =|#DIST_SUBDIRS =|' ${WRKSRC}/doc/man/Makefile.in


post-install:
	cd ${STAGEDIR}${PREFIX}/bin && ${CP} mc midc; ${RM} -f mc
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf midc mcedit;
	cd ${STAGEDIR}${PREFIX}/bin && ${LN} -sf midc mcview;

.include <bsd.port.mk>
#EOF
