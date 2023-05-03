#include "config.h"
#include "warning.h"

int
__attribute__((weak))
pthread_rwlock_init (void *__rwlock,
			     const void *__attr) {
  return -1;
}
stub_warning(pthread_rwlock_init);
