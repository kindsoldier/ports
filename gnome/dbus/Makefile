#
# $Id$
#
PORTNAME=	dbus
PORTVERSION=	1.8.20
CATEGORIES=	devel gnome
MASTER_SITES=	http://dbus.freedesktop.org/releases/dbus/


MAINTAINER=	onborodin@gmail.com
COMMENT=	A message bus system for inter-application communication

LIB_DEPENDS+=	libexpat.so:text/libexpat
LIB_DEPENDS+=	libSM.so:x11/libSM
LIB_DEPENDS+=	libICE.so:x11/libICE
LIB_DEPENDS+=	libX11.so:x11/libX11
LIB_DEPENDS+=	libXau.so:x11/libXau
LIB_DEPENDS+=	libXdmcp.so:x11/libXdmcp

USES+=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS+= --localstatedir=/var
CONFIGURE_ARGS+= --with-test-socket-dir=${WRKDIR}
CONFIGURE_ARGS+= --with-system-pid-file=/var/run/dbus/dbus.pid
CONFIGURE_ARGS+= --with-system-socket=/var/run/dbus/system_bus_socket
CONFIGURE_ARGS+= --with-session-socket-dir=/var/tmp
CONFIGURE_ARGS+= --disable-doxygen-docs
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --with-dbus-user=${DBUS_OWNER}

#USERS=		messagebus
#GROUPS=		messagebus

DBUS_OWNER=	dbus
DBUS_GROUP=	dbus

DBUS_OWNER_ID=	556
DBUS_GROUP_ID=	556

USE_RC_SUBR=	dbus
SUB_FILES+= 	pkg-install

DBUS_RUNDIR=	/var/run/dbus
DBUS_DBDIR=	/var/db/dbus

#SUB_LIST+=	DBUS_LOGDIR=${DBUS_LOGDIR}
SUB_LIST+=	DBUS_RUNDIR=${DBUS_RUNDIR}
SUB_LIST+=	DBUS_DBDIR=${DBUS_DBDIR}

SUB_LIST+=	DBUS_OWNER=${DBUS_OWNER}
SUB_LIST+=	DBUS_GROUP=${DBUS_GROUP}

SUB_LIST+=	DBUS_OWNER_ID=${DBUS_OWNER_ID}
SUB_LIST+=	DBUS_GROUP_ID=${DBUS_GROUP_ID}


CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}
INSTALL_TARGET=	install-strip

FILES= ${WRKSRC}/configure ${WRKSRC}/*.pc.in

post-patch:
	${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' \
		${WRKSRC}/dbus/dbus-sysdeps-unix.c
	${REINPLACE_CMD} -e 's|/lib/dbus/machine-id|/db/dbus/machine-id|g' \
		${WRKSRC}/dbus/Makefile.in \
		${WRKSRC}/tools/Makefile.in
	${REINPLACE_CMD} -e 's|THREAD_LIBS -lrt|THREAD_LIBS|g' \
		${WRKSRC}/configure

	${REINPLACE_CMD} -e 's|install:.*|install:|' ${WRKSRC}/doc/Makefile.in

	${REINPLACE_CMD} -e 's|libxml-2.0|libxml|' ${WRKSRC}/configure

	${REINPLACE_CMD} -e 's,dbus-1.0,dbus,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}
	${REINPLACE_CMD} -e 's,dbus-1,dbus,g' $$(${FIND} ${WRKSRC} -name Makefile.in) ${FILES}

	cd ${WRKSRC} && ${CP} dbus-1.pc.in dbus.pc.in
	cd ${WRKSRC} && ${CP} dbus-1-uninstalled.pc.in dbus-uninstalled.pc.in


post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/dbus/interfaces
	cd ${WRKSRC}/doc && ${MAKE} install-man DESTDIR=${STAGEDIR}
	${MKDIR} -p ${STAGEDIR}${PREFIX}/man/man1
	${INSTALL_DATA} ${FILESDIR}/*.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
#EOF

