#
# $Id$
#
PORTNAME=	engine
PORTVERSION=	4.0.11
CATEGORIES=	print
MASTER_SITES+=	http://www.openprinting.org/download/foomatic/ 
MASTER_SITES+=	${MASTER_SITE_GOOGLE_CODE}
MASTER_SITES+=	${MASTER_SITE_LOCAL:S,$,acm/foomatic/,}
PKGNAMEPREFIX=	foomatic-db-
DISTNAME=	${PKGNAMEPREFIX}${PORTNAME}-${PORTVERSION}
DIST_SUBDIR=	foomatic

MAINTAINER=	onborodin@gmail.com
COMMENT=	Foomatic database engine

USES+=		gmake perl5
GNU_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ENV+=	PERL=${PERL} 
CONFIGURE_ENV+=	LIBDIR=${PREFIX}/share/foomatic/
CONFIGURE_ENV+=	LIB_CUPS=${LOCALBASE}/libexec/cups 
CONFIGURE_ENV+=	CUPS_FILTERS=${LOCALBASE}/libexec/cups/filters
CONFIGURE_ENV+=	CUPS_BACKENDS=${LOCALBASE}/libexec/cups/backends

MAKE_JOBS_UNSAFE=	yes


post-patch:
	${REINPLACE_CMD} -e \
		"s,sysconfdir=/etc,sysconfdir=\'${PREFIX}/etc\',g ; \
		 s,/usr/local/etc:,${PREFIX}/etc:,g" ${WRKSRC}/configure
	${REINPLACE_CMD} -e \
		"s,/usr/local/bin:,${PREFIX}/bin:,g" ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e \
		"/ln -sf foo/ s,foomatic-ppdfile,$$\(BINDIR\)/foomatic-ppdfile," \
		-e "/if \[ -d/ s,LIB_CUPS,PREFIX," ${WRKSRC}/Makefile.in

post-install:
.for file in foomatic-combo-xml foomatic-perl-data
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${file}
.endfor

.include <bsd.port.mk>
#EOF
