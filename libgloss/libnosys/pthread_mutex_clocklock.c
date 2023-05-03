#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_mutex_clocklock(pthread_mutex_t *__restrict, clockid_t,
				   const struct timespec *__restrict) {
  return -1;
}
stub_warning(pthread_mutex_clocklock);
