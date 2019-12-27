#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
# $URL: file:///usr2/svn/ports5/text-utils/aspell-ru/Makefile $
#

PORTNAME=	aspell
PORTVERSION= ${DISTVERSION:S/-/./:S/f/./}

_LANG=	ru
DISTVERSION= 0.99f7-1
DISTNAME=	${PORTNAME}6-${_LANG}-${DISTVERSION}

CATEGORIES=	russian textproc
MASTER_SITES+=	https://ftp.gnu.org/gnu/aspell/dict/ru/  #aspell6-ru-0.99f7-1.tar.bz2

PKGNAMESUFFIX= -${_LANG}

RUN_DEPENDS+=	aspell:text/aspell
BUILD_DEPENDS+=	aspell:text/aspell

MAINTAINER=	onborodin@gmail.com
COMMENT=	Aspell Russian dictionary

USES+=		tar:bz2 gmake
HAS_CONFIGURE=	yes

.include <bsd.port.mk>

#EOF
