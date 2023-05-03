#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_mutexattr_init (pthread_mutexattr_t *__attr) {
  return -1;
}
stub_warning(pthread_mutexattr_init);
