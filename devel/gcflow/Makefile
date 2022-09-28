PORTNAME=	gcflow
PORTVERSION=	1.7
CATEGORIES=	devel
MASTER_SITES=	GNU/cflow/
DISTNAME=	cflow-${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Tool to chart control flow within the C program
WWW=		https://www.gnu.org/software/cflow/

USES=		cpe gmake tar:bzip2
CPE_VENDOR=	gnu
CPE_PRODUCT=	cflow
GNU_CONFIGURE=	yes
TEST_TARGET=	check

INFO=		cflow

LIB_DEPENDS+=	libintl.so:devel/gettext


.include <bsd.port.mk>
