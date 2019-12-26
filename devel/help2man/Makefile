#
# $Id: Makefile 1458 2007-11-16 16:59:56Z root $
# $URL: file:///usr2/svn/ports5/@dont-used-ports/help2man/Makefile $
#
PORTNAME=	help2man
PORTVERSION=	1.47.8
CATEGORIES=	misc
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}
DIST_SUBDIR=	gnu

MAINTAINER=	onborodin@gmail.com
COMMENT=	Automatically generating simple manual pages from program output

#WITHOUT_NLS=	yes
#.if !defined(WITHOUT_NLS)
#BUILD_DEPENDS=	${SITE_PERL}/${PERL_ARCH}/Locale/gettext.pm:perl-modules/p5-Locale-gettext
#RUN_DEPENDS=	${SITE_PERL}/${PERL_ARCH}/Locale/gettext.pm:perl-modules/p5-Locale-gettext
#MANLANG=	"" pl fr fi sv
#PLIST_SUB+=	NLS=""
#USE_GETTEXT=	yes
#.else
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=		NLS="@comment "
#.endif

GNU_CONFIGURE=	yes
USES+=		gmake perl5 tar:xz

INFO=		help2man

.include <bsd.port.mk>
#EOF
