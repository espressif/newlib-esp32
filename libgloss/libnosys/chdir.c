#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/types.h>
#undef errno
extern int errno;
#include "warning.h"
#include <dirent.h>

int chdir(const char *path)
{
    errno = ENOSYS;
    return -1;
}
stub_warning(chdir)
