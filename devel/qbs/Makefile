# $FreeBSD: head/devel/qbs/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	qbs
DISTVERSIONPREFIX=	src-
DISTVERSION=	1.12.2
CATEGORIES=	devel
MASTER_SITES=	QT/official_releases/${PORTNAME}/${PORTVERSION}
DIST_SUBDIR=	KDE/Qt/qbs

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qbs Build Suite

RUN_DEPENDS=    libqt5-base>=${QT5_VERSION}:xapp/libqt5-base
BUILD_DEPENDS=    libqt5-base>=${QT5_VERSION}:xapp/libqt5-base

USES=		compiler:c++11-lib python:run  shebangfix
USE_LDCONFIG=	yes

SHEBANG_FILES=	src/3rdparty/python/bin/dmgbuild

QMAKE_ARGS+=	CONFIG+=qbs_disable_rpath
QMAKE_ARGS+=	CONFIG+=qbs_enable_project_file_updates
QMAKE_SOURCE_PATH= ${WRKSRC}/qbs.pro

ALL_TARGET=	all
#INSTALL_TARGET=	install
DESTDIRNAME=    INSTALL_ROOT


BUILD_WRKSRC=${WRKSRC}/build 
INSTALL_WRKSRC=${WRKSRC}/build

do-configure:
	${MKDIR} ${WRKSRC}/build
	cd ${WRKSRC}/build && \
	    ${LOCALBASE}/bin/qmake ${QMAKE_ARGS} ${QMAKE_SOURCE_PATH}

do-build:
	cd ${WRKSRC}/build && \
	    ${LOCALBASE}/bin/gmake

post-install:
	${RM} ${STAGEDIR}${DATADIR}/modules/bundle/update-specs.sh

.include <bsd.port.mk>
