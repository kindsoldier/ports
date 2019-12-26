#
# $Id$
#
PORTNAME=	shntool
PORTVERSION=	3.0.10
CATEGORIES=	audio
MASTER_SITES=	http://www.etree.org/shnutils/shntool/dist/src/

MAINTAINER=	onborodin@gmail.com
COMMENT=	Multi-purpose .wav processing utility

GNU_CONFIGURE=	yes
USES+= gmake
CONFIGURE_ARGS+= --mandir=${PREFIX}/man
CONFIGURE_ARGS+= --with-formats="wav aiff shn flac ape alac wv term null" # tta

SHN_ALIASES=	len fix hash pad join split cat cmp cue conv info strip gen trim
#PLIST_FILES=	${SHN_ALIASES:S|^|bin/shn|}
MAN1=		shntool.1

#MLINKS+= shntool.1 shnlen.1
#MLINKS+= shntool.1 shnfix.1
#MLINKS+= shntool.1 shnhash.1
#MLINKS+= shntool.1 shnpad.1
#MLINKS+= shntool.1 shnjoin.1
#MLINKS+= shntool.1 shnsplit.1
#MLINKS+= shntool.1 shncat.1
#MLINKS+= shntool.1 shncmp.1
#MLINKS+= shntool.1 shncue.1
#MLINKS+= shntool.1 shnconv.1
#MLINKS+= shntool.1 shninfo.1
#MLINKS+= shntool.1 shnstrip.1
#MLINKS+= shntool.1 shngen.1
#MLINKS+= shntool.1 shntrim.1


.for A in ${SHN_ALIASES}
MLINKS+= shntool.1 shn${A}.1
.endfor

.include <bsd.port.mk>
#EOF
