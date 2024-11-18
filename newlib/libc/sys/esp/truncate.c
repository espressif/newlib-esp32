#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>

__attribute__((weak))
int truncate(const char* path, off_t length)
{
  errno = ENOTSUP;
  return -1;
}
