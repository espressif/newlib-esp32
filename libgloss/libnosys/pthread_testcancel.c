#include "config.h"
#include "warning.h"
#include <pthread.h>

void
__attribute__((weak))
pthread_testcancel (void) {
  return;
}
stub_warning(pthread_testcancel);
