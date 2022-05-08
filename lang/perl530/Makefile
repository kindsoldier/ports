#
# $Id$
#
PORTNAME=	perl
PORTVERSION=	5.30.3
CATEGORIES=	lang devel perl5
MASTER_SITES+=	CPAN
MASTER_SITES+= ${MASTER_SITE_LOCAL:S/$/:local/}
MASTER_SITE_SUBDIR+= ../../src 
DISTFILES+=	${DISTNAME}${EXTRACT_SUFX} 
DIST_SUBDIR=	perl

MAINTAINER=	onborodin@gmail.com
COMMENT=	Practical Extraction and Report Language

USES+=		tar:xz


PERL_VERSION=	${PORTVERSION:R}
PERL_ARCH=	mach
LIB_PERL=       libperl${PORTVERSION:R:R}

MANDIRS+= ${PREFIX}/lib/perl5/${PERL_VERSION}/man/man3/

_PERL_LIB_REL=lib/perl5/${PERL_VERSION}
_ARCH_LIB_REL=${_PERL_LIB_REL}/${PERL_ARCH}

MAN1_REL= man/man1
MAN3_REL= ${_PERL_LIB_REL}/man/man3
SITE_PERL_REL=	lib/perl5/site_perl
SITE_ARCH_REL=	${SITE_PERL_REL}/${PERL_ARCH}
SITE_PERL=	${PREFIX}/${SITE_PERL_REL}
SITE_ARCH=	${PREFIX}/${SITE_ARCH_REL}
SITE_MAN3_REL=	${SITE_PERL_REL}/man/man3
SITE_MAN1_REL=	${SITE_PERL_REL}/man/man1
SITE_MAN3=	${PREFIX}/${SITE_MAN3_REL}
SITE_MAN1=	${PREFIX}/${SITE_MAN1_REL}

CONFIGURE_ENV+=	UNAME_v="$$(uname -v | sed 'y/=/ /')"
HAS_CONFIGURE=	yes

CONFIGURE_SCRIPT= Configure
CONFIGURE_ARGS= -sde -Dprefix=${PREFIX} \
        -Darchlib=${PREFIX}/${_ARCH_LIB_REL} \
        -Dprivlib=${PREFIX}/${_PERL_LIB_REL} \
        -Dman3dir=${PREFIX}/${MAN3_REL} \
        -Dman1dir=${PREFIX}/${MAN1_REL} \
        -Dsitearch=${SITE_ARCH} \
        -Dsitelib=${SITE_PERL} \
        -Dsiteman1dir=${SITE_MAN1} \
        -Dsiteman3dir=${SITE_MAN3} \
        -Dscriptdir=${PREFIX}/bin \
        -Ui_malloc \
        -Ui_iconv \
        -Uinstallusrbinperl \
        -Dcc="${CC}" \
        -Duseshrplib \
        -Dinc_version_list=none \
        -Dusenm=n \
        -Doptimize="${CFLAGS}" \
        -Dusemymalloc=n \
        -Dusethreads=y \
        -Ui_gdbm \
        -Duse64bitint \
        -Dinc_version_list=none \
        -Ddefault_inc_excludes_dot=n \
        -Dusemultiplicity=y \


CONFIGURE_ARGS+= \
	-Alddlflags='-L${WRKSRC} -L${PREFIX}/${_ARCH_LIB_REL}/CORE' \
	-Dshrpldflags='-L${WRKSRC} -L${PREFIX}/${_ARCH_LIB_REL}/CORE'

LOCALE_CLEANUP+= LANG=""
LOCALE_CLEANUP+= LC_ALL=""
LOCALE_CLEANUP+= LC_COLLATE=""
LOCALE_CLEANUP+= LC_CTYPE=""
LOCALE_CLEANUP+= LC_MESSAGES=""
LOCALE_CLEANUP+= LC_MONETARY=""
LOCALE_CLEANUP+= LC_NUMERIC=""
LOCALE_CLEANUP+= LC_TIME=""

CONFIGURE_ENV+=	${LOCALE_CLEANUP}
MAKE_ENV+=	${LOCALE_CLEANUP}

PLIST_SUB+=	PERL_VERSION=${PERL_VERSION}
PLIST_SUB+=	PERL_VER=${PERL_VERSION}
PLIST_SUB+=	PERL_ARCH=${PERL_ARCH}
PLIST_SUB+=	SITE_PERL=${SITE_PERL_REL}
PLIST_SUB+=	VERSION=${PERL_VERSION}
PLIST_SUB+=	ARCH=${PERL_ARCH}
PLIST_SUB+=	PERL_LIB=${_PERL_LIB_REL}
PLIST_SUB+=	ARCH_LIB=${_ARCH_LIB_REL}
PLIST_SUB+=	SITE_PERL=${SITE_PERL_REL}
PLIST_SUB+=	SITE_ARCH=${SITE_ARCH_REL}
PLIST_SUB+=	MAN1=${MAN1_REL}
PLIST_SUB+=	MAN3=${MAN3_REL}


re:
	${REINPLACE_CMD} -e 's,${MAN1_REL},%%MAN1%%,' pkg-plist.new
	${REINPLACE_CMD} -e 's,${MAN3_REL},%%MAN3%%,' pkg-plist.new
	${REINPLACE_CMD} -e 's,${_ARCH_LIB_REL},%%ARCH_LIB%%,' pkg-plist.new
	${REINPLACE_CMD} -e 's,${_PERL_LIB_REL},%%PERL_LIB%%,' pkg-plist.new
	${REINPLACE_CMD} -e 's,${SITE_PERL_REL},%%SITE_PERL%%,' pkg-plist.new
	${REINPLACE_CMD} -e 's,${SITE_ARCH_REL},%%SITE_ARCH%%,' pkg-plist.new

SUB_LIST+= PREFIX=${PREFIX}
SUB_LIST+= PORTNAME=${PORTNAME}${PKGNAMESUFFIX}
SUB_LIST+= ${PLIST_SUB}
SUB_FILES+= perl-man.conf


post-install:
	${RM} -f ${STAGEDIR}/${PREFIX}/bin/perl${PERL_VERSION}
	${STRIP_CMD} ${STAGEDIR}/${PREFIX}/bin/perl
	cd ${STAGEDIR}/${PREFIX}/bin && ${LN} -sf perl perl5
	${MKDIR} ${STAGEDIR}/${PREFIX}/${SITE_ARCH_REL}
	cd /usr/include && LD_LIBRARY_PATH=${STAGEDIR}${PREFIX}/${_ARCH_LIB_REL}:${WRKSRC} \
	PERL5LIB=${STAGEDIR}${PREFIX}/${_ARCH_LIB_REL}:${STAGEDIR}${PREFIX}/${_PERL_LIB_REL}  \
	    ${WRKSRC}/perl ${STAGEDIR}/${PREFIX}/bin/h2ph -d \
	    ${STAGEDIR}/${PREFIX}/${SITE_ARCH_REL} *.h machine/*.h sys/*.h
	cd ${STAGEDIR}/${PREFIX} && ${FIND} ${SITE_ARCH_REL} -name '*.ph' >> ${TMPPLIST}
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/man.d
	${INSTALL_DATA} ${WRKDIR}/perl-man.conf ${STAGEDIR}${PREFIX}/etc/man.d/${PORTNAME}${PKGNAMESUFFIX}.conf


test: build
	cd ${WRKSRC}; TEST_JOBS=${MAKE_JOBS_NUMBER} make test_harness

regression-test: test

.include <bsd.port.mk>
#EOF
