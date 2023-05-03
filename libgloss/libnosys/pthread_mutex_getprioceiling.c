#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_mutex_getprioceiling (const pthread_mutex_t *__restrict __mutex,
				      int *__prioceiling) {
  return -1;
}
stub_warning(pthread_mutex_getprioceiling);
