# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/dns/libidn2/Makefile 489529 2019-01-06 20:39:43Z sunpoet $

PORTNAME=	libidn2
PORTVERSION=	2.1.0
CATEGORIES=	dns
MASTER_SITES=	GNU/libidn

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Implementation of IDNA2008 internationalized domain names

LIB_DEPENDS=	libunistring.so:text/libunistring
LIB_DEPENDS=	libiconv.so:text/libiconv

USES=		charsetfix gmake localbase

CONFIGURE_ARGS+= --disable-nls 
CONFIGURE_ARGS+= --with-libunistring-prefix=${LOCALBASE}
CONFIGURE_ARGS+= ac_cv_prog_RONN=${TRUE}
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

INFO=		libidn2

post-patch:
	@${REINPLACE_CMD} -e '/^TMPDIR = /d' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
