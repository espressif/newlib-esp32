#include "config.h"
#include "warning.h"
#include <pthread.h>

void
__attribute__((weak))
pthread_yield (void) {
  return;
}
stub_warning(pthread_yield);
