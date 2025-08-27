#
# $Id$
#
PORTNAME=	unixODBC
PORTVERSION=	2.3.4
CATEGORIES=	databases
MASTER_SITES=	ftp://ftp.unixodbc.org/pub/unixODBC/
#PKGNAMEPREFIX=	lib

MAINTAINER=	ports@FreeBSD.org
COMMENT=	ODBC library suite for Unix

GNU_CONFIGURE=	yes
USE+=		gmake
CONFIGURE_ENV=	ac_cv_header_msql_h=no
CONFIGURE_ARGS=	--enable-static --enable-shared
#CONFIGURE_ARGS+= --enable-iconv
CONFIGURE_ARGS+= --enable-readline
CONFIGURE_ARGS+= --enable-threads
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I${LOCALBASE}/include

INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e 's|\.ini$$|.ini.sample|' ${WRKSRC}/Makefile.in

.include <bsd.port.pre.mk>

.if (${OSVERSION} > 1100000)
LIB_DEPENDS+=	libreadline.so:devel/libreadline
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
.endif

.include <bsd.port.post.mk>
#EOF
