#include "config.h"
#include "warning.h"
#include <pthread.h>

pthread_t
__attribute__((weak))
pthread_self (void) {
  return -1;
}
stub_warning(pthread_self);
