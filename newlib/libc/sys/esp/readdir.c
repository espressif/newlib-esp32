#include <dirent.h>
#include <errno.h>

__attribute((weak))
struct dirent *
readdir (register DIR *dirp)
{
    errno = ENOSYS;
    return NULL;
}
