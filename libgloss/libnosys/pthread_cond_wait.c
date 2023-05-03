#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_cond_wait (pthread_cond_t *__cond, pthread_mutex_t *__mutex) {
  return -1;
}
stub_warning(pthread_cond_wait);
