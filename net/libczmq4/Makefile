# $FreeBSD: head/net/czmq4/Makefile 479924 2018-09-17 11:22:26Z rene $

PORTNAME=	czmq
DISTVERSIONPREFIX=	v
DISTVERSION=	4.1.1
CATEGORIES=	net
PKGNAMEPREFIX=	lib

MAINTAINER=	ports@FreeBSD.org
COMMENT=	High-level C Binding for ZeroMQ (Version 4)

#BUILD_DEPENDS=	asciidoc:textproc/asciidoc \
#		xmlto:textproc/xmlto
LIB_DEPENDS=	libzmq.so:net/libzmq4

USES=		autoreconf libtool pkgconfig shebangfix gmake
GNU_CONFIGURE=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	zeromq
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

SHEBANG_FILES=	doc/mkman mkdoc model/chkopts.pl model/rename_class

# uuid_CFLAGS and uuid_LIBS required
# to avoid conflicts with misc/e2fsprogs-libuuid
CONFIGURE_ARGS=	uuid_CFLAGS="-I/usr/include ${CFLAGS}"
CONFIGURE_ARGS+= uuid_LIBS="-lc"
CONFIGURE_ARGS+= --with-libzmq=${LOCALBASE}
CONFIGURE_ARGS+= --with-pkgconfigdir=${LOCALBASE}/lib/pkgconfig
CONFIGURE_ARGS+= --enable-drafts="yes"
#CONFIGURE_ARGS+= --with-docs="yes"

MAKE_ENV=	V=1
CPPFLAGS+=	-Wno-error

.include <bsd.port.mk>
