#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_mutex_lock (pthread_mutex_t *__mutex) {
  return -1;
}
stub_warning(pthread_mutex_lock);
