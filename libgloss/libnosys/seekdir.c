#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/types.h>
#undef errno
extern int errno;
#include "warning.h"
#include <dirent.h>

void seekdir(DIR *dirp, long loc)
{
    errno = ENOSYS;
    return;
}
stub_warning(seekdir)
