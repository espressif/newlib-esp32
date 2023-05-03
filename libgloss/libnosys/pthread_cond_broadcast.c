#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_cond_broadcast (pthread_cond_t *__cond) {
  return -1;
}
stub_warning(pthread_cond_broadcast);
