#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/types.h>
#undef errno
extern int errno;
#include "warning.h"
#include <dirent.h>

struct dirent* readdir(DIR* pdir)
{
    errno = ENOSYS;
    return NULL;
}
stub_warning(readdir)
