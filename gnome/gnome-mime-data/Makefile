#
# $Id$
#
PORTNAME=	gnome-mime-data
PORTVERSION=	2.18.0
CATEGORIES=	misc gnome
MASTER_SITES=	GNOME
DISTNAME=	gnome-mime-data-${PORTVERSION}
DIST_SUBDIR=	gnome

MAINTAINER=	onborodin@gmail.com
COMMENT=	A MIME and Application database for GNOME

LIB_DEPENDS+=	libintl.so:devel/gettext


USES+=		tar:bzip2
USE_GETTEXT=	yes
USES+=		gmake
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib -lintl


.include <bsd.port.mk>
#EOF

