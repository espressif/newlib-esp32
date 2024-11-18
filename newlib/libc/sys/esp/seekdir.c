#include <dirent.h>

__attribute((weak))
void
seekdir (DIR *dirp, long loc)
{
    return;
}
