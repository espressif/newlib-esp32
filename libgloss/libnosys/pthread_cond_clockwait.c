#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_cond_clockwait(pthread_cond_t *__restrict,
                   pthread_mutex_t *__restrict, clockid_t,
				   const struct timespec *__restrict) {
  return -1;
}
stub_warning(pthread_cond_clockwait);
