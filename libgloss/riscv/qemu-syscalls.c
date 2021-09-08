#include <errno.h>
#include <reent.h>
#include <sys/types.h>

/* Note that there is a copy of this in sys/reent.h.  */
#ifndef __ATTRIBUTE_IMPURE_PTR__
#define __ATTRIBUTE_IMPURE_PTR__
#endif

#ifndef __ATTRIBUTE_IMPURE_DATA__
#define __ATTRIBUTE_IMPURE_DATA__
#endif

struct _reent *
__getreent (void)
{
    return _GLOBAL_REENT;
}

extern ssize_t _write(int file, const void *ptr, size_t len);
extern int _close(int file);
extern int _fstat(int file, struct stat *st);
extern int _isatty(int file);
extern off_t _lseek(int file, off_t ptr, int dir);
extern ssize_t _read(int file, void *ptr, size_t len);
extern int _getpid();
extern int _kill(int pid, int sig);
extern void *_sbrk(ptrdiff_t incr);

/* implement reentrant syscalls, implementations are copied from 'libc/reent' dir */

_ssize_t
_write_r (struct _reent *ptr,
     int fd,
     const void *buf,
     size_t cnt)
{
  _ssize_t ret;

  errno = 0;
  if ((ret = (_ssize_t)_write (fd, buf, cnt)) == -1 && errno != 0)
    ptr->_errno = errno;
  return ret;
}

int
_close_r (struct _reent *ptr,
     int fd)
{
  int ret;

  errno = 0;
  if ((ret = _close (fd)) == -1 && errno != 0)
    ptr->_errno = errno;
  return ret;
}

int
_fstat_r (struct _reent *ptr,
     int fd,
     struct stat *pstat)
{
  int ret;

  errno = 0;
  if ((ret = _fstat (fd, pstat)) == -1 && errno != 0)
    ptr->_errno = errno;
  return ret;
}

int
_isatty_r (struct _reent *ptr,
     int fd)
{
  int ret;

  errno = 0;
  if ((ret = _isatty (fd)) == -1 && errno != 0)
    ptr->_errno = errno;
  return ret;
}

_off_t
_lseek_r (struct _reent *ptr,
     int fd,
     _off_t pos,
     int whence)
{
  _off_t ret;

  errno = 0;
  if ((ret = _lseek (fd, pos, whence)) == (_off_t) -1 && errno != 0)
    ptr->_errno = errno;
  return ret;
}

_ssize_t
_read_r (struct _reent *ptr,
     int fd,
     void *buf,
     size_t cnt)
{
  _ssize_t ret;

  errno = 0;
  if ((ret = (_ssize_t)_read (fd, buf, cnt)) == -1 && errno != 0)
    ptr->_errno = errno;
  return ret;
}

void *
_sbrk_r (struct _reent *ptr,
     ptrdiff_t incr)
{
  char *ret;
  void *_sbrk(ptrdiff_t);

  errno = 0;
  if ((ret = (char *)(_sbrk (incr))) == (void *) -1 && errno != 0)
    ptr->_errno = errno;
  return ret;
}

int _getpid_r(struct _reent *reent)
{
  return _getpid();
}

int _kill_r(struct _reent *reent, int pid, int sig)
{
  return _kill(pid, sig);
}

int
pthread_setcancelstate (int state, int *oldstate)
{
  return -1;
}
