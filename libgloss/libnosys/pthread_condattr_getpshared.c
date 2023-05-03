#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_condattr_getpshared (const pthread_condattr_t *__attr,
				     int *__pshared) {
  return -1;
}
stub_warning(pthread_condattr_getpshared);
