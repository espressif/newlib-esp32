#include "config.h"
#include "warning.h"

int
__attribute__((weak))
pthread_rwlockattr_destroy (void *__attr) {
  return -1;
}
stub_warning(pthread_rwlockattr_destroy);
