#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_detach (pthread_t __pthread) {
  return -1;
}
stub_warning(pthread_detach);
