#
# $Id: Makefile 2636 2009-09-30 12:09:37Z root $
#
PORTNAME=	php${PORTVERSION:R:S/.//g}-mod-${MODULE_NAME}
PORTVERSION=	7.2.24
CATEGORIES=	lang devel www
MASTER_SITES=	${MASTER_SITE_PHP}
MASTER_SITE_SUBDIR=	distributions
DISTNAME=	php-${PORTVERSION}

MASTER_SITES+=	http://dk.php.net/%SUBDIR%/
MASTER_SITES+=	http://de.php.net/%SUBDIR%/
MASTER_SITES+=	http://es.php.net/%SUBDIR%/
MASTER_SITES+=	http://fi.php.net/%SUBDIR%/
MASTER_SITES+=	http://fr.php.net/%SUBDIR%/
MASTER_SITES+=	http://gr.php.net/%SUBDIR%/
MASTER_SITES+=	http://it.php.net/%SUBDIR%/
MASTER_SITES+=	http://jp.php.net/%SUBDIR%/
MASTER_SITES+=	http://se.php.net/%SUBDIR%/
MASTER_SITES+=	http://uk.php.net/%SUBDIR%/
MASTER_SITES+=	http://us2.php.net/%SUBDIR%/
MASTER_SITES+=	http://br.php.net/%SUBDIR%/
MASTER_SITES+=	http://cn.php.net/%SUBDIR%/

MASTER_SITE_SUBDIR=	distributions

MAINTAINER=	onborodin@gmail.com
COMMENT=	PHP Scripting Language (Apache Module and CLI)

BUILD_DEPENDS+=	php:lang/php${PORTVERSION:R:S/.//g}
#RUN_DEPENDS
#BUILD_DEPENDS+= ${RUN_DEPENDS}


EXTRACT_AFTER_ARGS=	${DISTNAME}/ext/${MODULE_NAME}
WRKSRC=	${WRKDIR}/${DISTNAME}/ext/${MODULE_NAME}

EXTRACT_AFTER_ARGS=	${DISTNAME}/ext/${MODULE_NAME}

USES+=		tar:xz gmake
GNU_CONFIGURE= 	yes
CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/php
LDFLAGS=	-L${LOCALBASE}/lib

MODULE_NAME=	calendar
DESTDIRNAME=	INSTALL_ROOT
#EXTDIR
#INCLUDEDIR

pre-configure:
	cd ${WRKSRC} && ${CONFIGURE_ENV} phpize .

post-install:
	${RM} -f  ${TMPPLIST}
	cd ${STAGEDIR}${PREFIX} && ${FIND} lib/php -type f >>  ${TMPPLIST}
	${MKDIR} ${STAGEDIR}${PREFIX}/include/php
	cd ${STAGEDIR}${PREFIX} && ${FIND} include/php -type f >>  ${TMPPLIST}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -ds lib/php -type d | ${SED} -e 's,^,@dirrm ,' >>  ${TMPPLIST}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -ds include/php -type d | ${SED} -e 's,^,@dirrm ,' >>  ${TMPPLIST}

.include <bsd.port.mk>
#EOF
