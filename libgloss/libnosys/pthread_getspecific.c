#include "config.h"
#include "warning.h"
#include <pthread.h>

void *
__attribute__((weak))
pthread_getspecific (pthread_key_t __key) {
  return NULL;
}
stub_warning(pthread_getspecific);
