# Created by: Kris Moore <kris@pcbsd.org>
# $FreeBSD: head/devel/qtcreator/Makefile 497360 2019-03-30 21:05:21Z tcberner $

PORTNAME=	qtcreator
DISTVERSION=	4.8.2
CATEGORIES=	devel
MASTER_SITES=	QT/official_releases/qtcreator/${DISTVERSION:R}/${DISTVERSION}
DISTNAME=	qt-creator-opensource-src-${DISTVERSION}
DIST_SUBDIR=	KDE/Qt/qtcreator

MAINTAINER=	kde@FreeBSD.org
COMMENT=	C++ and QML IDE for Qt development

RUN_DEPENDS+=    libqt5-base>=${QT5_VERSION}:xapp/libqt5-base
RUN_DEPENDS+=    qbs>=0:devel/qbs

BUILD_DEPENDS=   ${RUN_DEPENDS}

USES=		compiler:c++14-lang python:2.7 shebangfix tar:xz gmake
USE_LDCONFIG=	${LOCALBASE}/lib/${PORTNAME}

CXXFLAGS_powerpc=	-maltivec
CXXFLAGS_powerpc64=	-maltivec

#QMAKE_ARGS+=	QBS_INSTALL_DIR=${PREFIX} CONFIG+=qbs_enable_project_file_updates

# Enforce installation to ${PREFIX}.
QMAKE_ARGS+=	QTC_PREFIX=${PREFIX}
QMAKE_ARGS+=	DEFINES+=_GLIBCXX_USE_C99

#DESKTOP_ENTRIES="Qt Creator" "" "QtProject-qtcreator" \
#		"${PREFIX}/bin/${PORTNAME}" "Development;Qt;" true

BROKEN_aarch64=		fails to build: invokes x86 asm

ALL_TARGET=		all
INSTALL_TARGET=		install

DESTDIRNAME=    INSTALL_ROOT


SHEBANG_FILES=		tests/system/tools/objectsToTable.py \
			tests/system/tools/findUnusedObjects.py \
			share/qtcreator/templates/wizards/files/python/file.py \
			share/qtcreator/scripts/openTerminal.py \
			src/libs/3rdparty/botan/configure.py \
			src/libs/qmljs/parser/changeLicense.py \
			src/libs/qt-breakpad/qtbreakpadsymbols \
			src/tools/icons/export.py \
			scripts/packagePlugins.py \
			scripts/ninjawrapper.py \
			scripts/checkInstalledFiles.py \
			scripts/generateClangTidyChecks.py \
			scripts/createDistPackage.py \
			scripts/createDevPackage.py \
			scripts/deployqt.py \
			scripts/dependencyinfo.py \
			scripts/createSourcePackages.py \
			scripts/uichanges.py \
			scripts/makedmg.py

.include <bsd.port.pre.mk>

post-patch:
	${REINPLACE_CMD} -e 's|/usr/bin/gnuplot|${LOCALBASE}/bin/gnuplot|' \
		${WRKSRC}/share/qtcreator/debugger/dumper.py
	${REINPLACE_CMD} -e 's|/usr/bin/ant|${LOCALBASE}/bin/ant|' \
		${WRKSRC}/src/plugins/android/androidsettingswidget.cpp
	${REINPLACE_CMD} -e 's|python|${PYTHON_CMD}|g' \
		${WRKSRC}/qtcreator.pro ${WRKSRC}/src/libs/botan/botan.pro

do-configure:
	cd ${WRKSRC} && qmake ${QMAKE_ARGS}

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/applications
	${INSTALL} ${WRKSRC}/dist/org.qt-project.qtcreator.desktop \
	    ${STAGEDIR}${PREFIX}/share/applications/qtcreator.desktop
#	${MKDIR} ${STAGEDIR}${PREFIX}/share/mime/application
#	${INSTALL} ${WRKSRC}/dist/org.qt-project.qtcreator.appdata.xml \
#	    ${STAGEDIR}${PREFIX}/share/mime/application/qtcreator.appdata.xml

.include <bsd.port.post.mk>
