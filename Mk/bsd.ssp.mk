# $FreeBSD: head/Mk/bsd.ssp.mk 499897 2019-04-24 19:15:05Z jbeich $
# SSP Support

SSP_Include_MAINTAINER=	portmgr@FreeBSD.org

.if !defined(SSP_UNSAFE) && \
    (${MACHINE} != "mips")
# Overridable as a user may want to use -fstack-protector-all
SSP_CFLAGS?=	-fstack-protector-strong
CFLAGS+=	${SSP_CFLAGS}
LDFLAGS+=	${SSP_CFLAGS}
.endif
