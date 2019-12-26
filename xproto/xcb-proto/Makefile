#
# $Id: Makefile 831 2007-08-24 11:11:18Z root $
# $URL: file:///usr2/svn/ports5/x11/xproto-xproto/Makefile $
#
PORTNAME= 	xcb-proto
PORTVERSION=	1.13 #1.12
X11_CATEGORY= 	proto
MASTER_SITES+=	http://xcb.freedesktop.org/dist/
CATEGORIES=	x11
DIST_SUBDIR=	x11
#PKGNAMEPREFIX=	lib

MAINTAINER=	onborodin@gmail.com
COMMENT=	X.org X11R7 module

BUILD_DEPENDS+=	pkg-config:devel/pkg-config
BUILD_DEPENDS+=	xmllint:text/libxml2

GNU_CONFIGURE=	yes

USES+= gmake tar:bz2

CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CPPFLAGS+=	 -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

BUILD_DEPENDS+=	${PYTHON}:lang/python27

.include <bsd.port.pre.mk>


PYTHON?=	${LOCALBASE}/bin/python
#PYTHON_INCDIR=	${LOCALBASE}/python
#PYTHON_VERSION!=	${PYTHON} -c 'import sys; print sys.version[:3]'
#PYTHON_BASE!= 		${PYTHON} -c 'import sys; print sys.prefix'
##PYTHON_SITELIBDIR_FULL= ${PYTHON_BASE}/python/${PYTHON_VERSION}/site-packages
PYTHON_SITELIBDIR!= ${PYTHON} -c "import sys; from distutils import sysconfig; sys.stdout.write(sysconfig.get_python_lib(1,0,prefix=''))"
PLIST_SUB+= PYTHON_SITELIBDIR=${PYTHON_SITELIBDIR}


.include <bsd.port.post.mk>
#EOF
