#
# $Id$
#
PORTNAME=	cfengine
PORTVERSION=	3.9.1
# XXX Remember to update files/patch-configure.am with any new version number.
CATEGORIES=	sysutils
MASTER_SITES=	https://s3.amazonaws.com/cfengine-package-repos/tarballs/

MAINTAINER=	cy@FreeBSD.org
COMMENT=	Systems administration tool for networks

LIB_DEPENDS+=	libyaml.so:text/libyaml
LIB_DEPENDS+=	libcurl.so:net/libcurl
LIB_DEPENDS+=	libpcre.so:text/libpcre
#LIB_DEPENDS+=	libpq.so:data/postgresq
LIB_DEPENDS+=	liblmdb.so:text/libyaml
LIB_DEPENDS+=	libintl.so:devel/gettext

FETCH_BEFORE_ARGS=	-o ${DISTDIR}/${DISTFILES}

USE_RC_SUBR=	cf-execd cf-serverd cf-monitord

MAKE_JOBS_UNSAFE=	yes
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USES=		gmake shebangfix #autoreconf:build libtool
SHEBANG_FILES=	examples/remake_outputs.pl
CFLAGS+=	-Wno-return-type
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
# EXAMPLESDIR=	${PREFIX}/share/examples/cfengine3
DOCSDIR=	${PREFIX}/share/doc/cfengine
MAKE_ENV=	EXPLICIT_VERSION=${PORTVERSION}
CONFIGURE_ENV=	EXPLICIT_VERSION=${PORTVERSION}
CONFIGURE_ARGS+= --docdir=${DOCSDIR}
CONFIGURE_ARGS+= --htmldir=${DOCSDIR}/html
CONFIGURE_ARGS+= --libexecdir=${PREFIX}/libexec
CONFIGURE_ARGS+= --libdir=${PREFIX}/libexec
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --with-workdir=/var/cfengine

CONFIGURE_ARGS+= --with-pcre=${LOCALBASE}
CONFIGURE_ARGS+= --with-lmdb=${LOCALBASE}

CONFIGURE_ARGS+= --enable-fhs
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS+= --without-postgresql
CONFIGURE_ARGS+= --without-mysql

.include <bsd.port.mk>
#EOF

