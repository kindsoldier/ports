#
# $Id$
#
PORTNAME=	rpm
PORTVERSION=	4.15.1
CATEGORIES=	archivers
MASTER_SITES=	http://ftp.rpm.org/releases/rpm-${PORTVERSION:R}.x/

MAINTAINER= homeunix7@gmail.com
COMMENT=	The RPM Package Manager

LIB_DEPENDS+= libbeecrypt.so:crypto/libbeecrypt
LIB_DEPENDS+= libdb48.so:data/libdb48
LIB_DEPENDS+= libiconv.so:text/libiconv
LIB_DEPENDS+= libintl.so:devel/gettext
LIB_DEPENDS+= libpopt.so:devel/libpopt

GNU_CONFIGURE=	yes
USES+=		gmake tar:bz2

CONFIGURE_ARGS+= --disable-openmp
CONFIGURE_ARGS+= --disable-python
CONFIGURE_ARGS+= --with-crypto=beecrypt
CONFIGURE_ARGS+= --without-lua

CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/db48
LDFLAGS+=	-L${LOCALBASE}/lib -ldb48

#PKGDEINSTALL=	${WRKDIR}/pkg-deinstall
#PKGINSTALL=	${WRKDIR}/pkg-install
#SUB_FILES+= 	pkg-install pkg-deinstall

#SUB_LIST+= 	LOCALSTATEDIR=${LOCALSTATEDIR}
#SUB_LIST+= 	PREFIX=${PREFIX}
#LOCALSTATEDIR=	/var

.include <bsd.port.mk>
#EOF
