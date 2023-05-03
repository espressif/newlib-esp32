#include "config.h"
#include "warning.h"

int
__attribute__((weak))
pthread_rwlock_destroy (void *__rwlock) {
  return -1;
}
stub_warning(pthread_rwlock_destroy);
