#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_setspecific (pthread_key_t __key, const void *__value) {
  return -1;
}
stub_warning(pthread_setspecific);
