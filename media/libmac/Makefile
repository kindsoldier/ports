#
# $ID$
#
#PORTNAME=	mac
PKGNAMEPREFIX= lib
#PORTVERSION=	3.99.4.5
CATEGORIES=	audio
MASTER_SITES+=	http://freshgen.googlecode.com/files/
MASTER_SITES+=	http://supermmx.org/resources/linux/mac/ CENKES
#DISTNAME=	${PORTNAME}-3.99-u4-b5

PORTNAME=	mac
PORTVERSION=	3.99.4.5.7
#CATEGORIES=	audio
MASTER_SITES+=	http://etree.org/shnutils/shntool/support/formats/ape/unix/3.99-u4-b5-s7/
MASTER_SITES+=	http://freebsd.nsu.ru/distfiles/
DISTNAME=	${PORTNAME}-3.99-u4-b5-s7



MAINTAINER=	onborodin@gmail.com
COMMENT=	Monkey's Audio lossless codec

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
#CONFIGURE_ARGS=	--disable-static

.include <bsd.port.pre.mk>

.if ${ARCH} == "i386" || ${ARCH} == "amd64"
BUILD_DEPENDS+=	yasm:devel/yasm
.endif

post-patch:
	${REINPLACE_CMD} -e 's|-O3||' ${WRKSRC}/configure

post-install:
	cd ${STAGEDIR}${PREFIX}/lib && ${LN} -sf libmac.so.2 libmac.so


.include <bsd.port.post.mk>
#EOF
