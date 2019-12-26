
PORTNAME=	protobuf
PORTVERSION=	2.6.1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	lib

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Data interchange format library


BUILD_DEPENDS+=	autoconf:devel/autoconf
BUILD_DEPENDS+=	automake:devel/automake


CFLAGS+=	-DGOOGLE_PROTOBUF_NO_RTTI
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
ONLY_FOR_ARCHS=	amd64 armv6 i386
PATHFIX_MAKEFILEIN=	Makefile.am
TEST_TARGET=	check
USE_CSTD=	c99	# for audio/clementine-player support
USE_LDCONFIG=	yes
USES=		gmake tar:bzip2

GH_ACCOUNT=	google
USE_GITHUB=	yes

post-patch:
	cd ${WRKSRC} && autoreconf -i

.include <bsd.port.mk>
#EOF
