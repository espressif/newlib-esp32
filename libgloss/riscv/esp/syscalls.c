#include <unistd.h>
#include <time.h>
#include <sys/stat.h>
#include <reent.h>
#include "esp_board.h"
#include "config.h"
#include "../../libnosys/warning.h"

int
_fstat(int file, struct stat *st)
{
    if (file <= STDERR_FILENO)
    {
        st->st_mode = S_IFCHR;
        return  0;
    }
    return  -1;
}

ssize_t
_write(int file, const char *ptr, size_t len)
{
    for (size_t i = 0; i < len; i++) {
        board_uart_write_char(ptr[i]);
    }

    return len;
}

struct _reent *
__getreent (void)
{
    return _GLOBAL_REENT;
}

char *
_sbrk (int nbytes)
{
  extern char _end[];
  static char *heap_ptr;

  char        *base;

  if (!heap_ptr)
    heap_ptr = (char *)&_end;
  base = heap_ptr;
  heap_ptr += nbytes;

  return base;
}

int
_kill (int sig)
{
    return -1;
}

int
_getpid (void)
{
    return -1;
}

void
__attribute__ ((noreturn))
_exit (int status)
{
    for (;;) {
        ;
    }
}

int
_open (const char *file, int flags, int mode)
{
    return -1;
}

_ssize_t
_read (int fd, char *buf, size_t cnt)
{
    return -1;
}

int
_lseek (int fd, _off_t off, int whence)
{
    return -1;
}

int
_close (int fd)
{
    return -1;
}

__attribute__((weak))
int nanosleep(const struct timespec *duration,
              struct timespec *rem)
{
    /* Reading csr mcycle or CSR_PCCR_MACHINE(0x7e2) is not working correctly.
     * mcycle always returns 0, and CSR_PCCR_MACHINE gives a garbage values.
     * It seems the system clock should be configured properly at startup.  */
    return -1;
}
stub_warning(nanosleep);
