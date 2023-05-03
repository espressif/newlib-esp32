#include "config.h"
#include "warning.h"

int
__attribute__((weak))
pthread_rwlockattr_getpshared (const void *__attr,
				       int *__pshared) {
  return -1;
}
stub_warning(pthread_rwlockattr_getpshared);
