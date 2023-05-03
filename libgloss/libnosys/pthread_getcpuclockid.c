#include "config.h"
#include "warning.h"
#include <pthread.h>

int
__attribute__((weak))
pthread_getcpuclockid (pthread_t __pthread_id, clockid_t *__clock_id) {
  return -1;
}
stub_warning(pthread_getcpuclockid);
