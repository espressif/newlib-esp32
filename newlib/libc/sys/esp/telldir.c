#include <dirent.h>
#include <errno.h>

__attribute((weak))
long
telldir (DIR *dirp)
{
    errno = ENOSYS;
    return -1;
}
