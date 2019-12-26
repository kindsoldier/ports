#
# $Id: Makefile 2443 2009-09-14 21:38:14Z root $
#
PORTNAME=	intltool
PORTVERSION=	0.51.0
CATEGORIES=	textproc gnome
MASTER_SITES=	https://launchpad.net/intltool/trunk/${PORTVERSION}/+download/

#MASTER_SITES=	${MASTER_SITE_GNOME}
#MASTER_SITE_SUBDIR=	sources/${PORTNAME}/${PORTVERSION:R}

MAINTAINER=	onborodin@gmail.com
COMMENT=	Tools to internationalize various kinds of data files

BUILD_DEPENDS=	${SITE_ARCH}/XML/Parser.pm:perl/p5-XML-Parser
RUN_DEPENDS=	${BUILD_DEPENDS}

USES+=		gmake perl5
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --libdir=${PREFIX}/libdata
CONFIGURE_ARGS+= --mandir=${PREFIX}/man

CONFLICTS=	xml-i18n-tools-[0-9]*

.include <bsd.port.mk>
#EOF
