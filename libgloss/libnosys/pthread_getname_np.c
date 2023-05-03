#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_getname_np(pthread_t, char *, size_t) {
  return -1;
}
stub_warning(pthread_getname_np);
