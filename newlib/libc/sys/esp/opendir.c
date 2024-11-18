#include <dirent.h>
#include <errno.h>

__attribute((weak))
DIR *
opendir(const char *name)
{
    errno = ENOSYS;
    return NULL;
}
