#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_mutexattr_gettype (const pthread_mutexattr_t *__attr, int *__kind) {
  return -1;
}
stub_warning(pthread_mutexattr_gettype);
