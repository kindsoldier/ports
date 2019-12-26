#!/bin/sh

gsed -i -e 's,:devel/,:ruby/,' */Makefile
gsed -i -e 's,:www/,:ruby/,' */Makefile
gsed -i -e 's,:mail/,:ruby/,' */Makefile
gsed -i -e 's,:databases/,:ruby/,' */Makefile
gsed -i -e 's,:sysutils/,:ruby/,' */Makefile
gsed -i -e 's,:textproc/,:ruby/,' */Makefile
gsed -i -e '/^PORTREV/d' */Makefile
gsed -i -e '/^LICENSE/d' */Makefile
gsed -i -e '/^PORTEPOCH/d' */Makefile

gsed -i -e 's,:security/,:ruby/,' */Makefile
gsed -i -e 's,:archivers/,:ruby/,' */Makefile
gsed -i -e 's,:comms/,:ruby/,' */Makefile
gsed -i -e 's,:converters/,:ruby/,' */Makefile
gsed -i -e 's,:dns/,:ruby/,' */Makefile
gsed -i -e 's,:editors/,:ruby/,' */Makefile
gsed -i -e 's,:emulators/,:ruby/,' */Makefile
gsed -i -e 's,:ftp/,:ruby/,' */Makefile
gsed -i -e 's,:games/,:ruby/,' */Makefile
gsed -i -e 's,:graphics/,:ruby/,' */Makefile
gsed -i -e 's,:irc/,:ruby/,' */Makefile
gsed -i -e 's,:japanese/,:ruby/,' */Makefile
gsed -i -e 's,:lang/,:ruby/,' */Makefile
gsed -i -e 's,:math/,:ruby/,' */Makefile
gsed -i -e 's,:misc/,:ruby/,' */Makefile
gsed -i -e 's,:multimedia/,:ruby/,' */Makefile
gsed -i -e 's,:net-im/,:ruby/,' */Makefile
gsed -i -e 's,:net-mgmt/,:ruby/,' */Makefile
gsed -i -e 's,:net/,:ruby/,' */Makefile
gsed -i -e 's,:print/,:ruby/,' */Makefile
#EOF
