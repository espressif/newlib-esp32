#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include <sys/types.h>
#undef errno
extern int errno;
#include "warning.h"
#include <dirent.h>

int scandir(const char *dirname, struct dirent ***namelist,
    int (*select)(const struct dirent *), int (*dcomp)(const struct dirent **,
	const struct dirent **))
{
    errno = ENOSYS;
    return -1;
}
stub_warning(scandir)
