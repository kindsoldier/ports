#
# $$Id$
#
PORTNAME=	zint
PORTVERSION=	2.4.3
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}/

MAINTAINER= homeunix7@gmail.com
COMMENT=	Zint Barcode Generator

LICENSE=	GPLv3

#LIB_DEPENDS=	png15:graphics/png
LIB_DEPENDS+=	libQt3Support.so:xapp/libqt4
LIB_DEPENDS+=	libQtCore.so:xapp/libqt4
LIB_DEPENDS+=	libQtGui.so:xapp/libqt4
LIB_DEPENDS+=	libQtNetwork.so:xapp/libqt4
LIB_DEPENDS+=	libQtSql.so:xapp/libqt4
LIB_DEPENDS+=	libQtXml.so:xapp/libqt4


USES+=	cmake
USE_LDCONFIG=	yes
#USE_QT4=	gui xml qmake_build uic_build moc_build rcc_build designer
MAKE_JOBS_SAFE=	yes

#DESKTOP_ENTRIES="Zint" "Barcode generator" "" "zint-qt" "" false

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/application
	${INSTALL_DATA} ${WRKSRC}/zint-qt.desktop ${STAGEDIR}${PREFIX}/share/applications
	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${WRKSRC}/zint.png ${STAGEDIR}${PREFIX}/share/pixmaps/zint.png

.include <bsd.port.mk>
#EOF
