# Created by: Lev A. Serebryakov <lev@serebryakov.spb.ru>
# $FreeBSD: head/devel/mingw32-bin-msvcrt/Makefile 400848 2015-11-05 12:36:25Z mat $

PORTNAME=	bin-msvcrt
PORTVERSION=	${APIVERSION:S/-/./} #r${RUNTIMEVERSION:S/-/./}.a${APIVERSION:S/-/./}
CATEGORIES=	devel
#MASTER_SITES+=	SF/mingw/MinGW/Base/mingw-rt/mingwrt-${RUNTIMEVERSION:C/-.*$//}:runtime
#MASTER_SITES+=	SF/mingw/MinGW/Base/w32api/w32api-${APIVERSION:C/-.*$//}:api

#MASTER_SITES+=	SF/mingw/MinGW/Base/mingwrt/mingwrt-${RUNTIMEVERSION}:runtime
#MASTER_SITES+=	SF/mingw/MinGW/Base/w32api/w32api-${APIVERSION}:api

#MASTER_SITES+=	https://osdn.net/projects/mingw/downloads/70554/:runtime
#MASTER_SITES+=	https://osdn.net/projects/mingw/downloads/70555/:api

#MASTER_SITES+=	https://osdn.net/frs/redir.php?m=acc&f=mingw%2F70554%2F:runtime #w32api-5.2.1-mingw32-dev.tar.xz
#MASTER_SITES+=	https://osdn.net/frs/redir.php?m=acc&f=mingw%2F70555%2F:api #w32api-5.2.1-mingw32-dev.tar.xz
MASTER_SITES+=	https://dotsrc.dl.osdn.net/osdn/mingw/70554/:runtime
MASTER_SITES+=	https://dotsrc.dl.osdn.net/osdn/mingw/70555/:api

#https://osdn.net/projects/mingw/downloads/70554/mingwrt-5.2.1-mingw32-dev.tar.xz
#https://osdn.net/projects/mingw/downloads/70555/w32api-5.2.1-mingw32-dev.tar.xz


PKGNAMEPREFIX=	mingw32-
DISTFILES+=	mingwrt-${RUNTIMEVERSION}-mingw32-dev.tar.xz:runtime
DISTFILES+=	mingwrt-${RUNTIMEVERSION}-mingw32-dll.tar.xz:runtime
DISTFILES+=	w32api-${APIVERSION}-mingw32-dev.tar.xz:api
DIST_SUBDIR=	mingw

MAINTAINER=	cyberbotx@cyberbotx.com
COMMENT=	Headers and Libraries for Windows cross-development

USES=		tar:xz

RUNTIMEVERSION=	5.2.1
APIVERSION=	5.2.1

NO_MTREE=	yes
NO_WRKSUBDIR=	yes

post-extract:
	${CP} ${FILESDIR}/Makefile ${WRKSRC}

.include <bsd.port.mk>
