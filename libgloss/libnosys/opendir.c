#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/types.h>
#undef errno
extern int errno;
#include "warning.h"
#include <dirent.h>

DIR *opendir(const char* name)
{
    errno = ENOSYS;
    return NULL;
}
stub_warning(opendir)
