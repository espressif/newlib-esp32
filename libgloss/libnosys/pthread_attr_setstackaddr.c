#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_attr_setstackaddr (pthread_attr_t  *__attr, void *__stackaddr) {
  return -1;
}
stub_warning(pthread_attr_setstackaddr);
