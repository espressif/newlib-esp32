#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/types.h>
#undef errno
extern int errno;
#include "warning.h"
#include <sys/statvfs.h>

int statvfs(const char *restrict path, struct statvfs *restrict buf)
{
    errno = ENOSYS;
    return -1;
}
stub_warning(statvfs)
