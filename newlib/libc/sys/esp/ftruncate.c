#include <sys/types.h>
#include <errno.h>

__attribute__((weak))
int ftruncate(const int fd __attribute__ ((unused)),
              off_t length __attribute__ ((unused)))
{
  errno = ENOTSUP;
  return -1;
}
