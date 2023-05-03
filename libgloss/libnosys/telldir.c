#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/types.h>
#undef errno
extern int errno;
#include "warning.h"
#include <dirent.h>

long telldir(DIR *dirp)
{
    errno = ENOSYS;
    return -1L;
}
stub_warning(telldir)
