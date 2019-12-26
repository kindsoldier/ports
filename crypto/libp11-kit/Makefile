#
# $Id$
#
PORTNAME=	p11-kit
PORTVERSION=	0.23.2
CATEGORIES=	security devel
MASTER_SITES=	http://p11-glue.freedesktop.org/releases/
PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	Library for loading and enumerating of PKCS\#11 modules

LIB_DEPENDS+=	libtasn1.so:crypto/libtasn1
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libiconv.so:text/libiconv


GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --enable-debug=no
CONFIGURE_ARGS+= --without-libffi
CONFIGURE_ARGS+= --disable-doc
CONFIGURE_ARGS+=--with-trust-paths=${LOCALBASE}/etc/ca-bundle.crt
MAKE_ENV=	exampledir=${EXAMPLESDIR}
INSTALL_TARGET=	install-strip
USES+=		gmake

post-patch:
	

pre-configure:
	${REINPLACE_CMD} -e \
	's|exampledir = $$(p11_system_config)|exampledir = ${EXAMPLESDIR}|' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF

