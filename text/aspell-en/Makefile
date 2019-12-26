#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
# $URL: file:///usr2/svn/ports5/text-utils/aspell-en/Makefile $
#
PORTNAME=	aspell
LANG=	en
PKGNAMESUFFIX=	-dict-${LANG}
PORTVERSION_MAJOR= 6
PORTVERSION_MINOR= 0
PORTVERSION_PATCH= 0
PORTVERSION= ${PORTVERSION_MAJOR}.${PORTVERSION_MINOR}.${PORTVERSION_PATCH}
DISTNAME=	${PORTNAME}6-${LANG}-${PORTVERSION_MAJOR}.${PORTVERSION_MINOR}-${PORTVERSION_PATCH}
CATEGORIES=	russian textproc
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	/aspell/dict/${LANG}

RUN_DEPENDS+=	aspell:text/aspell
BUILD_DEPENDS+=	aspell:text/aspell

MAINTAINER=	onborodin@gmail.com
COMMENT=	Aspell Russian dictionary

USES+=		tar:bzip2
USES+=		gmake
HAS_CONFIGURE=	yes

.include <bsd.port.mk>
#EOF
