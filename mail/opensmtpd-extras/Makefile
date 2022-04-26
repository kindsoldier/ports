# Created by: gahr
# $FreeBSD: head/mail/opensmtpd-extras/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PORTNAME=	opensmtpd-extras
PORTVERSION=	6.7.1
CATEGORIES+=	mail
MASTER_SITES=	http://www.opensmtpd.org/archives/
#DISTNAME=	${PORTNAME}-201606230001

MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	Addons for OpenSMTPD

LIB_DEPENDS+=	libevent.so:devel/libevent

USES+= gmake autoreconf libtool
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+=	--sysconfdir="${PREFIX}/etc/mail"

CONFIGURE_ARGS+= --with-libssl=/usr
CONFIGURE_ARGS+= --with-mantype=man
CONFIGURE_ARGS+= --with-path-empty=/var/empty
CONFIGURE_ARGS+= --with-pie

CONFIGURE_ARGS+= --with-filter-monkey
CONFIGURE_ARGS+= --with-filter-stub
CONFIGURE_ARGS+= --with-filter-trace
CONFIGURE_ARGS+= --with-filter-void
CONFIGURE_ARGS+= --with-queue-null
CONFIGURE_ARGS+= --with-queue-ram
CONFIGURE_ARGS+= --with-queue-stub
CONFIGURE_ARGS+= --with-scheduler-ram
CONFIGURE_ARGS+= --with-scheduler-stub
CONFIGURE_ARGS+= --with-table-passwd
CONFIGURE_ARGS+= --with-table-stub
CONFIGURE_ARGS+= --with-tool-stats

CONFIGURE_ARGS+= --with-user-smtpd=smtpd


#pre-patch:
#	${REINPLACE_CMD} -e '/man_MANS.*filter_api.3/s/^/#/' \
#		${WRKSRC}/extras/filters/Makefile.am
#	${REINPLACE_CMD} -e '/is EXPERIMENTAL/d' ${WRKSRC}/api/filter_api.c


.include <bsd.port.mk>
#EOF
