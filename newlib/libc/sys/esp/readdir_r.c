#include <dirent.h>
#include <errno.h>

__attribute((weak))
int
readdir_r (register DIR *__restrict dirp,
           struct dirent *__restrict dp,
           struct dirent **__restrict dpp)
{
    errno = ENOSYS;
    return -1;
}
