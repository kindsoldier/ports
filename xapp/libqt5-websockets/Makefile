# $FreeBSD: head/devel/qt5-linguisttools/Makefile 492793 2019-02-12 17:43:00Z tcberner $

PORTNAME=	qt5-websockets
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel
MASTER_SITES+=  http://download.qt.io/official_releases/qt/${DISTVERSION:R}/${DISTVERSION}/submodules/
DISTNAME=       qtwebsockets-everywhere-src-${PORTVERSION}
PKGNAMEPREFIX=  lib


RUN_DEPENDS=    libqt5-base>=${QT5_VERSION}:xapp/libqt5-base
BUILD_DEPENDS=  libqt5-base>=${QT5_VERSION}:xapp/libqt5-base

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt tools

USES=		compiler:c++11-lang gmake tar:xz
DESTDIRNAME=    INSTALL_ROOT

do-configure:
	cd ${WRKSRC} && ${LOCALBASE}/bin/qmake

.include <bsd.port.mk>
