# Created by: Lars Eggert <larse@isi.edu>
# $FreeBSD: head/www/mod_perl2/Makefile 424804 2016-10-28 04:42:28Z ohauer $

PORTNAME=	mod_perl
PORTVERSION=	2.0.10
CATEGORIES=	www perl5
MASTER_SITES=	APACHE/perl
PKGNAMEPREFIX=	apache-
PKGNAMESUFFIX=	2

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Embeds a Perl interpreter in the Apache server


BUILD_DEPENDS+=	apxs:net/apache
BUILD_DEPENDS+=	p5-BSD-Resource>=0:perl/p5-BSD-Resource
RUN_DEPENDS+=	${BUILD_DEPENDS}

TEST_DEPENDS+=	p5-CGI>=4.15:perl/p5-CGI
TEST_DEPENDS+=	p5-libwww>=6.13:perl/p5-libwww

USES=		cpe gmake perl5
USE_PERL5=	configure
USE_CSTD=	gnu89

#SUB_FILES=	260_${PORTNAME}.conf.sample
PLIST_SUB+=	APMOD_FILE=${APMOD_FILE}

.include <bsd.port.pre.mk>

APXS=	${LOCALBASE}/sbin/apxs

CONFIGURE_ARGS=		PREFIX=${PREFIX} 
CONFIGURE_ARGS+= MP_APXS=${APXS}
CONFIGURE_ARGS+= MP_APR_CONFIG=${LOCALBASE}/bin/apr-config

post-patch:
	${REINPLACE_CMD} -e 's/APR_INLINE//g' \
		${PATCH_WRKSRC}/src/modules/perl/modperl_common_util.h
	${REINPLACE_CMD} -e "s|/usr/local/apache/bin/apxs|${APXS}|" \
		-e "s|'bin', 'apxs'|'sbin', 'apxs'|" \
		${WRKSRC}/lib/Apache2/Build.pm

pre-configure:
	${FIND} ${WRKSRC} -type f \( -name \*.bak -o -name \*.orig \) -delete

post-configure:
	${REINPLACE_CMD} -e 's/-pthread -Wl,-E//g' \
		${PATCH_WRKSRC}/xs/APR/APR/Makefile
	${ECHO_CMD} == PERL: \"${PERL_VER}\", ITHREADS: \"${HAS_ITHREADS}\", Apache: \"${APACHE_VERSION}\"

APACHEINCLUDEDIR=include/apache
APACHEMODDIR=	libexec/apache
APACHEETCDIR=	etc/apache

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/${APACHEINCLUDEDIR}/modules/perl
	${INSTALL_DATA} ${WRKSRC}/src/modules/perl/*.h \
		${STAGEDIR}${PREFIX}/${APACHEINCLUDEDIR}/modules/perl
	${INSTALL_DATA} ${WRKSRC}/xs/*.h ${STAGEDIR}${PREFIX}/${APACHEINCLUDEDIR}
	${INSTALL_DATA} ${WRKSRC}/xs/APR/PerlIO/*.h ${STAGEDIR}${PREFIX}/${APACHEINCLUDEDIR}

	${MKDIR} ${STAGEDIR}${PREFIX}/${APACHEMODDIR}
	${INSTALL_PROGRAM} ${WRKSRC}/src/modules/perl/mod_perl.so \
		${STAGEDIR}${PREFIX}/${APACHEMODDIR}/mod_perl.so
	${MKDIR} ${STAGEDIR}${PREFIX}/${APACHEETCDIR}/modules.d

#	${MKDIR} ${STAGEDIR}${PREFIX}/${APACHEETCDIR}/modules.d
#	${INSTALL_DATA} ${WRKDIR}/${APMOD_FILE} ${STAGEDIR}${PREFIX}/${APACHEETCDIR}/modules.d

.include <bsd.port.post.mk>
#EOF

