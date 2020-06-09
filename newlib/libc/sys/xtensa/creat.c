/* creat() "system call" (copied from libc/posix/creat.c) */

#include <fcntl.h>

int
creat (const char *path, mode_t mode)
{
  return open (path, O_WRONLY | O_CREAT | O_TRUNC, mode);
}
