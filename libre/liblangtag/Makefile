#
# $Id$
#
PORTNAME=	liblangtag
PORTVERSION=	0.6.2
CATEGORIES=	devel textproc
MASTER_SITES=	https://bitbucket.org/tagoh/liblangtag/downloads/ LOCAL/jkim

MAINTAINER=	office@FreeBSD.org
COMMENT=	Interface library to access tags for identifying languages

LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=	libxml2.so:text/libxml2


GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES+=		gmake
USES+=		tar:bzip2
INSTALL_TARGET=	install-strip
CPPFLAGS+=	-I${LOCALBASE}/include

CONFIGURE_ARGS=	--disable-introspection

post-patch:
	${REINPLACE_CMD} -e '/SUBDIRS/s, docs , ,' ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's,libxml-2.0,libxml2,' ${WRKSRC}/configure


.include <bsd.port.mk>
#EOF
