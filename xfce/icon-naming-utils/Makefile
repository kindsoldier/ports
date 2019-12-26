#
# $Id$
#
PORTNAME=	icon-naming-utils
PORTVERSION=	0.8.90
CATEGORIES=	x11-themes
MASTER_SITES=	http://tango.freedesktop.org/releases/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Utilities of the Tango project

BUILD_DEPENDS=	${SITE_PERL}/XML/Simple.pm:perl/p5-XML-Simple
RUN_DEPENDS=	${SITE_PERL}/XML/Simple.pm:perl/p5-XML-Simple

USES+=		tar:bzip2 perl5
GNU_CONFIGURE=	yes
USES+=		gmake

post-patch:
	${REINPLACE_CMD} -e 's,$$(datadir)/pkgconfig,$$(libdir)/pkgconfig,' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
#EOF
