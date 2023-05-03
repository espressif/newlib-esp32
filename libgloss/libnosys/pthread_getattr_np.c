#include "config.h"
#include "warning.h"
#include <pthread.h>


int
__attribute__((weak))
pthread_getattr_np (pthread_t __id, pthread_attr_t *__attr) {
  return -1;
}
stub_warning(pthread_getattr_np);
