# Created by: Phillip Neumann <pneumann@gmail.com>
# $FreeBSD: head/net/rabbitmq/Makefile 536694 2020-05-27 14:55:03Z danfe $

PORTNAME=	rabbitmq
DISTVERSION=	3.8.3
CATEGORIES=	net
MASTER_SITES=	https://github.com/rabbitmq/rabbitmq-server/releases/download/v${PORTVERSION}/
DISTNAME=	${PORTNAME}-server-${PORTVERSION}

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Erlang implementation of AMQP


#BUILD_DEPENDS=	erlang-runtime21>=21.3:lang/erlang-runtime21 \
#		elixir>=1.10:lang/elixir \
#		${PYTHON_PKGNAMEPREFIX}simplejson>=2.0:devel/py-simplejson@${PY_FLAVOR} \
#		xmlto:textproc/xmlto \
#		zip:archivers/zip \
#		rsync:net/rsync
#RUN_DEPENDS=	erlang-runtime21>=21.3:lang/erlang-runtime21



BUILD_DEPENDS+=	erlang>=21.3:lang/erlang
BUILD_DEPENDS+= zip:arch/zip
BUILD_DEPENDS+= elixir>=1.10:lang/elixir
#BUILD_DEPENDS+= xmlto:text/xmlto
RUN_DEPENDS=	erlang>=21.3:lang/erlang



USES=		gmake shebangfix tar:xz
USE_LOCALE=	en_US.UTF-8
USE_RC_SUBR=	rabbitmq
NO_ARCH=	yes

#OPTIONS_DEFINE=	ADMIN
#OPTIONS_SUB=	yes
#ADMIN_DESC=	Install rabbitmqadmin script
#ADMIN_USES=	python
#ADMIN_USES_OFF=	python:build

ALL_TARGET=	install

#USERS=		rabbitmq
#GROUPS=	rabbitmq



REINPLACE_ARGS=	-i ""
SCRIPTS_DIR=	${WRKSRC}/deps/rabbit/scripts
SHEBANG_FILES=	deps/rabbitmq_management/bin/rabbitmqadmin
MAKE_ARGS+=	PYTHON=${PYTHON_CMD}
MAKE_ENV+=	PATH="${LOCALBASE}/lib/erlang/bin:${PATH}"
MAKE_ENV+=	RMQ_LIBDIR="${PREFIX}/lib"
MAKE_ENV+=	MANDIR="${PREFIX}/man"
MAKE_ENV+=	DESTDIR="${STAGEDIR}"

MAKE_JOBS_UNSAFE=	yes

ERLANG_LIB=	erlang

.include <bsd.port.options.mk>

RUN_DIR=	${VAR_DIR}/run/${PORTNAME}
DB_DIR=		${VAR_DIR}/db/${PORTNAME}
CONF_DIR= 	${PREFIX}/etc/${PORTNAME}


OWNER=	rabbitmq
GROUP=	rabbitmq
OWNER_ID=	135
GROUP_ID=	135

PKGINSTALL=	${WRKDIR}/pkg-install
PKGDEINSTALL=	${WRKDIR}/pkg-deinstall

SUB_FILES= 	pkg-install pkg-deinstall

SUB_LIST+= OWNER=${OWNER}
SUB_LIST+= GROUP=${GROUP}
SUB_LIST+= OWNER_ID=${OWNER_ID}
SUB_LIST+= GROUP_ID=${GROUP_ID}

SUB_LIST+= CONF_DIR=${CONF_DIR}

SUB_LIST+= RUN_DIR=${RUN_DIR}
SUB_LIST+= DB_DIR=${DB_DIR}



post-patch:
	${REINPLACE_CMD} -e 's|/etc/rabbitmq|${PREFIX}/etc/rabbitmq|g; s|/var/lib|/var/db|g; s|$${ERL_DIR}erl|${PREFIX}/lib/erlang/bin/erl|g' \
		${SCRIPTS_DIR}/rabbitmq-server \
		${SCRIPTS_DIR}/rabbitmqctl \
		${SCRIPTS_DIR}/rabbitmq-env \
		${SCRIPTS_DIR}/rabbitmq-plugins \
		${SCRIPTS_DIR}/rabbitmq-defaults \
		${WRKSRC}/deps/rabbit/docs/rabbitmq-env.conf.5

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/rabbitmq
	${MKDIR} ${STAGEDIR}/var/db/rabbitmq/mnesia
	${MKDIR} ${STAGEDIR}/var/log/rabbitmq

	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/deps/rabbit/docs/advanced.config.example ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/deps/rabbit/docs/rabbitmq.conf.example ${STAGEDIR}${EXAMPLESDIR}

.for file in cuttlefish rabbitmq-defaults rabbitmq-diagnostics rabbitmq-env rabbitmq-plugins rabbitmq-server rabbitmq-upgrade rabbitmqctl
	${LN} -sf ../lib/rabbitmq_server-${PORTVERSION}/sbin/${file} ${STAGEDIR}${PREFIX}/sbin
.endfor
	${INSTALL_MAN} ${WRKSRC}/deps/rabbit/docs/*.8  ${STAGEDIR}${MAN1PREFIX}/man/man8
	${INSTALL_MAN} ${WRKSRC}/deps/rabbit/docs/rabbitmq-env.conf.5 ${STAGEDIR}${MAN5PREFIX}/man/man5

	${MKDIR} ${STAGEDIR}${PREFIX}/bin
	${INSTALL} ${WRKSRC}/deps/rabbitmq_management/bin/rabbitmqadmin ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
