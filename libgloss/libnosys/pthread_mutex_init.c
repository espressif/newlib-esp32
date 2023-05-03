#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_mutex_init (pthread_mutex_t *__mutex,
			    const pthread_mutexattr_t *__attr) {
  return -1;
}
stub_warning(pthread_mutex_init);
