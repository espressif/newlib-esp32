/*
 * Stub version of dir-family functions.
 */

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

int closedir(DIR* pdir)
{
    errno = ENOSYS;
    return -1;
}
stub_warning(closedir)

int mkdir(const char* name, mode_t mode)
{
    errno = ENOSYS;
    return -1;
}
stub_warning(mkdir)

char *getcwd(char *buf, size_t size)
{
    return NULL;
}
stub_warning(getcwd)

int chdir(const char *path)
{
    errno = ENOSYS;
    return -1;
}
stub_warning(chdir)

struct dirent* readdir(DIR* pdir)
{
    errno = ENOSYS;
    return NULL;
}
stub_warning(readdir)

int scandir(const char *dirname, struct dirent ***namelist,
    int (*select)(const struct dirent *), int (*dcomp)(const struct dirent **,
	const struct dirent **))
{
    errno = ENOSYS;
    return -1;
}
stub_warning(scandir)

long telldir(DIR *dirp)
{
    errno = ENOSYS;
    return -1L;
}
stub_warning(telldir)

void seekdir(DIR *dirp, long loc)
{
    errno = ENOSYS;
    return;
}
stub_warning(seekdir)

int dirfd(DIR *dirp)
{
    errno = ENOSYS;
    return -1;
}
stub_warning(dirfd)

int ftw(const char *path, int (*fn)(const char *, const struct stat *, int), int fd_limit)
{
    errno = ENOSYS;
    return -1;
}
stub_warning(ftw)

int nftw(const char *path, int (*fn)(const char *, const struct stat *, int, struct FTW *), int fd_limit, int flags)
{
    errno = ENOSYS;
    return -1;
}
stub_warning(nftw)

void rewinddir(DIR *dirp)
{
    errno = ENOSYS;
    return;
}
stub_warning(rewinddir)

int chmod(const char *path, mode_t mode)
{
    errno = ENOSYS;
    return -1;
}
stub_warning(chmod)

long pathconf (const char *__path, int __name)
{
    errno = ENOSYS;
    return -1L;
}
stub_warning(pathconf)
