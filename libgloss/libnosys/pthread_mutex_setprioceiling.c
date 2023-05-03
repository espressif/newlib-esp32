#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_mutex_setprioceiling (pthread_mutex_t *__mutex,
				      int __prioceiling, int *__old_ceiling) {
  return -1;
}
stub_warning(pthread_mutex_setprioceiling);
