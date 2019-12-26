# Created by: Marko Njezic <sf@maxempire.com>
# $FreeBSD: head/security/clamav-unofficial-sigs/Makefile 416386 2016-06-05 08:42:34Z pi $

PORTNAME=	clamav-unofficial-sigs
PORTVERSION=	5.3.2
CATEGORIES=	security

MAINTAINER=	sf@maxempire.com
COMMENT=	Update script for third-party ClamAV databases

_DEPENDS=	clamscan:system/clamav
_DEPENDS+=	rsync:system/rsync
_DEPENDS=	curl:net/libcurl
_DEPENDS=	gpg:crypto/gnupg
_DEPENDS=	bash:lang/bash
BUILD_DEPENDS=	${_DEPENDS}
RUN_DEPENDS=	${_DEPENDS}

USE_GITHUB=	yes
GH_ACCOUNT=	extremeshok

USES=		perl5 shebangfix
SHEBANG_FILES=	clamav-unofficial-sigs.sh
USE_PERL5=	run

SUB_FILES=	pkg-message

PORTEXAMPLES= *

post-patch:
	${CP} ${FILESDIR}/manpage.conf ${WRKSRC}
	${REINPLACE_CMD} -e 's|%%WRKSRC%%|${WRKSRC}|g' ${WRKSRC}/manpage.conf
	${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' ${WRKSRC}/clamav-unofficial-sigs.sh

do-build:
	cd ${WRKSRC} && ${LOCALBASE}/bin/bash ./clamav-unofficial-sigs.sh -c manpage.conf --install-man

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/clamav-unofficial-sigs.sh ${STAGEDIR}${PREFIX}/bin/clamav-unofficial-sigs
	${INSTALL_MAN} ${WRKSRC}/clamav-unofficial-sigs.8 ${STAGEDIR}${MANPREFIX}/man/man8

	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}

	${INSTALL_DATA} ${WRKSRC}/config/master.conf ${STAGEDIR}${EXAMPLESDIR}/master.conf.sample
	${INSTALL_DATA} ${WRKSRC}/config/os.freebsd.conf ${STAGEDIR}${EXAMPLESDIR}/os.conf.sample
	${INSTALL_DATA} ${WRKSRC}/config/user.conf ${STAGEDIR}${EXAMPLESDIR}/user.conf.sample

#	${MKDIR} ${STAGEDIR}${DOCSDIR}
#	cd ${WRKSRC} && ${INSTALL_DATA} INSTALL LICENSE README.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
#EOF
