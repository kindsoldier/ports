#
# $Id: Makefile 2493 2009-09-19 15:10:11Z root $
# $URL: file:///usr2/svn/ports5/lang/python25/Makefile $
#

PORTNAME=	python
PORTVERSION=	3.7.4
CATEGORIES=	lang python
MASTER_SITES=	PYTHON
MASTER_SITE_SUBDIR=	ftp/python/${PORTVERSION}
DISTNAME=	Python-${PORTVERSION}
DIST_SUBDIR=	python
PKGNAMESUFFIX=	37

MAINTAINER=	onborodin@gmail.com
COMMENT=	An interpreted object-oriented programming language

LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libffi.so:devel/libffi

GNU_CONFIGURE=	yes
INSTALLS_SHLIB=	yes

USES+=		autoreconf gmake tar:xz

CONFIGURE_ENV=	OPT="${CFLAGS}" SVNVERSION="echo freebsd"
MAKE_ENV=	VPATH="${PYTHON_WRKSRC}"

CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --with-system-expat

CONFIGURE_ARGS+= --with-threads
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS=	-pthread
LDFLAGS+=	-pthread
CONFIGURE_ARGS+= --with-system-ffi

DISABLED_EXTENSIONS=	_sqlite3 _tkinter _gdbm nis
CONFIGURE_ARGS+=	--without-ensurepip
CONFIGURE_ENV+=		OPT="" DISABLED_EXTENSIONS="${DISABLED_EXTENSIONS}"
INSTALL_TARGET=		altinstall

VERSION_SHORT= ${PORTVERSION:R}
OSVERSION_MAJOR=	${OSVERSION:C/([0-9]?[0-9])([0-9][0-9])[0-9]{3}/\1/}

PLIST_SUB=	VERSION=${PORTVERSION:R}
PLIST_SUB+= OSMAJOR=${OSVERSION:C/([0-9]*)[0-9]{5}/\1/}
PLIST_SUB+= TARGET=freebsd${OSVERSION_MAJOR}

post-patch:
	${REINPLACE_CMD} -e 's,SOVERSION=1.0,SOVERSION=1,' ${WRKSRC}/configure.ac
# disable the detection of includes and library from e2fsprogs-libuuid,
# which introduces hidden dependency and breaks build
	${REINPLACE_CMD} -e 's|uuid/uuid.h|ignore_&|' ${WRKSRC}/configure
	${REINPLACE_CMD} -e '/find_library_file/ s|uuid|ignore_&|' ${WRKSRC}/setup.py

.include <bsd.port.mk>
#EOF

