/*
 * Stub version of pthread-family functions.
 */

#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#undef errno
extern int errno;
#include "warning.h"

typedef unsigned int pthread_t;
typedef unsigned int pthread_mutex_t;
typedef unsigned int pthread_key_t;
typedef unsigned int pthread_cond_t;
typedef unsigned int pthread_rwlock_t;
typedef struct
{
  int is_initialized;
  int init_executed;
}
pthread_once_t;
typedef struct __pthread_rwlockattr_t {char __dummy;} *pthread_rwlockattr_t;
typedef struct __pthread_attr_t {char __dummy;} pthread_attr_t;
typedef struct __pthread_mutexattr_t {char __dummy;} pthread_mutexattr_t;
typedef struct __pthread_condattr_t {char __dummy;} pthread_condattr_t;

int
pthread_attr_destroy (pthread_attr_t *)
{
  return -1;
}

stub_warning(pthread_attr_destroy)

int
pthread_attr_getdetachstate (const pthread_attr_t *, int *)
{
  return -1;
}

stub_warning(pthread_attr_getdetachstate)

int
pthread_attr_getguardsize (const pthread_attr_t *, size_t *)
{
  return -1;
}

stub_warning(pthread_attr_getguardsize)

int
pthread_attr_getinheritsched (const pthread_attr_t *, int *)
{
  return -1;
}

stub_warning(pthread_attr_getinheritsched)

int
pthread_attr_getschedparam (const pthread_attr_t *, void *)
{
  return -1;
}

stub_warning(pthread_attr_getschedparam)

int
pthread_attr_getschedpolicy (const pthread_attr_t *, int *)
{
  return -1;
}

stub_warning(pthread_attr_getschedpolicy)

int
pthread_attr_getscope (const pthread_attr_t *, int *)
{
  return -1;
}

stub_warning(pthread_attr_getscope)

int
pthread_attr_getstackaddr (const pthread_attr_t *, void **)
{
  return -1;
}

stub_warning(pthread_attr_getstackaddr)

int
pthread_attr_getstacksize (const pthread_attr_t *, size_t *)
{
  return -1;
}

stub_warning(pthread_attr_getstacksize)

int
pthread_attr_init (pthread_attr_t *)
{
  return -1;
}

stub_warning(pthread_attr_init)

int
pthread_attr_setdetachstate (pthread_attr_t *, int)
{
  return -1;
}

stub_warning(pthread_attr_setdetachstate)

int
pthread_attr_setguardsize (pthread_attr_t *, size_t)
{
  return -1;
}

stub_warning(pthread_attr_setguardsize)

int
pthread_attr_setinheritsched (pthread_attr_t *, int)
{
  return -1;
}

stub_warning(pthread_attr_setinheritsched)

int
pthread_attr_setschedparam (pthread_attr_t *, const void *)
{
  return -1;
}

stub_warning(pthread_attr_setschedparam)

int
pthread_attr_setschedpolicy (pthread_attr_t *, int)
{
  return -1;
}

stub_warning(pthread_attr_setschedpolicy)

int
pthread_attr_setscope (pthread_attr_t *, int)
{
  return -1;
}

stub_warning(pthread_attr_setscope)

int
pthread_attr_setstackaddr (pthread_attr_t *, void *)
{
  return -1;
}

stub_warning(pthread_attr_setstackaddr)

int
pthread_attr_setstacksize (pthread_attr_t *, size_t)
{
  return -1;
}

stub_warning(pthread_attr_setstacksize)

int
pthread_cancel (pthread_t)
{
  return -1;
}

stub_warning(pthread_cancel)

void
pthread_cleanup_push(void (*) (void *), void *)
{
  return;
}

stub_warning(pthread_cleanup_push)

void
pthread_cleanup_pop (int)
{
  return;
}

stub_warning(pthread_cleanup_pop)

int
pthread_cond_broadcast (pthread_cond_t *)
{
  return -1;
}

stub_warning(pthread_cond_broadcast)

int
pthread_cond_destroy (pthread_cond_t *)
{
  return -1;
}

stub_warning(pthread_cond_destroy)

int
pthread_cond_init (pthread_cond_t *, const pthread_condattr_t *)
{
  return -1;
}

stub_warning(pthread_cond_init)

int
pthread_cond_signal (pthread_cond_t *)
{
  return -1;
}

stub_warning(pthread_cond_signal)

int
pthread_cond_timedwait (pthread_cond_t *, pthread_mutex_t *, const void *)
{
  return -1;
}

stub_warning(pthread_cond_timedwait)

int
pthread_cond_wait (pthread_cond_t *, pthread_mutex_t *)
{
  return -1;
}

stub_warning(pthread_cond_wait)

int
pthread_condattr_destroy (pthread_condattr_t *)
{
  return -1;
}

stub_warning(pthread_condattr_destroy)

int
pthread_condattr_getpshared (const pthread_condattr_t *, int *)
{
  return -1;
}

stub_warning(pthread_condattr_getpshared)

int
pthread_condattr_init (pthread_condattr_t *)
{
  return -1;
}

stub_warning(pthread_condattr_init)

int
pthread_condattr_setpshared (pthread_condattr_t *, int)
{
  return -1;
}

stub_warning(pthread_condattr_setpshared)

int
pthread_create (pthread_t *, const pthread_attr_t *, void *(*)(void *), void *)
{
  return -1;
}

stub_warning(pthread_create)

int
pthread_detach (pthread_t)
{
  return -1;
}

stub_warning(pthread_detach)

int
pthread_equal (pthread_t, pthread_t)
{
  return -1;
}

stub_warning(pthread_equal)

void
pthread_exit (void *)
{
  return;
}

stub_warning(pthread_exit)

int
pthread_getconcurrency (void)
{
  return -1;
}

stub_warning(pthread_getconcurrency)

int
pthread_getschedparam (pthread_t, int *, void *)
{
  return -1;
}

stub_warning(pthread_getschedparam)

void *
pthread_getspecific (pthread_key_t)
{
  return NULL;
}

stub_warning(pthread_getspecific)

int
pthread_join (pthread_t, void **)
{
  return -1;
}

stub_warning(pthread_join)

int
pthread_key_create (pthread_key_t *, void (*)(void *))
{
  return -1;
}

stub_warning(pthread_key_create)

int
pthread_key_delete (pthread_key_t)
{
  return -1;
}

stub_warning(pthread_key_delete)

int
pthread_mutex_destroy (pthread_mutex_t *)
{
  return -1;
}

stub_warning(pthread_mutex_destroy)

int
pthread_mutex_getprioceiling (const pthread_mutex_t *, int *)
{
  return -1;
}

stub_warning(pthread_mutex_getprioceiling)

int
pthread_mutex_init (pthread_mutex_t *, const pthread_mutexattr_t *)
{
  return -1;
}

stub_warning(pthread_mutex_init)

int
pthread_mutex_lock (pthread_mutex_t *)
{
  return -1;
}

stub_warning(pthread_mutex_lock)

int
pthread_mutex_setprioceiling (pthread_mutex_t *, int, int *)
{
  return -1;
}

stub_warning(pthread_mutex_setprioceiling)

int
pthread_mutex_trylock (pthread_mutex_t *)
{
  return -1;
}

stub_warning(pthread_mutex_trylock)

int
pthread_mutex_unlock (pthread_mutex_t *)
{
  return -1;
}

stub_warning(pthread_mutex_unlock)

int
pthread_mutexattr_destroy (pthread_mutexattr_t *)
{
  return -1;
}

stub_warning(pthread_mutexattr_destroy)

int
pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *, int *)
{
  return -1;
}

stub_warning(pthread_mutexattr_getprioceiling)

int
pthread_mutexattr_getprotocol (const pthread_mutexattr_t *, int *)
{
  return -1;
}

stub_warning(pthread_mutexattr_getprotocol)

int
pthread_mutexattr_getpshared (const pthread_mutexattr_t *, int *)
{
  return -1;
}

stub_warning(pthread_mutexattr_getpshared)

int
pthread_mutexattr_gettype (const pthread_mutexattr_t *, int *)
{
  return -1;
}

stub_warning(pthread_mutexattr_gettype)

int
pthread_mutexattr_init (pthread_mutexattr_t *)
{
  return -1;
}

stub_warning(pthread_mutexattr_init)

int
pthread_mutexattr_setprioceiling (pthread_mutexattr_t *, int)
{
  return -1;
}

stub_warning(pthread_mutexattr_setprioceiling)

int
pthread_mutexattr_setprotocol (pthread_mutexattr_t *, int)
{
  return -1;
}

stub_warning(pthread_mutexattr_setprotocol)

int
pthread_mutexattr_setpshared (pthread_mutexattr_t *, int)
{
  return -1;
}

stub_warning(pthread_mutexattr_setpshared)

int
pthread_mutexattr_settype (pthread_mutexattr_t *, int)
{
  return -1;
}

stub_warning(pthread_mutexattr_settype)

int
pthread_once (pthread_once_t *, void (*)(void))
{
  return -1;
}

stub_warning(pthread_once)

int
pthread_rwlock_destroy (pthread_rwlock_t *)
{
  return -1;
}

stub_warning(pthread_rwlock_destroy)

int
pthread_rwlock_init (pthread_rwlock_t *, const pthread_rwlockattr_t *)
{
  return -1;
}

stub_warning(pthread_rwlock_init)

int
pthread_rwlock_rdlock (pthread_rwlock_t *)
{
  return -1;
}

stub_warning(pthread_rwlock_rdlock)

int
pthread_rwlock_tryrdlock (pthread_rwlock_t *)
{
  return -1;
}

stub_warning(pthread_rwlock_tryrdlock)

int
pthread_rwlock_trywrlock (pthread_rwlock_t *)
{
  return -1;
}

stub_warning(pthread_rwlock_trywrlock)

int
pthread_rwlock_unlock (pthread_rwlock_t *)
{
  return -1;
}

stub_warning(pthread_rwlock_unlock)

int
pthread_rwlock_wrlock (pthread_rwlock_t *)
{
  return -1;
}

stub_warning(pthread_rwlock_wrlock)

int
pthread_rwlockattr_destroy (pthread_rwlockattr_t *)
{
  return -1;
}

stub_warning(pthread_rwlockattr_destroy)

int
pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *, int *)
{
  return -1;
}

stub_warning(pthread_rwlockattr_getpshared)

int
pthread_rwlockattr_init (pthread_rwlockattr_t *)
{
  return -1;
}

stub_warning(pthread_rwlockattr_init)

int
pthread_rwlockattr_setpshared (pthread_rwlockattr_t *, int)
{
  return -1;
}

stub_warning(pthread_rwlockattr_setpshared)

unsigned
pthread_self (void)
{
  return -1;
}

stub_warning(pthread_self)

int
pthread_setcancelstate (int, int *)
{
  return -1;
}

stub_warning(pthread_setcancelstate)

int
pthread_setcanceltype (int, int *)
{
  return -1;
}

stub_warning(pthread_setcanceltype)

int
pthread_setconcurrency (int)
{
  return -1;
}

stub_warning(pthread_setconcurrency)

int
pthread_setschedparam (pthread_t, int , const void *)
{
  return -1;
}

stub_warning(pthread_setschedparam)

int
pthread_setspecific (pthread_key_t, const void *)
{
  return -1;
}

stub_warning(pthread_setspecific)

void
pthread_testcancel (void)
{
  return;
}

stub_warning(pthread_testcancel)
