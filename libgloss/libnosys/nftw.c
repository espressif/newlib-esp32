#include "config.h"
#include <errno.h>
#include <sys/types.h>
#undef errno
extern int errno;
#include "warning.h"

int nftw(const char *path, int (*fn)(const char *, const void *, int, void *), int fd_limit, int flags)
{
    errno = ENOSYS;
    return -1;
}
stub_warning(nftw)
