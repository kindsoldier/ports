#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
# $URL: file:///usr2/svn/ports5/text-utils/aspell-en/Makefile $
#

PORTNAME=	aspell
PORTVERSION= ${DISTVERSION:S/-/./}

_LANG=	en
DISTVERSION= 2019.10.06-0
DISTNAME=	${PORTNAME}6-${_LANG}-${DISTVERSION}

CATEGORIES=	russian textproc
MASTER_SITES+=	https://ftp.gnu.org/gnu/aspell/dict/en/

PKGNAMESUFFIX= -${_LANG}


RUN_DEPENDS+=	aspell:text/aspell
BUILD_DEPENDS+=	aspell:text/aspell

MAINTAINER=	onborodin@gmail.com
COMMENT=	Aspell English dictionary

USES+=		tar:bz2 gmake
HAS_CONFIGURE=	yes

.include <bsd.port.mk>
#EOF
