#include "config.h"
#include "warning.h"
#include <sys/types.h>

int
__attribute__((weak))
pthread_rwlock_clockrdlock(void *__restrict rwlock, clockid_t clock_id,
				   const void *__restrict abstime) {
  return -1;
}
stub_warning(pthread_rwlock_clockrdlock);
