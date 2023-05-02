/*
 * Dummy stubs for pthread-family functions.
 */

#include <stddef.h>
#include "config.h"
#include "warning.h"

#define ALIAS(name, aliasname) \
  extern __typeof (name) aliasname __attribute__ ((__alias__ (#name))); \
  stub_warning(aliasname);


static int __pthread_failed (void) {
  return -1;
}

static void __pthread_void (void) {
  return;
}

ALIAS (__pthread_failed, pthread_atfork);
ALIAS (__pthread_failed, pthread_mutexattr_init);
ALIAS (__pthread_failed, pthread_mutexattr_destroy);
ALIAS (__pthread_failed, pthread_mutexattr_getpshared);
ALIAS (__pthread_failed, pthread_mutexattr_setpshared);
ALIAS (__pthread_failed, pthread_mutexattr_gettype);
ALIAS (__pthread_failed, pthread_mutexattr_settype);
ALIAS (__pthread_failed, pthread_mutex_init);
ALIAS (__pthread_failed, pthread_mutex_destroy);
ALIAS (__pthread_failed, pthread_mutex_lock);
ALIAS (__pthread_failed, pthread_mutex_trylock);
ALIAS (__pthread_failed, pthread_mutex_unlock);
ALIAS (__pthread_failed, pthread_mutex_timedlock);
ALIAS (__pthread_failed, pthread_condattr_init);
ALIAS (__pthread_failed, pthread_condattr_destroy);
ALIAS (__pthread_failed, pthread_condattr_getclock);
ALIAS (__pthread_failed, pthread_condattr_setclock);
ALIAS (__pthread_failed, pthread_condattr_getpshared);
ALIAS (__pthread_failed, pthread_condattr_setpshared);
ALIAS (__pthread_failed, pthread_cond_init);
ALIAS (__pthread_failed, pthread_cond_destroy);
ALIAS (__pthread_failed, pthread_cond_signal);
ALIAS (__pthread_failed, pthread_cond_broadcast);
ALIAS (__pthread_failed, pthread_cond_wait);
ALIAS (__pthread_failed, pthread_cond_timedwait);
ALIAS (__pthread_failed, pthread_attr_setscope);
ALIAS (__pthread_failed, pthread_attr_getscope);
ALIAS (__pthread_failed, pthread_attr_setinheritsched);
ALIAS (__pthread_failed, pthread_attr_getinheritsched);
ALIAS (__pthread_failed, pthread_attr_setschedpolicy);
ALIAS (__pthread_failed, pthread_attr_getschedpolicy);
ALIAS (__pthread_failed, pthread_attr_setschedparam);
ALIAS (__pthread_failed, pthread_attr_getschedparam);
ALIAS (__pthread_failed, pthread_getschedparam);
ALIAS (__pthread_failed, pthread_setschedparam);
ALIAS (__pthread_failed, pthread_setschedprio);
ALIAS (__pthread_failed, pthread_getname_np);
ALIAS (__pthread_failed, pthread_setname_np);
ALIAS (__pthread_failed, pthread_mutexattr_setprotocol);
ALIAS (__pthread_failed, pthread_mutexattr_getprotocol);
ALIAS (__pthread_failed, pthread_mutexattr_setprioceiling);
ALIAS (__pthread_failed, pthread_mutexattr_getprioceiling);
ALIAS (__pthread_failed, pthread_mutex_setprioceiling);
ALIAS (__pthread_failed, pthread_mutex_getprioceiling);
ALIAS (__pthread_failed, pthread_attr_init);
ALIAS (__pthread_failed, pthread_attr_destroy);
ALIAS (__pthread_failed, pthread_attr_setstack);
ALIAS (__pthread_failed, pthread_attr_getstack);
ALIAS (__pthread_failed, pthread_attr_getstacksize);
ALIAS (__pthread_failed, pthread_attr_setstacksize);
ALIAS (__pthread_failed, pthread_attr_getstackaddr);
ALIAS (__pthread_failed, pthread_attr_setstackaddr);
ALIAS (__pthread_failed, pthread_attr_getdetachstate);
ALIAS (__pthread_failed, pthread_attr_setdetachstate);
ALIAS (__pthread_failed, pthread_attr_getguardsize);
ALIAS (__pthread_failed, pthread_attr_setguardsize);
ALIAS (__pthread_failed, pthread_attr_setaffinity_np);
ALIAS (__pthread_failed, pthread_attr_getaffinity_np);
ALIAS (__pthread_failed, pthread_setaffinity_np);
ALIAS (__pthread_failed, pthread_getaffinity_np);
ALIAS (__pthread_failed, pthread_getattr_np);
ALIAS (__pthread_failed, pthread_create);
ALIAS (__pthread_failed, pthread_join);
ALIAS (__pthread_failed, pthread_detach);
ALIAS (__pthread_failed, pthread_self);
ALIAS (__pthread_failed, pthread_equal);
ALIAS (__pthread_failed, pthread_getcpuclockid);
ALIAS (__pthread_failed, pthread_setconcurrency);
ALIAS (__pthread_failed, pthread_getconcurrency);
ALIAS (__pthread_failed, pthread_once);
ALIAS (__pthread_failed, pthread_key_create);
ALIAS (__pthread_failed, pthread_setspecific);
ALIAS (__pthread_failed, pthread_key_delete);
ALIAS (__pthread_failed, pthread_cancel);
ALIAS (__pthread_failed, pthread_setcancelstate);
ALIAS (__pthread_failed, pthread_setcanceltype);
ALIAS (__pthread_failed, pthread_barrierattr_init);
ALIAS (__pthread_failed, pthread_barrierattr_destroy);
ALIAS (__pthread_failed, pthread_barrierattr_getpshared);
ALIAS (__pthread_failed, pthread_barrierattr_setpshared);
ALIAS (__pthread_failed, pthread_barrier_init);
ALIAS (__pthread_failed, pthread_barrier_destroy);
ALIAS (__pthread_failed, pthread_barrier_wait);
ALIAS (__pthread_failed, pthread_spin_init);
ALIAS (__pthread_failed, pthread_spin_destroy);
ALIAS (__pthread_failed, pthread_spin_lock);
ALIAS (__pthread_failed, pthread_spin_trylock);
ALIAS (__pthread_failed, pthread_spin_unlock);
ALIAS (__pthread_failed, pthread_rwlockattr_init);
ALIAS (__pthread_failed, pthread_rwlockattr_destroy);
ALIAS (__pthread_failed, pthread_rwlockattr_getpshared);
ALIAS (__pthread_failed, pthread_rwlockattr_setpshared);
ALIAS (__pthread_failed, pthread_rwlock_init);
ALIAS (__pthread_failed, pthread_rwlock_destroy);
ALIAS (__pthread_failed, pthread_rwlock_rdlock);
ALIAS (__pthread_failed, pthread_rwlock_tryrdlock);
ALIAS (__pthread_failed, pthread_rwlock_timedrdlock);
ALIAS (__pthread_failed, pthread_rwlock_unlock);
ALIAS (__pthread_failed, pthread_rwlock_wrlock);
ALIAS (__pthread_failed, pthread_rwlock_trywrlock);
ALIAS (__pthread_failed, pthread_rwlock_timedwrlock);
ALIAS (__pthread_failed, pthread_getspecific);
ALIAS (__pthread_void, pthread_exit);
ALIAS (__pthread_void, pthread_yield);
ALIAS (__pthread_void, pthread_testcancel);
ALIAS (__pthread_void, _pthread_cleanup_push);
ALIAS (__pthread_void, _pthread_cleanup_pop);
ALIAS (__pthread_void, _pthread_cleanup_push_defer);
ALIAS (__pthread_void, _pthread_cleanup_pop_restore);
