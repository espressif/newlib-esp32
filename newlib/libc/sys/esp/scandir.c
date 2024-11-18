#include <dirent.h>
#include <errno.h>
#include <string.h>

__attribute((weak))
int
scandir(const char *dirname, struct dirent ***namelist,
    int (*select)(const struct dirent *), int (*dcomp)(const struct dirent **,
	const struct dirent **))
{
    errno = ENOSYS;
    return -1;
}

/*
 * Alphabetic order comparison routine for those who want it.
 * POSIX 2008 requires that alphasort() uses strcoll().
 */
__attribute((weak))
int
alphasort(const struct dirent **d1, const struct dirent **d2)
{
    return (strcoll((*d1)->d_name, (*d2)->d_name));
}
