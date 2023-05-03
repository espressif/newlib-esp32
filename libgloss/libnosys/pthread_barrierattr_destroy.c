#include "config.h"
#include "warning.h"

int
__attribute__((weak))
pthread_barrierattr_destroy (void *__attr) {
  return -1;
}
stub_warning(pthread_barrierattr_destroy);
