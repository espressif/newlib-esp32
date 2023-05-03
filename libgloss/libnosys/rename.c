#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/types.h>
#undef errno
extern int errno;
#include "warning.h"

int	_rename(const char *name_old, const char *name_new)
{
    errno = ENOSYS;
    return -1;
}
stub_warning(_rename)
