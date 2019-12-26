# Created by: Ilya Bakulin <webmaster@kibab.com>
# $FreeBSD: head/net/wpa_gui/Makefile 426297 2016-11-17 20:08:48Z jrm $

PORTNAME=	wpa_gui
PORTVERSION=	2.7
CATEGORIES=	net
MASTER_SITES+=	http://w1.fi/releases/
MASTER_SITES+=	http://partmedia.users.sourceforge.net/dist/:icons
MASTER_SITES+=	LOCAL/jgh/net/${PORTNAME}/:icons
DISTNAME=	wpa_supplicant-${PORTVERSION}
DISTFILES=	${DISTNAME}.tar.gz wpa-gui-icons.tar.gz:icons

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Qt-based frontend for wpa_supplicant

LIB_DEPENDS+=	libQt3Support.so:xapp/libqt4
LIB_DEPENDS+=	libQtCore.so:xapp/libqt4
LIB_DEPENDS+=	libQtGui.so:xapp/libqt4
LIB_DEPENDS+=	libQtNetwork.so:xapp/libqt4
LIB_DEPENDS+=	libQtSql.so:xapp/libqt4
LIB_DEPENDS+=	libQtXml.so:xapp/libqt4


PATCH_WRKSRC=	${WRKDIR}/${DISTNAME}
WRKSRC_SUBDIR=	wpa_supplicant/wpa_gui-qt4

SUB_FILES=	pkg-message

HAS_CONFIGURE=	yes
QMAKE=	qmake-qt4
USES+= gmake


post-patch:
	${REINPLACE_CMD} -e \
		'/^Exec/s|=.*|=${PREFIX}/sbin/wpa_gui|' \
		${WRKSRC}/wpa_gui.desktop
	${REINPLACE_CMD} -e \
		'/^Name/s|=.*|=WPA GUI|' \
		${WRKSRC}/wpa_gui.desktop

do-configure:
	cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} ${QMAKE} -unix PREFIX=${PREFIX} ${PORTNAME}.pro

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin
	${MKDIR} ${STAGEDIR}${PREFIX}/share/applications
	${INSTALL_DATA} ${WRKSRC}/wpa_gui.desktop ${STAGEDIR}${PREFIX}/share/applications
#	${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/16x16/apps
#	${INSTALL_DATA} ${WRKDIR}/icons/hicolor/16x16/apps/wpa_gui.png \
#		${STAGEDIR}${PREFIX}/share/icons/hicolor/16x16/apps
	${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/scalable/apps
	${INSTALL_DATA} ${WRKSRC}/icons/wpa_gui.svg \
		 ${STAGEDIR}${PREFIX}/share/icons/hicolor/scalable/apps/wpa_gui.svg
	${GZIP_CMD} < ${WRKSRC}/../doc/docbook/wpa_gui.8 > ${STAGEDIR}${PREFIX}/man/man8/wpa_gui.8.gz

	${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/scalable/apps
	${INSTALL_DATA} ${WRKSRC}/icons/${PORTNAME}.svg ${STAGEDIR}${PREFIX}/share/icons/hicolor/scalable/apps
.for S in 16 24 32 48 128
	${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/${S}x${S}/apps
	${INSTALL_DATA} ${FILESDIR}/${PORTNAME}-${S}.png ${STAGEDIR}${PREFIX}/share/icons/hicolor/${S}x${S}/apps/${PORTNAME}.png
.endfor
	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${WRKSRC}/icons/wpa_gui.svg ${STAGEDIR}${PREFIX}/share/pixmaps

.include <bsd.port.mk>
#EOF
