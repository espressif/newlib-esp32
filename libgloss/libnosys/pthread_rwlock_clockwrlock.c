#include "config.h"
#include "warning.h"
#include <sys/types.h>

int
__attribute__((weak))
pthread_rwlock_clockwrlock(void *__restrict _pthread, clockid_t,
				   const void *__restrict) {
  return -1;
}
stub_warning(pthread_rwlock_clockwrlock);
