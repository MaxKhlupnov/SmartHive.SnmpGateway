#include <cstdio>
#include <stdio.h>
#include <stdlib.h>


#include "net-snmp/net-snmp-config.h"
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include <net-snmp/library/fd_event_manager.h>

#include "iothub_client.h"
#include "iothub_client_options.h"
#include "iothub_message.h"
#include "azure_c_shared_utility/threadapi.h"
#include "azure_c_shared_utility/crt_abstractions.h"
#include "azure_c_shared_utility/platform.h"
#include "azure_c_shared_utility/shared_util_options.h"

#include "SmartHive.SnmpGateway.h"

#include <sys/resource.h>
int getdtablesize(void)
{
	struct rlimit   rl;
	getrlimit(RLIMIT_NOFILE, &rl);
	return (rl.rlim_cur);
}

int main(int argc, char *argv[])
{
    printf("hello from SmartHive_SnmpGateway!\n");

	netsnmp_session *sess_list = NULL, *ss = NULL;
	netsnmp_transport *transport = NULL;
	int             arg, i = 0;
	int             uid = 0, gid = 0;
	char           *cp, *listen_ports = NULL;

	netsnmp_trapd_handler *traph;

	/*
	* close all non-standard file descriptors we may have
	* inherited from the shell.
	*/
	for (i = getdtablesize() - 1; i > 2; --i) {
		(void)close(i);
	}

    return 0;
}