# Created by: Aron Schlesinger <as@bsdgroup.de>
# $FreeBSD: head/www/groupoffice/Makefile 443509 2017-06-13 16:13:42Z joneum $

PORTNAME=	groupoffice
PORTVERSION=	6.2.41
DISTVERSIONPREFIX=	com-
CATEGORIES=	www
MASTER_SITES=	SF/group-office/${DISTVERSION:R}

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Modular web application framework for office

NO_ARCH=	yes
NO_BUILD=	yes
USES=		shebangfix python

SHEBANG_FILES= go/vendor/tcpdf/tools/tcpdf_addfont.php
SHEBANG_FILES+= groupoffice
SHEBANG_FILES+= groupofficecli.php
SHEBANG_FILES+= install/autoinstall.php
SHEBANG_FILES+= modules/postfixadmin/scripts/vacation.pl
SHEBANG_FILES+= modules/sync/z-push/install.sh
SHEBANG_FILES+= modules/sync/z-push/z-push-admin.php
SHEBANG_FILES+= modules/sync/z-push/z-push-top.php
SHEBANG_FILES+= vendor/fkooman/php-oauth-client/bin/php-oauth-client-create-tables
SHEBANG_FILES+= vendor/sabre/dav/bin/naturalselection
SHEBANG_FILES+= vendor/sabre/dav/bin/googlecode_upload.py
SHEBANG_FILES+= vendor/bin/../sabre/dav/bin/naturalselection
SHEBANG_FILES+= vendor/swiftmailer/swiftmailer/lib/swiftmailer_generate_mimes_config.php

WWWDIR?=	${PREFIX}/www/${PORTNAME}${DISTVERSION:R:R}

SUB_FILES=	pkg-message


#PHP=calendsr gd iconv imap
#LIB_DEPENDS=	libwbxml2.so:textproc/wbxml2

post-patch:
	${REINPLACE_CMD} 's|%%LOCALBASE%%|${LOCALBASE}|g' \
		${WRKSRC}/go/base/Config.php
	${REINPLACE_CMD} 's|/etc/groupoffice|${PREFIX}&|g' \
		${WRKSRC}/go/base/Config.php \
		${WRKSRC}/install/configFile.php \
		${WRKSRC}/modules/serverclient/HttpClient.php \
		${WRKSRC}/modules/serverclient/ServerclientModule.php \
		${WRKSRC}/modules/site/index.php

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${FIND_CMD} . | ${CPIO} -pd ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${WWWDIR} && ${FIND} . -name '*~' -delete
	cd ${STAGEDIR}${WWWDIR} && ${FIND} . -name '*.orig' -delete
	cd ${STAGEDIR}${WWWDIR} && ${FIND_CMD} . -type d -empty | ${XARGS} -n1 -I@ ${TOUCH} @/.keepme
	${CHOWN} -R ${WWW_OWNER}:${WWW_GROUP}  ${STAGEDIR}${WWWDIR}
	${CHMOD} -R u+rw,go+r,a+X  ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -s -d www -type f  > ${TMPPLIST}
	cd ${STAGEDIR}${PREFIX} && ${FIND} -s -d www -type d | ${SED} "s,^,@dirrm ,g" >> ${TMPPLIST}


.include <bsd.port.mk>
