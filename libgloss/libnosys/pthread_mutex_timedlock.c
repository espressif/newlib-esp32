#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_mutex_timedlock (pthread_mutex_t *__mutex,
				 const struct timespec *__timeout) {
  return -1;
}
stub_warning(pthread_mutex_timedlock);
