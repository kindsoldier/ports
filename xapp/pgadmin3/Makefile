#
# $Id$
#
PORTNAME=	pgadmin3
PORTVERSION=	1.22.2
CATEGORIES=	databases
MASTER_SITES=	PGSQL
MASTER_SITE_SUBDIR=	pgadmin3/release/v${PORTVERSION}/src
DIST_SUBDIR=	postgresql

MAINTAINER= homeunix7@gmail.com
COMMENT=	PostgreSQL database design and management system


LIB_DEPENDS+=	libwx_baseu.so:xapp/libwxWidget
USES+=	pgsql

RUN_DEPENDS+=	gtk-update-icon-cache:gnome/libgtk2
RUN_DEPENDS+=	update-desktop-database:xfce/desktop-file-utils


#MAKE_JOBS_SAFE=	yes
USES+=		gmake compiler:c++11-lib
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="${PTHREAD_LIBS}"
CPPFLAGS+=	${PTHREAD_CFLAGS}
CONFIGURE_ARGS+= --with-wx-version=2.8 --enable-databasedesigner
CONFIGURE_ARGS+= --with-pgsql=${LOCALBASE}
LDFLAGS+= -L${LOCALBASE}/lib
CXXFLAGS+=	-Wno-c++11-narrowing


post-patch:
	${REINPLACE_CMD} -e 's,/usr/bin/xterm,${LOCALBASE}/bin/xterm,' ${WRKSRC}/plugins.d/plugins.ini
	${REINPLACE_CMD} -e 's,/bin/bash,/bin/sh,' ${WRKSRC}/pgadmin/ver_svn.sh


post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${FILESDIR}/pgadmin3.png ${STAGEDIR}${PREFIX}/share/pixmaps
	${MKDIR} ${STAGEDIR}${PREFIX}/share/applications
	${INSTALL_DATA} ${FILESDIR}/pgadmin3.desktop ${STAGEDIR}${PREFIX}/share/applications

.include <bsd.port.mk>
#EOF
