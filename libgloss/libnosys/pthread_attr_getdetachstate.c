#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_attr_getdetachstate (const pthread_attr_t *__attr,
				     int *__detachstate) {
  return -1;
}
stub_warning(pthread_attr_getdetachstate);
