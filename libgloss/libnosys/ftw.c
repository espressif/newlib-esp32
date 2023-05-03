#include "config.h"
#include "warning.h"
#include <errno.h>
#undef errno
extern int errno;

int ftw(const char *path, int (*fn)(const char *, const void *, int), int fd_limit)
{
    errno = ENOSYS;
    return -1;
}
stub_warning(ftw)
