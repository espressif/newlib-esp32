#include "config.h"
#include "warning.h"

int
__attribute__((weak))
pthread_rwlock_wrlock (void *__rwlock) {
  return -1;
}
stub_warning(pthread_rwlock_wrlock);
