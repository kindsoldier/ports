#
# $Id: Makefile 2316 2009-09-02 08:41:08Z root $
#
PORTNAME=	sqlite
PORTVERSION=	3.30.1
CATEGORIES=	databases
#MASTER_SITES=	https://www.sqlite.org/2017/ http://www2.sqlite.org/2017/ http://www3.sqlite.org/2017/
#DISTNAME=	sqlite-autoconf-${PORTVERSION:C/\.([[:digit:]])[[:>:]]/0\1/g:S/.//g}00
MASTER_SITES=	https://www.sqlite.org/2019/ http://www2.sqlite.org/2019/ http://www3.sqlite.org/2019/
DISTNAME=	sqlite-autoconf-${PORTVERSION:C/\.([[:digit:]])[[:>:]]/0\1/g:S/.//g}00


MAINTAINER=	onborodin@gmail.com
COMMENT=	An SQL database engine in a C library

.include <bsd.port.pre.mk>

.if (${OSVERSION} > 110000)
#BUILD_DEPENDS+=	makeinfo:system/texinfo
LIB_DEPENDS+=	libreadline.so:devel/libreadline
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
.endif


GNU_CONFIGURE=	yes
USES+=		gmake
USE_DOS2UNIX=	*.pc.in
CONFIGURE_ARGS=	--prefix=${PREFIX}
CONFIGURE_ARGS+= --enable-readline
CONFIGURE_ARGS+= --enable-editline
CONFIGURE_ARGS+= --enable-threadsafe
#CONFIGURE_ARGS+= --enable-fts5
#CONFIGURE_ARGS+= --enable-json1
_CFLAGS+= -DSQLITE_SECURE_DELETE=1
_CFLAGS+= -DSQLITE_ENABLE_FTS3=1
_CFLAGS+= -DSQLITE_ENABLE_UNLOCK_NOTIFY=1
_CFLAGS+= -DSQLITE_ENABLE_FTS3=1
_CFLAGS+= -DSQLITE_ENABLE_RTREE=1
_CFLAGS+= -DSQLITE_ENABLE_DBSTAT_VTAB=1
_CFLAGS+= -DSQLITE_ENABLE_JSON1=1
_CFLAGS+= -DSQLITE_ENABLE_FTS4=1
_CFLAGS+= -DSQLITE_ENABLE_FTS5=1
_CFLAGS+= -DBUILDING_NODE_EXTENSION=1

CFLAGS+= ${_CFLAGS}
CPPFLAGS+= ${_CFLAGS}
INSTALLS_SHLIB=	yes

post-patch:
	${REINPLACE_CMD} -e 's|\r\n|\n|' ${WRKSRC}/*.pc.in


.include <bsd.port.post.mk>
#EOF
