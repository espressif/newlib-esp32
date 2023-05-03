#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_cond_timedwait (pthread_cond_t *__cond,
				pthread_mutex_t *__mutex,
				const struct timespec *__abstime) {
  return -1;
}
stub_warning(pthread_cond_timedwait);
