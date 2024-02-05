PORTNAME=	shadowsocks
DISTVERSIONPREFIX=	v
DISTVERSION=	3.3.5
CATEGORIES=	net

MAINTAINER=	xiaoding+freebsd@xiaoding.org
COMMENT=	Lightweight tunnel proxy which can help you get through firewalls
WWW=		https://github.com/shadowsocks/shadowsocks-libev


LIB_DEPENDS=	libev.so:devel/libev \
		libmbedcrypto.so:crypto/libmbedtls \
		libpcre.so:text/libpcre \
		libsodium.so:crypto/libsodium \
		libcares.so:net/libcares

USES=		autoreconf compiler:c11 gmake pathfix
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-shared
USE_GITHUB=	yes
GH_PROJECT=	shadowsocks-libev
GH_ACCOUNT=	shadowsocks
GH_TUPLE=	shadowsocks:libbloom:437e1ad:libbloom/libbloom \
		shadowsocks:libcork:074e074:libcork/libcork \
		shadowsocks:ipset:3ea7fe3:libipset/libipset
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

#OPTIONS_DEFINE=	BASH DOCS ZSH
#OPTIONS_SUB=	yes

#DOCS_BUILD_DEPENDS=	asciidoc:textproc/asciidoc \
#		xmlto:textproc/xmlto
CONFIGURE_ARGS+= --disable-documentation

USE_RC_SUBR=	shadowsocks

post-install:
	${MKDIR} ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${WRKSRC}/debian/config.json ${STAGEDIR}${ETCDIR}/config.json.sample


.include <bsd.port.mk>
