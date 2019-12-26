#
# $Id$
#
PORTNAME=	lyx
PORTVERSION=	2.1.4
CATEGORIES=	print editors
MASTER_SITES=	ftp://ftp.lyx.org/pub/lyx/stable/${PORTVERSION:R}.x/ \
		http://www-ftp.lip6.fr/ftp/pub/lyx/stable/${PORTVERSION:R}.x/ \
		ftp://gd.tuwien.ac.at/publishing/tex/lyx/stable/${PORTVERSION:R}.x/ \
		ftp://ftp.ntua.gr/pub/X11/LyX/stable/${PORTVERSION:R}.x/ \
		http://sunsite.icm.edu.pl/pub/unix/editors/lyx/stable/${PORTVERSION:R}.x/ \
		ftp://ftp.chg.ru/pub/X11/lyx/stable/${PORTVERSION:R}.x/

MAINTAINER=	rakuco@FreeBSD.org
COMMENT=	Document processor interfaced with LaTeX (nearly WYSIWYG)


#LIB_DEPENDS+=	libboost_regex.so:devel/libboost
LIB_DEPENDS+=	libaspell.so:text/aspell
LIB_DEPENDS+=	libenchant.so:text/libenchant
LIB_DEPENDS+=	libhunspell.so:text/hunspell

LIB_DEPENDS+=	libQtCore.so:xapp/libqt4
LIB_DEPENDS+=	libQtGui.so:xapp/libqt4

LIB_DEPENDS+=	libmythes.so:libre/libmythes

USES=		gmake perl5 python:27 tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-included-boost
CONFIGURE_ARGS+=	--with-included-mythes
CONFIGURE_ARGS+=	--with-extra-prefix=${LOCALBASE}

CONFIGURE_ARGS+=	--without-aspell
CONFIGURE_ARGS+=	--without-enchant
CONFIGURE_ARGS+=	--without-hunspell
LIBS+=		-L${LOCALBASE}/lib -liconv

.include <bsd.port.mk>
#EOF
