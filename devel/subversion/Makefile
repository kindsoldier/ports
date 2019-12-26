#
# $Id: Makefile 2711 2009-11-05 17:43:42Z root $
# $Author: root $ $URL: file:///usr2/svn/ports5/devel/subversion/Makefile $
#
PORTNAME=	subversion
PORTVERSION=	1.12.0 #1.11.1
MASTER_SITES+=	http://apache.mirrors.tds.net/subversion/
MASTER_SITES+=  http://apache.claz.org/subversion/
#MASTER_SITES=	http://subversion.tigris.org/downloads/
MASTER_SITES+=	http://www.sai.msu.su/apache/subversion/
CATEGORIES=	devel

MAINTAINER=	onborodin@gmail.com
COMMENT=	Version control system

LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libapr.so:devel/libapr
LIB_DEPENDS+=	libaprutil.so:devel/libapr-utils
LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libserf.so:net/libserf

LIB_DEPENDS+=	libutf8proc.so:text/libutf8proc
LIB_DEPENDS+=	liblz4.so:arch/liblz4


#EXTRA_PATCHES+=	${PATCHDIR}/extra-patch-fbsd-template
#EXTRA_PATCHES+=	${PATCHDIR}/extra-patch-svnserve-wrapper


USES+=		tar:bzip2
GNU_CONFIGURE=	yes
USES+=		gmake perl5
CONFIGURE_ARGS+= --prefix=${PREFIX}
CONFIGURE_ARGS+= --without-swig
CONFIGURE_ARGS+= --without-jikes
CONFIGURE_ARGS+= --with-sqlite=${LOCALBASE}
CONFIGURE_ARGS+= --with-apr=${LOCALBASE}/bin/apr-config
CONFIGURE_ARGS+= --with-apr-util=${LOCALBASE}/bin/apu-config
CONFIGURE_ARGS+= --with-apxs=no
CONFIGURE_ARGS+= --with-serf
CONFIGURE_ARGS+= --without-gpg-agent
CONFIGURE_ARGS+= --without-gnome-keyring


CONFIGURE_ARGS+= --mandir=${PREFIX}/man
INSTALLS_SHLIB=	yes
CFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/serf -fPIC
LDFLAGS+=	-L${LOCALBASE}/lib

BUILD_TARGET=	all swig-pl
INSTALL_TARGET=	install install-swig-pl

USES+=			shebangfix python:2.7,env perl5
python_OLD_CMD+=	"/bin/env python"
SHEBANG_REGEX=		./tools/.*

MAKE_ARGS+= MAKE=${GMAKE}

DEFAULT_SVN_REPOS= /var/db/svn

SUB_LIST+= DEFAULT_SVN_REPOS="${DEFAULT_SVN_REPOS}"
PKGMESSAGE=	${WRKDIR}/pkg-message
SUB_FILES+= 	pkg-message
USE_RC_SUBR+=	svnserve.sh

post-patch:
	${REINPLACE_CMD} -e 's|-1.la|.la|g' ${WRKSRC}/build-outputs.mk
	${REINPLACE_CMD} -e 's|subversion-1|subversion|g' ${WRKSRC}/build-outputs.mk
	${REINPLACE_CMD} -e 's|/subversion-1|/subversion|g' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's|aprutil-1|aprutil|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|serf-1|serf|g' ${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|glib-2.0|glib|g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e 's|gnome-keyring-1|gnome-keyring|g' ${WRKSRC}/configure

	${REINPLACE_CMD} -e 's,-@SVN_APR_MAJOR_VERSION@,,' ${WRKSRC}/*/*/*.pc.in


.include <bsd.port.mk>
#EOF
