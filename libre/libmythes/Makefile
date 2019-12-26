#
# $Id$
#
PORTNAME=	mythes
PORTVERSION=	1.2.4
CATEGORIES=	textproc
MASTER_SITES=	SF/hunspell/MyThes/${PORTVERSION}/
DIST_SUBDIR=	${PORTNAME}
PKGNAMEPREFIX=	lib

MAINTAINER=	office@FreeBSD.org
COMMENT=	Simple thesaurus library

LIB_DEPENDS=	libhunspell.so:text/hunspell

#USES=	libtool pathfix pkgconfig shebangfix
SHEBANG_FILES=	th_gen_idx.pl
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

GNU_CONFIGURE=	yes
USES+=		gmake

FILES+= ${WRKSRC}/Makefile.in
FILES+= ${WRKSRC}/*.pc.in


post-patch:
	${REINPLACE_CMD} -e 's,libmythes-1.2,libmythes,g' ${FILES}

.include <bsd.port.mk>
#EOF
