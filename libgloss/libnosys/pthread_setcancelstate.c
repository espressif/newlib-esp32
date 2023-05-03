#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_setcancelstate (int __state, int *__oldstate) {
  return -1;
}
stub_warning(pthread_setcancelstate);
