#
# $Id$
#
PORTNAME=	ldns
PORTVERSION=	1.7.0
CATEGORIES=	dns
MASTER_SITES=	http://www.nlnetlabs.nl/downloads/ldns/ LOCAL/ehaupt
PKGNAMEPREFIX=	lib

MAINTAINER=	jaap@NLnetLabs.nl
COMMENT=	Library for programs conforming to DNS RFCs and drafts

GNU_CONFIGURE=	yes
USES=		gmake
ALL_TARGET=	all
CONFIGURE_ARGS+= --enable-rrtype-ninfo
CONFIGURE_ARGS+= --enable-rrtype-rkey
CONFIGURE_ARGS+= --enable-rrtype-cds
CONFIGURE_ARGS+= --enable-rrtype-uri
CONFIGURE_ARGS+= --enable-rrtype-ta
CONFIGURE_ARGS+= --disable-dane-ta-usage

CONFIGURE_ARGS+= --with-trust-anchor=/var/unbound/root.key

CONFIGURE_ARGS+= --with-drill
CONFIGURE_ARGS+= --with-examples

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/pkgconfig
	${INSTALL_DATA} ${WRKSRC}/packaging/libldns.pc ${STAGEDIR}${PREFIX}/lib/pkgconfig


.include <bsd.port.mk>
#EOF
