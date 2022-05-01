# Created by: Jin-Sih Lin <linpct@gmail.com>
# $FreeBSD: head/www/phalcon/Makefile 471257 2018-06-01 12:57:34Z joneum $

PORTNAME=	phalcon
DISTVERSIONPREFIX=	v
DISTVERSION=	3.4.2
CATEGORIES=	www
PKGNAMEPREFIX=	php${PHP_VER}-mod-


MAINTAINER=	linpct@gmail.com
COMMENT=	Phalcon PHP Framework written in C-language

PHP_VER= 71

BUILD_DEPENDS+=	php:lang/php${PHP_VER}
RUN_DEPENDS+=	php:lang/php${PHP_VER}


ONLY_FOR_ARCHS=		amd64 armv6 armv7 i386

#USES=		php:ext
#USE_PHP=	hash:build json:build pdo:build

USE_GITHUB=	yes
GH_ACCOUNT=	phalcon
GH_PROJECT=	c${PORTNAME}

USES+= gmake 
GNU_CONFIGURE= yes

CFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ARGS=	--enable-phalcon


.include <bsd.port.pre.mk>

PBITS=		${ARCH:S/amd64/64/:C/armv.*/32/:S/i386/32/:S/x86_64/64/}
WRKSRC_SUBDIR=	build/php${PHP_VER:C/.$//}/${PBITS}bits

#post-patch:
#.if ${PHP_VER} >= 70 && ${PBITS} == 32
#	${REINPLACE_CMD} -e 's| ZEPHIR_FASTCALL | |' ${WRKSRC}/phalcon.zep.c
#.endif

DESTDIRNAME=	INSTALL_ROOT

pre-configure:
	cd ${WRKSRC} && ${CONFIGURE_ENV} phpize .

post-install:
	${RM} -f  ${TMPPLIST}
	cd ${STAGEDIR}${PREFIX} && ${FIND} lib/php -type f >>  ${TMPPLIST}
	${MKDIR} ${STAGEDIR}${PREFIX}/include/php
	cd ${STAGEDIR}${PREFIX} && ${FIND} include/php -type f >>  ${TMPPLIST}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -ds lib/php -type d | ${SED} -e 's,^,@dir ,' >>  ${TMPPLIST}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -ds include/php -type d | ${SED} -e 's,^,@dir ,' >>  ${TMPPLIST}


.include <bsd.port.post.mk>
#EOF
