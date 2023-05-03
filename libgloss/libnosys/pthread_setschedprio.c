#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_setschedprio (pthread_t thread, int prio) {
  return -1;
}
stub_warning(pthread_setschedprio);
