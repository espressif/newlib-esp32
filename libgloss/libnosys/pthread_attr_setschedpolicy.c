#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy) {
  return -1;
}
stub_warning(pthread_attr_setschedpolicy);
