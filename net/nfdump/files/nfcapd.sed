#!/bin/sh
#
# PROVIDE: nfcapd_INSTANCE_
# REQUIRE: DAEMON
#
. /etc/rc.subr

#instance=_INSTANCE_

name="nfcapd_INSTANCE_"
rcvar="nfcapd_INSTANCE__enable"
command="/usr/local/sbin/nfcapd"
pidfile="/var/run/nfcapd_INSTANCE_.pid"
procname="${command}"
#command_args=" -D -P ${pidfile}"
required_dirs="/var/run"
#required_vars="${name}_interfaces ${name}_netflow_host ${name}_netflow_port"

load_rc_config $name

# /var/db/nfdump2 -S 8 -p 9998 -P /var/run/nfcapd2.pid

: ${nfcapd_INSTANCE__enable="NO"}
: ${nfcapd_INSTANCE__flags="-D -p _PORT_ -l /var/db/nfdump_INSTANCE_ -P /var/run/nfcapd_INSTANCE_.pid -S 8  "}


run_rc_command "$1"
#EOF
