
#include <stddef.h>
#include <_ansi.h>

#include <pthread.h>

#include "../../libgloss/libnosys/config.h"
#include "../../../libgloss/libnosys/warning.h"

int _ATTRIBUTE((__weak__))
pthread_once (pthread_once_t *__once_control,
              void (*__init_routine)(void))
{
  return -1;
}
stub_warning(pthread_once)

// Thread

int _ATTRIBUTE((__weak__))
pthread_create (pthread_t *__pthread, const pthread_attr_t  *__attr,
                void *(*__start_routine)(void *), void *__arg)
{
  return -1;
}
stub_warning(pthread_create)

int _ATTRIBUTE((__weak__))
pthread_join (pthread_t __pthread, void **__value_ptr)
{
  return -1;
}
stub_warning(pthread_join)

int _ATTRIBUTE((__weak__))
pthread_equal (pthread_t __t1, pthread_t __t2)
{
  return -1;
}
stub_warning(pthread_equal)

pthread_t _ATTRIBUTE((__weak__))
pthread_self (void)
{
  return (pthread_t)0;
}
stub_warning(pthread_self)

int _ATTRIBUTE((__weak__))
pthread_detach (pthread_t __pthread)
{
  return -1;
}
stub_warning(pthread_detach)

int _ATTRIBUTE((__weak__))
pthread_cancel (pthread_t __pthread)
{
  return -1;
}
stub_warning(pthread_cancel)

// Mutex

int _ATTRIBUTE((__weak__))
pthread_mutex_init (pthread_mutex_t *__mutex,
                    const pthread_mutexattr_t *__attr)
{
  return -1;
}
stub_warning(pthread_mutex_init)

int _ATTRIBUTE((__weak__))
pthread_mutex_destroy (pthread_mutex_t *__mutex)
{
  return -1;
}
stub_warning(pthread_mutex_destroy)

int _ATTRIBUTE((__weak__))
pthread_mutex_lock (pthread_mutex_t *__mutex)
{
  return -1;
}
stub_warning(pthread_mutex_lock)

int _ATTRIBUTE((__weak__))
pthread_mutex_trylock (pthread_mutex_t *__mutex)
{
  return -1;
}
stub_warning(pthread_mutex_trylock)

int _ATTRIBUTE((__weak__))
pthread_mutex_unlock (pthread_mutex_t *__mutex)
{
  return -1;
}
stub_warning(pthread_mutex_unlock)

int _ATTRIBUTE((__weak__))
pthread_mutex_timedlock (pthread_mutex_t *__mutex,
                         const struct timespec *__timeout)
{
  return -1;
}
stub_warning(pthread_mutex_timedlock)

// Mutex Attributes

int _ATTRIBUTE((__weak__))
pthread_mutexattr_init (pthread_mutexattr_t *__attr)
{
  return -1;
}
stub_warning(pthread_mutexattr_init)

int _ATTRIBUTE((__weak__))
pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
{
  return -1;
}
stub_warning(pthread_mutexattr_destroy)

int _ATTRIBUTE((__weak__))
pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
{
  return -1;
}
stub_warning(pthread_mutexattr_settype)

// Condition Variable

int _ATTRIBUTE((__weak__))
pthread_cond_init (pthread_cond_t *__cond,
                   const pthread_condattr_t *__attr)
{
  return -1;
}
stub_warning(pthread_cond_init)

int _ATTRIBUTE((__weak__))
pthread_cond_destroy (pthread_cond_t *__mutex)
{
  return -1;
}
stub_warning(pthread_cond_destroy)

int _ATTRIBUTE((__weak__))
pthread_cond_signal (pthread_cond_t *__cond)
{
  return -1;
}
stub_warning(pthread_cond_signal)

int _ATTRIBUTE((__weak__))
pthread_cond_broadcast (pthread_cond_t *__cond)
{
  return -1;
}
stub_warning(pthread_cond_broadcast)

int _ATTRIBUTE((__weak__))
pthread_cond_wait (pthread_cond_t *__cond, pthread_mutex_t *__mutex)
{
  return -1;
}
stub_warning(pthread_cond_wait)

int _ATTRIBUTE((__weak__))
pthread_cond_timedwait (pthread_cond_t *__cond,
                        pthread_mutex_t *__mutex,
                        const struct timespec *__abstime)
{
  return -1;
}
stub_warning(pthread_cond_timedwait)

// Key

int _ATTRIBUTE((__weak__))
pthread_key_create (pthread_key_t *__key,
                    void (*__destructor)(void *))
{
  return -1;
}
stub_warning(pthread_key_create)

int _ATTRIBUTE((__weak__))
pthread_key_delete (pthread_key_t __key)
{
  return -1;
}
stub_warning(pthread_key_delete)

void *_ATTRIBUTE((__weak__))
pthread_getspecific (pthread_key_t __key)
{
  return NULL;
}
stub_warning(pthread_getspecific)

int _ATTRIBUTE((__weak__))
pthread_setspecific (pthread_key_t __key, const void *__value)
{
  return -1;
}
stub_warning(pthread_setspecific)

#ifndef __cplusplus
int _ATTRIBUTE((__weak__))
pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
{
  return -1;
}
stub_warning(pthread_rwlock_rdlock)

int _ATTRIBUTE((__weak__))
pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
{
  return -1;
}
stub_warning(pthread_rwlock_tryrdlock)

int _ATTRIBUTE((__weak__))
pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
{
  return -1;
}
stub_warning(pthread_rwlock_wrlock)

int _ATTRIBUTE((__weak__))
pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
{
  return -1;
}
stub_warning(pthread_rwlock_trywrlock)

int _ATTRIBUTE((__weak__))
pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
{
  return -1;
}
stub_warning(pthread_rwlock_unlock)
#endif /* !__cplusplus */

