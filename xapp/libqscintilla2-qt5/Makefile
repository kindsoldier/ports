# $FreeBSD: head/devel/qscintilla2-qt5/Makefile 531396 2020-04-11 05:04:40Z lbartoletti $

PORTNAME=	qscintilla2-qt5
PORTVERSION=	${QSCI2_VERSION}
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITES_QSCI2}
DISTNAME=	${QSCI2_DISTNAME}
PKGNAMEPREFIX= lib

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 port of the Scintilla C++ editor class

LIB_DEPENDS+= libQt5Core.so:xapp/libqt5-base
LIB_DEPENDS+= libQt5Gui.so:xapp/libqt5-base
LIB_DEPENDS+= libQt5Widgets.so:xapp/libqt5-base

USES=		compiler:c++11-lang gmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

BUILD_WRKSRC=		${WRKSRC}/Qt4Qt5
CONFIGURE_WRKSRC=	${BUILD_WRKSRC}
INSTALL_WRKSRC=		${BUILD_WRKSRC}

QSCI2_VERSION=		2.11.4
QSCI2_DISTNAME=		QScintilla-${QSCI2_VERSION}

DESTDIRNAME=    INSTALL_ROOT

do-configure:
	cd ${BUILD_WRKSRC} && qmake .


.include <bsd.port.mk>
