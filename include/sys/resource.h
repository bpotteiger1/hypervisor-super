#ifndef _SYS_RESOURCE_H_
#define _SYS_RESOURCE_H_

#include <bits/resource.h>
#include <sys/time.h>

#define	RUSAGE_SELF	0		/* calling process */
#define	RUSAGE_CHILDREN	-1		/* terminated child processes */

struct rusage {
  	struct timeval ru_utime;	/* user time used */
	struct timeval ru_stime;	/* system time used */
};

int	getrusage (int, struct rusage*);

#endif

