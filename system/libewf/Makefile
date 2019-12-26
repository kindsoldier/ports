#
# $Id$
#
PORTNAME=	libewf
PORTVERSION=	20140608
CATEGORIES=	devel
MASTER_SITES=	https://googledrive.com/host/0B3fBvzttpiiSMTdoaVExWWNsRjg/ LOCAL/antoine

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	Library for support of the Expert Witness Compression Format (EWF)

BUILD_DEPENDS=	libuuid>0:system/libuuid
LIB_DEPENDS+=	libintl.so:devel/gettext

USES=		pathfix gmake
USE_LDCONFIG=	yes
USE_OPENSSL=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --with-libintl-prefix=${LOCALBASE}
CONFIGURE_ARGS+= --with-libuuid=${LOCALBASE}
CONFIGURE_ARGS+= --with-libsmdev=no
INSTALL_TARGET=	install-strip

.include <bsd.port.pre.mk>

# posix_fadvise(2) did not return correct value on error
.if (${OSVERSION} >= 1100000 && ${OSVERSION} < 1100007) || (${OSVERSION} >= 1000000 && ${OSVERSION} < 1000703) || (${OSVERSION} < 902507)
CONFIGURE_ENV+=	ac_cv_func_posix_fadvise=no
.endif

.include <bsd.port.post.mk>
#EOF
