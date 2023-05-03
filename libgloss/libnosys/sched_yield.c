#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/types.h>
#undef errno
extern int errno;
#include "warning.h"
#include <sched.h>

int sched_yield(void)
{
    errno = ENOSYS;
    return -1;
}
stub_warning(sched_yield)
