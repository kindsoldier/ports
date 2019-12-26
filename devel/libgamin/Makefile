#
# $Id$
#
PORTNAME=	gamin
PORTVERSION=	0.1.10
CATEGORIES?=	devel
MASTER_SITES=	http://www.gnome.org/~veillard/gamin/sources/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	A file and directory monitoring system

LIB_DEPENDS+=	libintl.so:devel/gettext
#LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre


GNU_CONFIGURE=	yes
USES+=		gmake
USE_LDCONFIG=	yes
CONFIGURE_ARGS+= --with-html-dir=${PREFIX}/share/doc
CONFIGURE_ARGS+= --without-python
CONFIGURE_ARGS+= --program-transform-name=""
CONFIGURE_ARGS+= --disable-server

CFLAGS+=	-I${LOCALBASE}/include ${PTHREAD_CFLAGS}
CONFIGURE_ENV=	CPPFLAGS="${CFLAGS} -DHAVE_LINUX" 
CONFIGURE_ENV+=	LDFLAGS="-L${LOCALBASE}/lib ${PTHREAD_LIBS}"

CONFLICTS=	fam-[0-9]*

#CPPFLAGS+=	-DUSE_GAMIN_POLLER=1

post-patch:
	${REINPLACE_CMD} "s|/etc|${PREFIX}/etc|g" ${WRKSRC}/server/gam_conf.c

#post-install:
#	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
#EOF
