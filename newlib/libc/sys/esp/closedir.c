#include <dirent.h>
#include <errno.h>

__attribute((weak))
int
closedir (register DIR *dirp)
{
    errno = ENOSYS;
    return -1;
}

