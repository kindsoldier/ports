# $FreeBSD: head/misc/qt5ct/Makefile 497193 2019-03-29 20:08:55Z tcberner $

PORTNAME=	qt5ct
DISTVERSION=	0.38
CATEGORIES=	misc
MASTER_SITES=	SF/${PORTNAME}

MAINTAINER=	tcberner@FreeBSD.org
COMMENT=	Qt 5 configuration tool

RUN_DEPENDS=    libqt5-base>=${QT5_VERSION}:xapp/libqt5-base
BUILD_DEPENDS=    libqt5-base>=${QT5_VERSION}:xapp/libqt5-base


USES=		compiler:c++11-lang gmake tar:bz2
USE_LDCONFIG=	yes

DESTDIRNAME=    INSTALL_ROOT

QMAKE_ARGS=     PREFIX=${PREFIX}

do-configure:
	cd ${WRKSRC} && ${LOCALBASE}/bin/qmake ${QMAKE_ARGS}


.include <bsd.port.mk>
