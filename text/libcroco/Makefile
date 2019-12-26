#
# $Id: Makefile 2434 2009-09-14 20:32:46Z root $
#
PORTNAME=	libcroco
PORTVERSION=	0.6.2
CATEGORIES=	textproc gnome
MASTER_SITES=	${MASTER_SITE_GNOME}
MASTER_SITE_SUBDIR=	sources/${PORTNAME}/${PORTVERSION:R}

MAINTAINER=	onborodin@gmail.com
COMMENT=	CSS2 parsing library

LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libglib.so:devel/libglib
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libpcre.so:text/libpcre
LIB_DEPENDS+=	libxml2.so:text/libxml2


USES+=		tar:bzip2
GNU_CONFIGURE=	yes
USES+=		gmake
INSTALLS_SHLIB=	yes
CFLAGS+= -I${LOCALBASE}/include
LDFLAGS+= -L${LOCALBASE}/lib
MAKE_ARGS+= program_transform_name=''
INSTALLS_SHLIB=	yes

post-patch:
	${REINPLACE_CMD} -e 's/^dnl /# /' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF
