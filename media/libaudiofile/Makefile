#
# $Id: Makefile 1285 2007-10-25 11:42:14Z root $
# $URL: file:///usr2/svn/ports5/multimedia-libs/libaudiofile/Makefile $
#
PORTNAME=	libaudiofile
PORTVERSION=	0.3.6
CATEGORIES=	audio devel
#MASTER_SITES+=  http://www.68k.org/~michael/audiofile/ 
#MASTER_SITES+=  ftp://oss.sgi.com/projects/audiofile/download/ 
#MASTER_SITES+=  ${MASTER_SITE_GNOME}
#MASTER_SITE_SUBDIR=     sources/audiofile/0.2
MASTER_SITES=	GNOME/sources/${PORTNAME:S/lib//}/${PORTVERSION:C/^([0-9]+\.[0-9]+).*/\1/}

DISTNAME=	audiofile-${PORTVERSION}

LIB_DEPENDS+=	libFLAC.so:media/libflac
LIB_DEPENDS+=	libogg.so:media/libogg

MAINTAINER=	onborodin@gmail.com
COMMENT=	A sound library for SGI audio file

GNU_CONFIGURE=	yes
USES+=		gmake tar:xz
INSTALLS_SHLIB= yes


post-stage:
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afGetFrameCount.3 afGetDataOffset.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afGetFrameCount.3 afGetTrackBytes.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afInitAESChannelDataTo.3 afInitAESChannelData.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afInitSampleFormat.3 afInitByteOrder.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afInitSampleFormat.3 afInitChannels.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afInitSampleFormat.3 afInitRate.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afQuery.3 afQueryDouble.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afQuery.3 afQueryLong.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afQuery.3 afQueryPointer.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afReadMisc.3 afSeekMisc.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afReadMisc.3 afWriteMisc.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afSeekFrame.3 afTellFrame.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afSetVirtualByteOrder.3 afSetVirtualChannels.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afSetVirtualByteOrder.3 afSetVirtualPCMMapping.3
	cd ${STAGEDIR}/${PREFIX}/man/man3 && ${LN} -sf  afSetVirtualByteOrder.3 afSetVirtualSampleFormat.3

.include <bsd.port.mk>
#EOF
