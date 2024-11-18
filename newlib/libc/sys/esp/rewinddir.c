#include <dirent.h>

__attribute((weak))
void
rewinddir (DIR *dirp)
{
    return;
}
