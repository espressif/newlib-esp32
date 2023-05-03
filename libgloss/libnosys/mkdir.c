#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/types.h>
#undef errno
extern int errno;
#include "warning.h"
#include <dirent.h>

int mkdir(const char* name, mode_t mode)
{
    errno = ENOSYS;
    return -1;
}
stub_warning(mkdir)
