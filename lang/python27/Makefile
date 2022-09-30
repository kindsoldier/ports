#
# $Id: Makefile 2493 2009-09-19 15:10:11Z root $
# $URL: file:///usr2/svn/ports5/lang/python25/Makefile $
#
PORTNAME=	python
PORTVERSION=	2.7.15
CATEGORIES=	lang python
MASTER_SITES=	http://www.python.org/ftp/python/${PORTVERSION}/
DISTNAME=	${PORTNAME:S/^p/P/}-${PORTVERSION}


MAINTAINER=	onborodin@gmail.com
COMMENT=	An interpreted object-oriented programming language

LIB_DEPENDS+=	libsqlite3.so:data/sqlite3
LIB_DEPENDS+=	libffi.so:devel/libffi
LIB_DEPENDS+=	libintl.so:devel/gettext
LIB_DEPENDS+=	libiconv.so:text/libiconv
LIB_DEPENDS+=   libexpat.so:text/libexpat


USES+=		tar:xz gmake shebangfix
GNU_CONFIGURE=	yes
INSTALLS_SHLIB=	yes
USES+=		gmake
CONFIGURE_ENV+= SVNVERSION="echo freebsd"
MAKE_ENV=	VPATH="${PYTHON_WRKSRC}"

CONFIGURE_ARGS+= --enable-unicode=ucs4
CONFIGURE_ARGS+= --enable-ipv6
CONFIGURE_ARGS+= --with-fpectl
CONFIGURE_ARGS+= --with-threads
CONFIGURE_ARGS+= --enable-shared
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --with-system-ffi
CONFIGURE_ARGS+= --with-system-expat


python_CMD=	${PREFIX}/bin/python${PYTHON_PORTVERSION:R}
SHEBANG_FILES=	Lib/lib2to3/pgen2/*.py Lib/lib2to3/tests/*.py Lib/lib2to3/tests/data/*.py \
		Lib/idlelib/*.py Lib/encodings/*.py Lib/test/*.py Lib/UserString.py \
		Lib/base64.py Lib/cProfile.py Lib/keyword.py Lib/mimify.py Lib/pdb.py \
		Lib/platform.py Lib/profile.py Lib/pydoc.py Lib/quopri.py Lib/smtpd.py \
		Lib/smtplib.py Lib/symbol.py Lib/tabnanny.py Lib/timeit.py Lib/trace.py \
		Lib/uu.py Lib/webbrowser.py

# Null out OPT to respect user CFLAGS and remove optimizations
CONFIGURE_ENV+= ac_cv_opt_olimit_ok=no OPT=""	

LDFLAGS+= -L. ${PTHREAD_LIBS} -L${LOCALBASE}/lib 
CPPFLAGS+= ${PTHREAD_CFLAGS} -I${LOCALBASE}/include

PYTHON_VER= ${PORTVERSION:R}

PLIST_SUB+=	PYTHON_VER=${PYTHON_VER}
PLIST_SUB+=	PORTVERSION=${PORTVERSION}
PLIST_SUB+= OSNAME=${OPSYS:tl}${OSREL:R}

DELETEMOD+=lib/python${PYTHON_VER}/sunaudio.*
DELETEMOD+=lib/python${PYTHON_VER}/test/test_linuxaudiodev.*
DELETEMOD+=lib/python${PYTHON_VER}/test/test_nis.*
DELETEMOD+=lib/python${PYTHON_VER}/test/test_sunaudiodev.*

DELETEMOD+=lib/python${PYTHON_VER}/test/test_bsddb.*
DELETEMOD+=lib/python${PYTHON_VER}/test/test_bsddb185.*
DELETEMOD+=lib/python${PYTHON_VER}/test/test_bsddb3.*
#DELETEMOD+=lib/python${PYTHON_VER}/test/test_sqlite.*
DELETEMOD+=lib/python${PYTHON_VER}/test/test_tk.*

#TARGET_INSTALL = altinstall

.include <bsd.port.pre.mk>

.if (${OSVERSION} > 1100000)
#BUILD_DEPENDS+=	makeinfo:system/texinfo
LIB_DEPENDS+=	libreadline.so:devel/libreadline
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
.endif

#.if ${ARCH} == "amd64"
#TARGET=		x86_64-freebsd
#.elif ${ARCH} == "i386"
#TARGET=		i386-freebsd
#.elif (${ARCH} == "armv6" || ${ARCH} == "armv6hf")
#TARGET=		arm-freebsd
#.endif

#PLIST=	${PKGDIR}/pkg-plist.${ARCH}

post-install:
	cd ${WRKSRC} && ${GMAKE} DESTDIR=${STAGEDIR} altbininstall
	${INSTALL_DATA} ${WRKSRC}/libpython${PYTHON_VER}.a ${STAGEDIR}/${PREFIX}/lib/
	cd ${STAGEDIR}/${PREFIX}/lib/python${PYTHON_VER}/ && ${RM} -rf lib-tk lib-old bsddb
.for file in ${DELETEMOD}
	cd ${STAGEDIR}/${PREFIX} && ${RM} -f ${file}
.endfor
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  python2.7.1 python2.1
	cd ${STAGEDIR}/${PREFIX}/man/man1 && ${LN} -sf  python2.7.1 python.1

.include <bsd.port.post.mk>
#EOF
